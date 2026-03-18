/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x1407319FC
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x140731DEC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140731E94 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  PoolWithTag->Parameter = PoolWithTag;
  ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  return 0LL;
}
