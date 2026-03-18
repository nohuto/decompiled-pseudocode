/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x14018047C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x14014BFEC (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1405F6CAC (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x14060C5F0 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x140642D1C (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x140642DD0 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x140642E54 (PiInitReleaseCachedGroupInformation.c)
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
