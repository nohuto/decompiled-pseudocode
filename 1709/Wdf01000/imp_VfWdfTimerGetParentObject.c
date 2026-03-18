/*
 * XREFs of imp_VfWdfTimerGetParentObject @ 0x1C00D4EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFTIMER__ *Timer)
{
  return WdfVersion.Functions.pfnWdfTimerGetParentObject(DriverGlobals, Timer);
}
