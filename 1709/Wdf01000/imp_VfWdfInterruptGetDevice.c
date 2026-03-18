/*
 * XREFs of imp_VfWdfInterruptGetDevice @ 0x1C00D2C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptGetDevice(DriverGlobals, Interrupt);
}
