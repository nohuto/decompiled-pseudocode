/*
 * XREFs of EtwInitialize @ 0x1405C6814
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExIsSoftBoot @ 0x1401346F0 (ExIsSoftBoot.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407533E0 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
    {
      EtwpFileSystemReady = 1;
      if ( ExIsSoftBoot() )
      {
        EtwpLoggerSaveInProgress = 1;
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4B777445u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpSavePersistedLoggersWorker;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, NormalWorkQueue);
        }
        else
        {
          EtwpSavePersistedLoggersWorker(0LL);
        }
      }
    }
  }
  else
  {
    EtwpInitialize();
  }
}
