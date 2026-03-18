/*
 * XREFs of _TlgCreateSz @ 0x140076288
 * Callers:
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiLogWsEmptyControl @ 0x140083B24 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140083F9C (MiLogTrimWs.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400AA758 (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140250744 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140250938 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x140250A28 (MiLogResetPagesCommitRelease.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x14056F594 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140610C2C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x140610D70 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140610E34 (PopBatteryCheckCompositeCapacity.c)
 *     PnpCompareInterruptInformation @ 0x140612D04 (PnpCompareInterruptInformation.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x14074C040 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14074C8EC (MiLogStrongCodeDriverLoadFailure.c)
 *     PopAccountBatteryEnergyChange @ 0x14076347C (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140765CD8 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14076F51C (PopPublishAndPurgePowerRequestStats.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14089C6CC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = &File;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
