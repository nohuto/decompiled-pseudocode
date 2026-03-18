/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704
 * Callers:
 *     ACPIDockIntfDereference @ 0x1C00081C0 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0008350 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000B954 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     AcpiDeviceResetDereference @ 0x1C0020940 (AcpiDeviceResetDereference.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0024910 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C0024BB0 (ACPIFilterIrpSetPower.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C002E950 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C0035930 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0039540 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C0078CC0 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C007FD84 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00286A0 (ACPIInitDereferenceDeviceExtensionLocked.c)
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
