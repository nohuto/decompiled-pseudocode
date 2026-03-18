/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0001AD8
 * Callers:
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0085D20 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008639C (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIBusIrpQueryId @ 0x1C0086AD0 (ACPIBusIrpQueryId.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C0096CD8 (PcisuppAcquirePciInterfaces.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIInternalIsPci @ 0x1C0096F54 (ACPIInternalIsPci.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00A2080 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
