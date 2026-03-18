/*
 * XREFs of ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14024F5C0
 * Callers:
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14024AFFC (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 * Callees:
 *     SmKmStoreReference @ 0x140053794 (SmKmStoreReference.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  unsigned int v9; // edi
  int v10; // eax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6D546D73u);
  if ( PoolWithTag )
  {
    if ( SmKmStoreReference(a1, *(_DWORD *)(a2 + 5984)) )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = SmKmStoreTerminateWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)(a2 + 6184);
      PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)a1;
      LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a2 + 5984);
      v10 = *(_DWORD *)(a1 + 1800) & 1;
      LODWORD(PoolWithTag[1].Parameter) = a3;
      HIDWORD(PoolWithTag[1].WorkerRoutine) = v10;
      HIDWORD(PoolWithTag[1].Parameter) = a4;
      ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
      PoolWithTag = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741431;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
