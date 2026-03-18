/*
 * XREFs of PnpBootPhaseComplete @ 0x1405C4A2C
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PipForDeviceNodeSubtree @ 0x14055F440 (PipForDeviceNodeSubtree.c)
 *     PiDrvDbInit @ 0x1405C6358 (PiDrvDbInit.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  v0 = PiDrvDbInit(2LL);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 2, 0, 39LL, 0LL, 0LL, 0LL);
    if ( (PiDevCfgMode & 2) != 0 )
    {
      v0 = PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiDevCfgProcessDeviceCallback, 0LL);
      if ( v0 < 0 )
        return (unsigned int)v0;
    }
    else
    {
      v0 = 0;
    }
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6E697050u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = PipUpdateDeviceProducts;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, NormalWorkQueue);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v0;
}
