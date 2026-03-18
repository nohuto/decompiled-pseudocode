/*
 * XREFs of MiIncreaseCommitLimits @ 0x14017DC60
 * Callers:
 *     MiInitializeCommitment @ 0x14017DAD8 (MiInitializeCommitment.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 *     MiMapNewPfns @ 0x14074AF30 (MiMapNewPfns.c)
 *     MiExtendPagingFiles @ 0x14074EAF8 (MiExtendPagingFiles.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14017DD4C (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x14017DF20 (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v9 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 6184), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 6152) + a3) < *(_QWORD *)(a1 + 6152) )
  {
    v9 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7400), a2);
      *(_QWORD *)(a1 + 7528) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 6152) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7400), 2uLL);
      v10 = *(unsigned int *)(a1 + 6872);
      *(_QWORD *)(a1 + 8 * v10 + 6880) = a5;
      *(_DWORD *)(a1 + 6872) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v9;
}
