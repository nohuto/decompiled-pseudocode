/*
 * XREFs of imp_VfWdfDeviceSetCharacteristics @ 0x1C00D2040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 DeviceCharacteristics)
{
  WdfVersion.Functions.pfnWdfDeviceSetCharacteristics(DriverGlobals, Device, DeviceCharacteristics);
}
