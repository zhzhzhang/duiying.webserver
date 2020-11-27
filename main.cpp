#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

const int THREADPOOL_THREAD_NUM = 4;
const int QUEUE_SIZE = 65535;

const int PORT = 8888;
const int ASK_STATIC_FILE = 1;
const int ASK_IMAGE_STITCH = 2;
const string PATH = "/";
const int TIMER_TIME_OUT = 500;

extern pthread_mutex_t qlock;
extern epoll_event* events;