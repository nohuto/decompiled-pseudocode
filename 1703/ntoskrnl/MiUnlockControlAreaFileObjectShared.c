/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x1400149FC
 * Callers:
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 104;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
