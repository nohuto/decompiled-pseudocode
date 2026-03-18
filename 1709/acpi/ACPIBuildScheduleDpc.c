/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C0011220
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000F4DC (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C00110B0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPITableLoad @ 0x1C00132C0 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00135B0 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001CB90 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001CDC0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0023270 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00291E4 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPITableUnload @ 0x1C00588D0 (ACPITableUnload.c)
 * Callees:
 *     <none>
 */

char ACPIBuildScheduleDpc()
{
  int v0; // eax

  v0 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  return v0;
}
