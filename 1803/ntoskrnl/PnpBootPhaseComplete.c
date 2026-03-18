/*
 * XREFs of PnpBootPhaseComplete @ 0x14062461C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlInit @ 0x140622640 (PiPnpRtlInit.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  void *v1; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  v0 = PiPnpRtlInit(2u);
  if ( v0 >= 0 )
  {
    v1 = *(void **)(IopRootDeviceNode + 32);
    PnpBootMode = 0;
    PnpRequestDeviceAction(v1, 2, 0, 39LL, 0LL, 0LL, 0LL);
    v0 = PpDevCfgProcessDevices();
    if ( v0 >= 0 )
    {
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
  }
  return (unsigned int)v0;
}
