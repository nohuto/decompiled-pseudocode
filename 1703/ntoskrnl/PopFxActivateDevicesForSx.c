/*
 * XREFs of PopFxActivateDevicesForSx @ 0x14013C9AC
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x14022B578 (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PopFxActivateDevicesForSx(unsigned int a1)
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
    if ( v4 && *(unsigned __int8 *)(v4 + 200) < a1 && (*(_DWORD *)(i + 624) & 1) == 0 )
    {
      PopFxActivateDevice(*(_QWORD *)(v4 + 32), 0);
      *(_DWORD *)(v4 + 296) |= 0x1000u;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
