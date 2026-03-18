/*
 * XREFs of MiIncreaseCommitLimits @ 0x140159BD4
 * Callers:
 *     MiInitializeCommitment @ 0x140159A60 (MiInitializeCommitment.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1405B9FB8 (MiInsertPageFileInList.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiExtendPagingFiles @ 0x1406B7A90 (MiExtendPagingFiles.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140159CC0 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x140159DA0 (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v9 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4968), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 4936) + a3) < *(_QWORD *)(a1 + 4936) )
  {
    v9 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6128), a2);
      *(_QWORD *)(a1 + 6248) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 4936) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6128), 2uLL);
      v10 = *(unsigned int *)(a1 + 5592);
      *(_QWORD *)(a1 + 8 * v10 + 5600) = a5;
      *(_DWORD *)(a1 + 5592) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v9;
}
