/*
 * XREFs of ExTryAcquireCacheAwarePushLockSharedEx @ 0x1402B9570
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExTryAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  volatile signed __int64 *v3; // rbp
  _KLOCK_ENTRY *v4; // rdi
  bool v5; // bl

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = *(volatile signed __int64 **)(BugCheckParameter2 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = (_KLOCK_ENTRY *)KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
  v5 = !_InterlockedCompareExchange64(v3, 17LL, 0LL) || ExfTryAcquirePushLockShared((unsigned __int64 *)v3);
  if ( v4 )
  {
    if ( v5 )
      v4->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v4);
  }
  return (unsigned __int64)v3 & -(__int64)v5;
}
