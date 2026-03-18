/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0002104
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0083230 (ACPIBusIrpQueryId.c)
 *     ACPIInternalIsPci @ 0x1C008B9E0 (ACPIInternalIsPci.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0091E50 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0093F28 (ACPIQueryCacheCoherencyAttribute.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C0093F98 (PcisuppAcquirePciInterfaces.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C009F090 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
