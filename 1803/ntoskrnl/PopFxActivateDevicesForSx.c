/*
 * XREFs of PopFxActivateDevicesForSx @ 0x14014E198
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x140275C64 (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 */

_QWORD *__fastcall PopFxActivateDevicesForSx(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  __int64 v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v4 = *(_QWORD *)(i + 48);
    if ( v4 && *(unsigned __int8 *)(v4 + 200) < a1 && (*(_DWORD *)(i + 704) & 1) == 0 )
    {
      PopFxActivateDevice(*(_QWORD *)(v4 + 32), 0, 0);
      *(_DWORD *)(v4 + 296) |= 0x1000u;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
