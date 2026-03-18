/*
 * XREFs of VrpDecrementSiloCount @ 0x1406A3124
 * Callers:
 *     VrpJobContextDelete @ 0x1406A36F0 (VrpJobContextDelete.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x140689490 (CmUnRegisterCallback.c)
 */

_QWORD *VrpDecrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpActiveSilosLock, 0LL);
  if ( !--VrpNumActiveSilos )
    CmUnRegisterCallback(VrpCallbackCookie);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
