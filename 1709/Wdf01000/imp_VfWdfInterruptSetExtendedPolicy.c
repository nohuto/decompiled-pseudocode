/*
 * XREFs of imp_VfWdfInterruptSetExtendedPolicy @ 0x1C00D2D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptSetExtendedPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_EXTENDED_POLICY *PolicyAndGroup)
{
  WdfVersion.Functions.pfnWdfInterruptSetExtendedPolicy(DriverGlobals, Interrupt, PolicyAndGroup);
}
