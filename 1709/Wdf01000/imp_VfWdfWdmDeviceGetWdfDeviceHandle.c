/*
 * XREFs of imp_VfWdfWdmDeviceGetWdfDeviceHandle @ 0x1C00D5790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfWdmDeviceGetWdfDeviceHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *DeviceObject)
{
  return WdfVersion.Functions.pfnWdfWdmDeviceGetWdfDeviceHandle(DriverGlobals, DeviceObject);
}
