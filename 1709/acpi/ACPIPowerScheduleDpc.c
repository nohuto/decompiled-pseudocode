/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C0003B2C
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C00022B0 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C0002C88 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C0003980 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C0003AEC (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceCompleteRequest @ 0x1C0005908 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0005B30 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0005F50 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPITableLoadCallBack @ 0x1C002AD10 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C00AC2D8 (ACPIInitStartACPI.c)
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
