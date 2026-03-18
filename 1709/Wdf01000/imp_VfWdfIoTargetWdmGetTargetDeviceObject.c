/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetDeviceObject @ 0x1C00D3B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetDeviceObject(DriverGlobals, IoTarget);
}
