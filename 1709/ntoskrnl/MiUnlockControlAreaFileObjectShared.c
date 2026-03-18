/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x1400F2868
 * Callers:
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
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
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
