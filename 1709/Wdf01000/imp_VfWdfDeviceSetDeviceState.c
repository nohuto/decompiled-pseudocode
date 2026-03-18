/*
 * XREFs of imp_VfWdfDeviceSetDeviceState @ 0x1C00D2090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  WdfVersion.Functions.pfnWdfDeviceSetDeviceState(DriverGlobals, Device, DeviceState);
}
