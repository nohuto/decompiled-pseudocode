/*
 * XREFs of PopFxFreeChildDevicesActiveList @ 0x1406C7804
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140031D28 (IoControlPnpDeviceActionQueue.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

void __fastcall PopFxFreeChildDevicesActiveList(__int64 a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = *(__int64 **)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  IoControlPnpDeviceActionQueue(1);
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (__int64 *)v4[1];
  v6 = v4;
  while ( v5 )
  {
    v6 = v5;
    v5 = (__int64 *)v5[1];
  }
  while ( v6 != v4 )
  {
    *((_DWORD *)v6 + 74) &= ~0x10u;
    if ( (v6[37] & 0x20) != 0 )
    {
      ObfDereferenceObject((PVOID)v6[4]);
      *((_DWORD *)v6 + 74) &= ~0x20u;
    }
    v7 = (__int64 *)*v6;
    if ( *v6 )
    {
      do
      {
        v6 = v7;
        v7 = (__int64 *)v7[1];
      }
      while ( v7 );
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  IoControlPnpDeviceActionQueue(0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(a2, 0x4D584650u);
}
