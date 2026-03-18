/*
 * XREFs of _ACPIInternalError @ 0x1C0047D50
 * Callers:
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiArblibScoreRequirement @ 0x1C009CD50 (AcpiArblibScoreRequirement.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
