/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140007170
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140006FD0 (ExTryAcquirePushLockSharedEx.c)
 *     MiLeapPrefetch @ 0x14003A5C0 (MiLeapPrefetch.c)
 *     PfLockSharedTryAcquire @ 0x140061B34 (PfLockSharedTryAcquire.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400F01E0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1401506E0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     IopProcessIoTracking @ 0x1401F5BB0 (IopProcessIoTracking.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14025B2DC (ExpTryAcquireFannedOutPushLockShared.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14025B580 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x14066A58C (TryLockShutdownShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  char v2; // dl
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  signed __int64 v5; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( (v3 & 1) == 0 || (v3 & 2) == 0 && (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v4 = v3 | 1;
    if ( (v3 & 2) == 0 )
      v4 += 16LL;
    v5 = v3;
    v3 = _InterlockedCompareExchange64(a1, v4, v3);
    if ( v5 == v3 )
      return 1;
  }
  return v2;
}
