/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C00070E8
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C00063B0 (ACPIFixedFeatureButtonInitialize.c)
 *     OSNotifyCreateThermalZone @ 0x1C0006788 (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreateProcessor @ 0x1C0006B64 (OSNotifyCreateProcessor.c)
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001341C (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0013820 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00142F4 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00275F0 (OSNotifyCreateOperationRegion.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A8B0 (ACPIFilterIrpSetPower.c)
 *     AcpiDeviceResetInterface @ 0x1C004B6D0 (AcpiDeviceResetInterface.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C004E610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 *     DispatchNotification @ 0x1C0054E44 (DispatchNotification.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C008B8DC (ACPIBusReenumerateSelfInterface.c)
 *     ACPIDockIntfReference @ 0x1C009AE60 (ACPIDockIntfReference.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C009D9D0 (ACPIInterfaceReferenceDeviceExtension.c)
 *     OSInitializeCallbacks @ 0x1C00ACC5C (OSInitializeCallbacks.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 684) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
  return 1;
}
