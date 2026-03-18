/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0010B84 (ACPIDetectPdoDevices.c)
 *     ACPIFilterIrpSetPower @ 0x1C002B480 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIntfDereference @ 0x1C00421C0 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0042350 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00433C4 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C004AA70 (AcpiDeviceResetDereference.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C0051ED0 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C0055B40 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0057EB0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C0085008 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C00A0940 (ACPIInterfaceDereferenceDeviceExtension.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0011088 (ACPIInitDereferenceDeviceExtensionLocked.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LOBYTE(BugCheckParameter4) = ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return BugCheckParameter4;
}
