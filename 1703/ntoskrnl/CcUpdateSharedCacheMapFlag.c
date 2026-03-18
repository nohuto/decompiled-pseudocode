/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x14002933C
 * Callers:
 *     CcBoostLowPriorityWorkerThread @ 0x140029248 (CcBoostLowPriorityWorkerThread.c)
 *     CcCopyReadEx @ 0x14009D6C0 (CcCopyReadEx.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400AB33C (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x140117884 (CcUpdateReadHistory.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyFromCache @ 0x1405141C0 (CcMapAndCopyFromCache.c)
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 *     CcMdlRead @ 0x140549510 (CcMdlRead.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 528) + 64LL), &LockHandle);
  if ( a3 )
    *(_DWORD *)(a1 + 152) |= a2;
  else
    *(_DWORD *)(a1 + 152) &= ~a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
