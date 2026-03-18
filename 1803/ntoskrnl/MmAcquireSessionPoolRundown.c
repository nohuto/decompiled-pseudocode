/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x14055F9D8
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x1400B8EB0 (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v2; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a1 != 1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CB628, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1403CB628);
    KeAbPostRelease((ULONG_PTR)&qword_1403CB628);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1403CB628, 0LL);
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CB628, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403CB628);
  KeAbPostRelease((ULONG_PTR)&qword_1403CB628);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
