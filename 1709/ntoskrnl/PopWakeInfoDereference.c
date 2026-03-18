/*
 * XREFs of PopWakeInfoDereference @ 0x1402418E0
 * Callers:
 *     PopDereferenceWakeInfos @ 0x14024131C (PopDereferenceWakeInfos.c)
 *     PopTimeoutWakeTracking @ 0x140241468 (PopTimeoutWakeTracking.c)
 *     PopUpdateWakeSourceWorker @ 0x1402416F0 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x140431C7C (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
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
