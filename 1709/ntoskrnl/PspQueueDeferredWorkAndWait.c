/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1407154E4
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 */

__int64 __fastcall PspQueueDeferredWorkAndWait(__int64 a1, __int64 a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v6)(__int64); // [rsp+68h] [rbp-20h]
  __int64 v7; // [rsp+70h] [rbp-18h]
  unsigned int v8; // [rsp+78h] [rbp-10h]

  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    return PspInitializeServerSiloDeferred(a2);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = a2;
  v6 = PspInitializeServerSiloDeferred;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  WorkItem.Parameter = &Event;
  v8 = 0;
  WorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  return v8;
}
