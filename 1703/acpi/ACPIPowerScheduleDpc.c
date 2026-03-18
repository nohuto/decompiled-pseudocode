/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C0009B6C
 * Callers:
 *     ACPIDeviceInternalQueueRequest @ 0x1C00096EC (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0009D50 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C000A640 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000A974 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C000ABA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C000AFC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIBuildDeviceDpc @ 0x1C000B5C0 (ACPIBuildDeviceDpc.c)
 *     ACPITableLoadCallBack @ 0x1C0029E20 (ACPITableLoadCallBack.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C002A71C (ACPIDeviceCompletePhase3Common.c)
 *     ACPIInitStartACPI @ 0x1C00AA248 (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

char ACPIPowerScheduleDpc()
{
  int v0; // eax

  v0 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  return v0;
}
