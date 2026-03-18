/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x1404479F4
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x140008A6C (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v2; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a1 != 1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403884A0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1403884A0);
    KeAbPostRelease((ULONG_PTR)&qword_1403884A0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1403884A0, 0LL);
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403884A0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403884A0);
  KeAbPostRelease((ULONG_PTR)&qword_1403884A0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
