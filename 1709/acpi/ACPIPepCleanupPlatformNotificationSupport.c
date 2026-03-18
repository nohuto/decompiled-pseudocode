/*
 * XREFs of ACPIPepCleanupPlatformNotificationSupport @ 0x1C0085008
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPISetDeviceWorker @ 0x1C0024760 (ACPISetDeviceWorker.c)
 */

char __fastcall ACPIPepCleanupPlatformNotificationSupport(ULONG_PTR a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char result; // al

  if ( *(_BYTE *)(a1 + 240) )
  {
    v2 = *(void **)(a1 + 256);
    if ( v2 )
    {
      PoUnregisterPowerSettingCallback(v2);
      *(_QWORD *)(a1 + 256) = 0LL;
    }
    v3 = *(void **)(a1 + 264);
    if ( v3 )
    {
      PoUnregisterPowerSettingCallback(v3);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
    v4 = *(void **)(a1 + 272);
    if ( v4 )
    {
      PoUnregisterPowerSettingCallback(v4);
      *(_QWORD *)(a1 + 272) = 0LL;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 184));
    KeInitializeEvent((PRKEVENT)(a1 + 280), NotificationEvent, 0);
    *(_DWORD *)(a1 + 252) = 0;
    *(_DWORD *)(a1 + 248) = 1;
    *(_BYTE *)(a1 + 243) = 0;
    *(_BYTE *)(a1 + 245) = 0;
    ACPISetDeviceWorker(a1, 1);
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 184));
    KeWaitForSingleObject((PVOID)(a1 + 280), Executive, 0, 0, 0LL);
    *(_BYTE *)(a1 + 240) = 0;
    return ACPIInitDereferenceDeviceExtensionUnlocked(a1);
  }
  return result;
}
