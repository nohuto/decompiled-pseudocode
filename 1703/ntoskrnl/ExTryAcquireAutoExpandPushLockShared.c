/*
 * XREFs of ExTryAcquireAutoExpandPushLockShared @ 0x1401506E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140007170 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14025B2DC (ExpTryAcquireFannedOutPushLockShared.c)
 */

ULONG_PTR __fastcall ExTryAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  _KLOCK_ENTRY *v2; // rsi
  ULONG_PTR v3; // rbx
  int v5; // ebp
  int v6; // ecx

  v2 = 0LL;
  v3 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = (_KLOCK_ENTRY *)KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
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
      v2->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v2);
  }
  return v3;
}
