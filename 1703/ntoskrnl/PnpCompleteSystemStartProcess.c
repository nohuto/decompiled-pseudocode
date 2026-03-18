/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x140162DE4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpDiagnosticTrace @ 0x140033764 (PnpDiagnosticTrace.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IopCallDriverReinitializationRoutines @ 0x14044DAC0 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140586480 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x1405C6260 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1405C6318 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1405C639C (PiInitReleaseCachedGroupInformation.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
