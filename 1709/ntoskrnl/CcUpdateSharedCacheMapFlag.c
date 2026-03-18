/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x140116AA8
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140022680 (CcApplyLowIoPriorityToThread.c)
 *     CcCopyReadEx @ 0x14007AB90 (CcCopyReadEx.c)
 *     CcUpdateReadHistory @ 0x1400BBCE0 (CcUpdateReadHistory.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 *     CcMapAndCopyFromCache @ 0x1404A68D0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 Partition; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Partition = CcGetPartition((_QWORD *)a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  if ( a3 )
    *(_DWORD *)(a1 + 152) |= a2;
  else
    *(_DWORD *)(a1 + 152) &= ~a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
