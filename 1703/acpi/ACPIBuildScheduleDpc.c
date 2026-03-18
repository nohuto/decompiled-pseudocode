/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C000DFA8
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0006548 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0008800 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000B170 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000ED90 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPITableLoad @ 0x1C001D690 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001DEF8 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00286D8 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C00288DC (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C0057CD0 (ACPITableUnload.c)
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
