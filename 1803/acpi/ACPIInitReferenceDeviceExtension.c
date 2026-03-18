/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C0028B50
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C00209A0 (AcpiDeviceResetInterface.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0024910 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C0024BB0 (ACPIFilterIrpSetPower.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0028364 (ACPIInitDeleteDeviceExtension.c)
 *     OSNotifyCreateOperationRegion @ 0x1C002E808 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C002EA1C (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002EAFC (OSNotifyCreateThermalZone.c)
 *     DispatchNotification @ 0x1C0035820 (DispatchNotification.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0038F00 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIDockIntfReference @ 0x1C0072C70 (ACPIDockIntfReference.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0078BCC (ACPIBusReenumerateSelfInterface.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C0078CE0 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C007FF58 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 *     OSInitializeCallbacks @ 0x1C0098E48 (OSInitializeCallbacks.c)
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
