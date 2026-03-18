/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x140083274
 * Callers:
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 104);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
