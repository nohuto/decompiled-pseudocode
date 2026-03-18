/*
 * XREFs of imp_VfWdfControlFinishInitializing @ 0x1C00D1510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfControlFinishInitializing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfControlFinishInitializing(DriverGlobals, Device);
}
