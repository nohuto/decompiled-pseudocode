/*
 * XREFs of VrpDecrementSiloCount @ 0x140679108
 * Callers:
 *     VrpJobContextDelete @ 0x1406793D0 (VrpJobContextDelete.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x140660520 (CmUnRegisterCallback.c)
 */

__int64 VrpDecrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gActiveSilosLock, 0LL);
  if ( !--gNumActiveSilos )
    CmUnRegisterCallback(gCallbackCookie);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&gActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&gActiveSilosLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
