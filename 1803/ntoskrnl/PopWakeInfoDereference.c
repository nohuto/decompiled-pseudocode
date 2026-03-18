/*
 * XREFs of PopWakeInfoDereference @ 0x140154F98
 * Callers:
 *     PopTimeoutWakeTracking @ 0x140154DF4 (PopTimeoutWakeTracking.c)
 *     PopDereferenceWakeInfos @ 0x140154F24 (PopDereferenceWakeInfos.c)
 *     PopUpdateWakeSourceWorker @ 0x140278980 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x140470EF8 (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
