/*
 * XREFs of ACPIPepCleanupPlatformNotificationSupport @ 0x1C007FD84
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPISetDeviceWorker @ 0x1C0042E9C (ACPISetDeviceWorker.c)
 */

char __fastcall ACPIPepCleanupPlatformNotificationSupport(ULONG_PTR BugCheckParameter4)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char result; // al

  if ( *(_BYTE *)(BugCheckParameter4 + 240) )
  {
    v2 = *(void **)(BugCheckParameter4 + 256);
    if ( v2 )
    {
      PoUnregisterPowerSettingCallback(v2);
      *(_QWORD *)(BugCheckParameter4 + 256) = 0LL;
    }
    v3 = *(void **)(BugCheckParameter4 + 264);
    if ( v3 )
    {
      PoUnregisterPowerSettingCallback(v3);
      *(_QWORD *)(BugCheckParameter4 + 264) = 0LL;
    }
    v4 = *(void **)(BugCheckParameter4 + 272);
    if ( v4 )
    {
      PoUnregisterPowerSettingCallback(v4);
      *(_QWORD *)(BugCheckParameter4 + 272) = 0LL;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(BugCheckParameter4 + 184));
    KeInitializeEvent((PRKEVENT)(BugCheckParameter4 + 280), NotificationEvent, 0);
    *(_DWORD *)(BugCheckParameter4 + 252) = 0;
    *(_DWORD *)(BugCheckParameter4 + 248) = 1;
    *(_BYTE *)(BugCheckParameter4 + 243) = 0;
    *(_BYTE *)(BugCheckParameter4 + 245) = 0;
    ACPISetDeviceWorker(BugCheckParameter4, 1);
    ExReleaseFastMutex((PFAST_MUTEX)(BugCheckParameter4 + 184));
    KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 280), Executive, 0, 0, 0LL);
    *(_BYTE *)(BugCheckParameter4 + 240) = 0;
    return ACPIInitDereferenceDeviceExtensionUnlocked(BugCheckParameter4);
  }
  return result;
}
