/*
 * XREFs of PopFxIdleDevicesFromSx @ 0x14013C8A0
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 PopFxIdleDevicesFromSx()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v2 = *(_QWORD *)(i + 48);
    if ( v2 && (*(_DWORD *)(i + 624) & 1) == 0 && !*(_BYTE *)(v2 + 200) )
    {
      PoFxIdleDevice(*(_QWORD *)(v2 + 32));
      *(_DWORD *)(v2 + 296) &= ~0x1000u;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
