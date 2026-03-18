/*
 * XREFs of MiReleaseKernelCfgLock @ 0x1406BD760
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1405858D8 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C010, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C010);
  KeAbPostRelease((ULONG_PTR)&qword_14036C010);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
