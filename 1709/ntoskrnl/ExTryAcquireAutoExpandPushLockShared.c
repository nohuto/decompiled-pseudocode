/*
 * XREFs of ExTryAcquireAutoExpandPushLockShared @ 0x140145BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x140100550 (ExfTryAcquirePushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x140145C60 (ExpTryAcquireFannedOutPushLockShared.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExTryAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  PRTL_BALANCED_NODE v2; // rsi
  ULONG_PTR v3; // rbx
  int v5; // ebp
  int v6; // ecx

  v2 = 0LL;
  v3 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
  v6 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v6 & 1) != 0 )
  {
    v3 = ExpTryAcquireFannedOutPushLockShared(v6 & 0xFFFFFFF8);
  }
  else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
         || ExfTryAcquirePushLockShared((signed __int64 *)BugCheckParameter2) )
  {
    v3 = BugCheckParameter2 | 1;
  }
  if ( !v5 && v3 )
    v3 |= 2uLL;
  if ( v2 )
  {
    if ( v3 )
      BYTE2(v2[1].Left) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, (unsigned __int64)v2);
  }
  return v3;
}
