/*
 * XREFs of PpProfileCancelTransitioningDock @ 0x14069FE88
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0008 (PipProcessEnumeratedChildDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140694060 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x14069FAA0 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14069FBE8 (PnpProfileUpdateHardwareProfile.c)
 */

void __fastcall PpProfileCancelTransitioningDock(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  *(_DWORD *)(a1 + 568) = 1;
  LODWORD(a1) = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( (_DWORD)a1 == 1 )
  {
    if ( (int)PnpProfileUpdateHardwareProfile((__int64)&v3) >= 0 && (_BYTE)v3 )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
      PiProfileUpdateDeviceTree();
    }
    else
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
    }
    KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
}
