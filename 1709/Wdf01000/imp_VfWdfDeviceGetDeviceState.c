/*
 * XREFs of imp_VfWdfDeviceGetDeviceState @ 0x1C00D19B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceGetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  WdfVersion.Functions.pfnWdfDeviceGetDeviceState(DriverGlobals, Device, DeviceState);
}
