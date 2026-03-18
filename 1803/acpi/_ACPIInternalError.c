/*
 * XREFs of _ACPIInternalError @ 0x1C0017A64
 * Callers:
 *     AcpiArblibScoreRequirement @ 0x1C0075430 (AcpiArblibScoreRequirement.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
