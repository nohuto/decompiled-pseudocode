/*
 * XREFs of imp_VfWdfDpcGetParentObject @ 0x1C00D2760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return WdfVersion.Functions.pfnWdfDpcGetParentObject(DriverGlobals, Dpc);
}
