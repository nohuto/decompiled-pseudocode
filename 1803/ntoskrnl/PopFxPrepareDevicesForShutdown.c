/*
 * XREFs of PopFxPrepareDevicesForShutdown @ 0x140275C64
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PopFxActivateDevicesForSx @ 0x14014E198 (PopFxActivateDevicesForSx.c)
 */

_QWORD *PopFxPrepareDevicesForShutdown()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  PopFxEnableShutdownActiveBias = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock, v1, v2, v3);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return PopFxActivateDevicesForSx(4u);
}
