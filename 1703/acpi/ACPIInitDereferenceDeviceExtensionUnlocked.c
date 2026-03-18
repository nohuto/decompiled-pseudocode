/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008504
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A8B0 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIntfDereference @ 0x1C0042650 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C00427E0 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0043A04 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C004B670 (AcpiDeviceResetDereference.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C004E610 (ACPIFilterIrpRemoveDevice.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C0051490 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C0054F50 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C00572B0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C009D9C0 (ACPIInterfaceDereferenceDeviceExtension.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(volatile signed __int32 *Entry)
{
  KIRQL v2; // di
  char v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( _InterlockedExchangeAdd(Entry + 171, 0xFFFFFFFF) == 1 )
  {
    ACPIInitDeleteDeviceExtension((PVOID)Entry);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return v3;
}
