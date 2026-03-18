/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x14009AF9C
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140042A4C (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x140098E60 (CcUpdateReadHistory.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     CcCopyReadEx @ 0x14011D5C0 (CcCopyReadEx.c)
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x1405B6B00 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 Partition; // rax
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Partition = CcGetPartition(a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v7 = *(_DWORD *)(a1 + 152);
  if ( a3 )
    v8 = a2 | v7;
  else
    v8 = ~a2 & v7;
  *(_DWORD *)(a1 + 152) = v8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
