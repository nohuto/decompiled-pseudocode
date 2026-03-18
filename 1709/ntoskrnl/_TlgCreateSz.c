/*
 * XREFs of _TlgCreateSz @ 0x1400B0934
 * Callers:
 *     MiLogTrimWs @ 0x14000BBA0 (MiLogTrimWs.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400BFE8C (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140212208 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402123FC (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402124EC (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x140230D80 (MiLogWsEmptyControl.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x140579384 (EtwpCoverageRecord.c)
 *     PnpCompareInterruptInformation @ 0x14059D538 (PnpCompareInterruptInformation.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1405C9B9C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x1405C9CE0 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x1405CAF18 (PopBatteryCheckCompositeCapacity.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x1406E1280 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406E1B44 (MiLogStrongCodeDriverLoadFailure.c)
 *     PopAccountBatteryEnergyChange @ 0x1406FDC00 (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140701C94 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14070C050 (PopPublishAndPurgePowerRequestStats.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14082955C (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = &File;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
