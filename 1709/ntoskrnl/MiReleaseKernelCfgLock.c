/*
 * XREFs of MiReleaseKernelCfgLock @ 0x1406EA540
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x14059EF50 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388330, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388330);
  KeAbPostRelease((ULONG_PTR)&qword_140388330);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
