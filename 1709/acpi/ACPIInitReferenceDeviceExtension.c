/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C0011260
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0010B84 (ACPIDetectPdoDevices.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E140 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E1F8 (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E600 (ACPIGpeBuildWakeMasks.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0022348 (ACPIFixedFeatureButtonInitialize.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0028A5C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0029320 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002A160 (OSNotifyCreateThermalZone.c)
 *     ACPIFilterIrpSetPower @ 0x1C002B480 (ACPIFilterIrpSetPower.c)
 *     AcpiDeviceResetInterface @ 0x1C004AAD0 (AcpiDeviceResetInterface.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F024 (ACPIInitDeleteDeviceExtension.c)
 *     DispatchNotification @ 0x1C0055A30 (DispatchNotification.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00851E0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIRootInitialize @ 0x1C0091A00 (ACPIRootInitialize.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C009702C (ACPIBusReenumerateSelfInterface.c)
 *     ACPIDockIntfReference @ 0x1C009DE50 (ACPIDockIntfReference.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C00A0960 (ACPIInterfaceReferenceDeviceExtension.c)
 *     OSInitializeCallbacks @ 0x1C00AC4C0 (OSInitializeCallbacks.c)
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
