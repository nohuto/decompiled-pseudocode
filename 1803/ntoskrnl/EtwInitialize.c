/*
 * XREFs of EtwInitialize @ 0x1406224E0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExIsSoftBoot @ 0x140171830 (ExIsSoftBoot.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407BA190 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
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
