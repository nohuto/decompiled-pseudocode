/*
 * XREFs of ACPIInternalClearFlags @ 0x1C000EF34
 * Callers:
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008639C (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalSetSpare @ 0x1C008C6D8 (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C0091FBC (ACPIDetectFilterMatch.c)
 *     ACPIDockIrpEject @ 0x1C009DFA0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C009EE60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009FEC0 (ACPIBusAndFilterIrpEject.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A7B08 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
