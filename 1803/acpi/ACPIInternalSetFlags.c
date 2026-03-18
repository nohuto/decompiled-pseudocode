/*
 * XREFs of ACPIInternalSetFlags @ 0x1C002A604
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0071520 (ACPIBusIrpQueryId.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0078CF4 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C007BA80 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIInternalIsPci @ 0x1C007D908 (ACPIInternalIsPci.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C007F52C (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C008C180 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
