/*
 * XREFs of CmpDoQueueSystemHiveHysteresis @ 0x1406624D0
 * Callers:
 *     CmpUpdateSystemHiveHysteresis @ 0x14043B514 (CmpUpdateSystemHiveHysteresis.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1405D577C (CmRegisterSystemHiveLimitCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpDoQueueSystemHiveHysteresis(int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpSystemHiveHysteresisWorker;
    CmpSystemHiveHysteresisHitRatio = a1;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
