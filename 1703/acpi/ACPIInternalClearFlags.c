/*
 * XREFs of ACPIInternalClearFlags @ 0x1C00020E4
 * Callers:
 *     ACPIInternalSetSpare @ 0x1C008C9C0 (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C008DA3C (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C009AFB0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C009BE70 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009CEF0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A505C (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
