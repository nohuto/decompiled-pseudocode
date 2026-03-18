/*
 * XREFs of ACPIInternalClearFlags @ 0x1C0029B08
 * Callers:
 *     ACPIDockIrpEject @ 0x1C0072DC0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C0073C90 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0075650 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDetectFilterMatch @ 0x1C0079394 (ACPIDetectFilterMatch.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     ACPIInternalSetSpare @ 0x1C007DCB0 (ACPIInternalSetSpare.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     PcisuppReleasePciInterfaces @ 0x1C008C88C (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
