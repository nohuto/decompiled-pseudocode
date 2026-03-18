/*
 * XREFs of EtwInitialize @ 0x14059E53C
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExIsSoftBoot @ 0x140159410 (ExIsSoftBoot.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
    {
      EtwpFileSystemReady = 1;
      if ( (unsigned __int8)ExIsSoftBoot() )
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
