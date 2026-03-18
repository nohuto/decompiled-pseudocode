/*
 * XREFs of imp_VfWdfObjectReleaseLock @ 0x1C00D3EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfObjectReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  WdfVersion.Functions.pfnWdfObjectReleaseLock(DriverGlobals, Object);
}
