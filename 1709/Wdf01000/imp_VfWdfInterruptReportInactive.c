/*
 * XREFs of imp_VfWdfInterruptReportInactive @ 0x1C00D2D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptReportInactive(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptReportInactive(DriverGlobals, Interrupt);
}
