/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C001F95C
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C0009DE0 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C0019D90 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001A020 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C001AA78 (ACPIDeviceInternalQueueRequest.c)
 *     ACPITableLoadCallBack @ 0x1C003B3D0 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C0099EA4 (ACPIInitStartACPI.c)
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
