/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x1400A27C0
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     PfLockSharedTryAcquire @ 0x1400A2528 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400A2630 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140103AA0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14015A3E0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14015A4A0 (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x1402386C4 (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1402590DC (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1402B9570 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x1406FA7D8 (TryLockShutdownShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(unsigned __int64 *a1)
{
  char v2; // r9
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( 1 )
  {
    v4 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v4 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v5 = (v3 | 1) + 16;
    if ( v4 )
      v5 = v3 | 1;
    v6 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v5, v3);
    if ( v6 == v3 )
      return 1;
  }
  return v2;
}
