/*
 * XREFs of MiIncreaseCommitLimits @ 0x14014FD74
 * Callers:
 *     MiInitializeCommitment @ 0x14014FC00 (MiInitializeCommitment.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1405D4984 (MiInsertPageFileInList.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MiExtendPagingFiles @ 0x1406E46D4 (MiExtendPagingFiles.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14014FE60 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x14014FF48 (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v9 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5096), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 5064) + a3) < *(_QWORD *)(a1 + 5064) )
  {
    v9 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6320), a2);
      *(_QWORD *)(a1 + 6440) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 5064) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6320), 2uLL);
      v10 = *(unsigned int *)(a1 + 5784);
      *(_QWORD *)(a1 + 8 * v10 + 5792) = a5;
      *(_DWORD *)(a1 + 5784) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v9;
}
