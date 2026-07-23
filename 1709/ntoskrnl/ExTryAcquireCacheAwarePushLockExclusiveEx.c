/*
 * XREFs of ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140284DE0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int32 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v3; // rbp
  volatile signed __int32 **v4; // rsi
  PRTL_BALANCED_NODE v5; // rdi
  volatile signed __int32 *v7; // rcx

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v3 = (ULONG_PTR)(BugCheckParameter2 + 32);
  v4 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1);
  if ( (unsigned __int64)BugCheckParameter2 >= v3 )
  {
LABEL_9:
    if ( v5 )
      BYTE2(v5[1].Left) |= 1u;
    return 1;
  }
  else
  {
    while ( !_interlockedbittestandset64(*v4, 0LL) )
    {
      if ( (unsigned __int64)++v4 >= v3 )
        goto LABEL_9;
    }
    while ( v4 != BugCheckParameter2 )
    {
      v7 = *--v4;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)*v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v7);
    }
    if ( v5 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (unsigned __int64)v5);
    return 0;
  }
}
