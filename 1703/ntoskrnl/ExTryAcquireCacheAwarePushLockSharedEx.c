/*
 * XREFs of ExTryAcquireCacheAwarePushLockSharedEx @ 0x14025B580
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140007170 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExTryAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  volatile signed __int64 *v3; // rbp
  _KLOCK_ENTRY *v4; // rbx
  bool v5; // di

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = *(volatile signed __int64 **)(BugCheckParameter2 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = (_KLOCK_ENTRY *)KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
  v5 = !_InterlockedCompareExchange64(v3, 17LL, 0LL) || ExfTryAcquirePushLockShared((signed __int64 *)v3);
  if ( v4 )
  {
    if ( v5 )
      v4->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v4);
  }
  return (unsigned __int64)v3 & -(__int64)v5;
}
