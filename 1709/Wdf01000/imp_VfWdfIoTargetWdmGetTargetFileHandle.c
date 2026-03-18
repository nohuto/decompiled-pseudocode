/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetFileHandle @ 0x1C00D3BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfIoTargetWdmGetTargetFileHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetFileHandle(DriverGlobals, IoTarget);
}
