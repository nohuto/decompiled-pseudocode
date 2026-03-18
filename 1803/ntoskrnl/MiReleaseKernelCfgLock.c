/*
 * XREFs of MiReleaseKernelCfgLock @ 0x140754378
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140605D78 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall MiReleaseKernelCfgLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB4D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB4D0, a2, a3, a4);
  KeAbPostRelease((ULONG_PTR)&qword_1403CB4D0);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
