/*
 * XREFs of ExTryAcquireAutoExpandPushLockExclusive @ 0x14015E8D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x1400B5C0C (ExpAeUpdateStatsForExclusiveRelease.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1402B925C (ExpTryAcquireFannedOutPushLockExclusive.c)
 */

char __fastcall ExTryAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  _KLOCK_ENTRY *v2; // rdi
  int v4; // ecx
  char v5; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = (_KLOCK_ENTRY *)KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    v10 = *(_DWORD *)(BugCheckParameter2 + 12);
    v5 = 0;
    if ( ExpAeUpdateStatsForExclusiveRelease(&v10) )
      *(_DWORD *)(BugCheckParameter2 + 12) = v10;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 8);
    v5 = 1;
    if ( (v4 & 1) != 0 )
    {
      v5 = ExpTryAcquireFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
      if ( !v5
        && (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v7, v8, v9);
      }
    }
  }
  if ( v2 )
  {
    if ( v5 )
      v2->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v2);
  }
  return v5;
}
