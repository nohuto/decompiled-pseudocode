/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140100550
 * Callers:
 *     PfLockSharedTryAcquire @ 0x140001F44 (PfLockSharedTryAcquire.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140084450 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1401003B0 (ExTryAcquirePushLockSharedEx.c)
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140145BA0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x140145C60 (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x1401FB984 (IopProcessIoTracking.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140284EB0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x140694C14 (TryLockShutdownShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  char v2; // r8
  signed __int64 v3; // rax
  signed __int64 v5; // rcx
  signed __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( (v3 & 1) == 0 || (v3 & 2) == 0 && (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = (v3 | 1) + 16;
    if ( (v3 & 2) != 0 )
      v5 = v3 | 1;
    v6 = v3;
    v3 = _InterlockedCompareExchange64(a1, v5, v3);
    if ( v6 == v3 )
      return 1;
  }
  return v2;
}
