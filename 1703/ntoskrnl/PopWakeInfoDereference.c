/*
 * XREFs of PopWakeInfoDereference @ 0x14013CC18
 * Callers:
 *     PopTimeoutWakeTracking @ 0x14013CA74 (PopTimeoutWakeTracking.c)
 *     PopDereferenceWakeInfos @ 0x14013CBA4 (PopDereferenceWakeInfos.c)
 *     PopUpdateWakeSourceWorker @ 0x14022DE30 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x14040A2B8 (PopNewWakeInfo.c)
 * Callees:
 *     <none>
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
