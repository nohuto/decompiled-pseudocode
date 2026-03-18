/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1406DF064
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 */

__int64 __fastcall PspQueueDeferredWorkAndWait(__int64 a1, __int64 a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v6)(__int64); // [rsp+68h] [rbp-20h]
  __int64 v7; // [rsp+70h] [rbp-18h]
  unsigned int v8; // [rsp+78h] [rbp-10h]

  if ( PsIsSystemProcess(KeGetCurrentThread()->ApcState.Process) )
    return PspInitializeServerSiloDeferred(a2);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = 0;
  WorkItem.List.Flink = 0LL;
  v6 = PspInitializeServerSiloDeferred;
  v7 = a2;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  return v8;
}
