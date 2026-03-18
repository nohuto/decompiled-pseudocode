/*
 * XREFs of imp_VfWdfInterruptWdmGetInterrupt @ 0x1C00D2E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KINTERRUPT *__fastcall imp_VfWdfInterruptWdmGetInterrupt(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptWdmGetInterrupt(DriverGlobals, Interrupt);
}
