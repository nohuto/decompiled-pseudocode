/*
 * XREFs of PopEvaluateAggressiveStandbyActions @ 0x1406F76AC
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x1406FF020 (PdcPoCsEnterExitReason.c)
 *     PopDiagStopCsSleepStudySession @ 0x1407016F4 (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x14023D398 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x1405B8354 (PopNetSetConnectivityConstraint.c)
 *     PopNetCheckOpportunisticDs @ 0x1407079DC (PopNetCheckOpportunisticDs.c)
 *     PopNetClearConnectivityConstraint @ 0x140707A14 (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopEvaluateAggressiveStandbyActions(char a1)
{
  int v2; // ecx

  PopAcquirePolicyLock();
  if ( !a1 )
  {
    PopNetClearConnectivityConstraint(1LL);
    PopNetClearConnectivityConstraint(7LL);
    PopAggressiveStandbyAppliedActions = 0;
    return PopReleasePolicyLock();
  }
  if ( dword_1403661F8 == 0 )
  {
    v2 = 1;
LABEL_6:
    PopNetSetConnectivityConstraint(v2);
    if ( dword_1403661FC == 1 && !byte_1403661ED )
    {
      if ( (PopAggressiveStandbyEnabledActions & 1) != 0 )
        PopAggressiveStandbyAppliedActions |= 1u;
      if ( (PopAggressiveStandbyEnabledActions & 2) != 0 )
        PopAggressiveStandbyAppliedActions |= 2u;
    }
    goto LABEL_12;
  }
  if ( (unsigned __int8)PopNetCheckOpportunisticDs() )
  {
    v2 = 7;
    goto LABEL_6;
  }
LABEL_12:
  if ( (PopAggressiveStandbyEnabledActions & 4) != 0 )
    PopAggressiveStandbyAppliedActions |= 4u;
  if ( (PopAggressiveStandbyEnabledActions & 8) != 0 && PopIsUserInitiatedMonitorRequestReason(PopPdcLastCsEnterReason) )
    PopAggressiveStandbyAppliedActions |= 8u;
  return PopReleasePolicyLock();
}
