/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x1404C7FE4
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x14007329C (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v2; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a1 != 1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14036C160, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14036C160);
    KeAbPostRelease((ULONG_PTR)&qword_14036C160);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14036C160, 0LL);
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14036C160, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14036C160);
  KeAbPostRelease((ULONG_PTR)&qword_14036C160);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
