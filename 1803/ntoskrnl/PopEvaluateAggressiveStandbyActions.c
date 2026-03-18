/*
 * XREFs of PopEvaluateAggressiveStandbyActions @ 0x14075EEA8
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x140764950 (PdcPoCsEnterExitReason.c)
 *     PopDiagStopCsSleepStudySession @ 0x140765B10 (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x140274838 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x1406278B4 (PopNetSetConnectivityConstraint.c)
 *     PopNetCheckOpportunisticDs @ 0x14076B81C (PopNetCheckOpportunisticDs.c)
 *     PopNetClearConnectivityConstraint @ 0x14076B854 (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopEvaluateAggressiveStandbyActions(char a1)
{
  int v2; // ecx
  unsigned int v3; // ebx

  PopAcquirePolicyLock();
  if ( !a1 )
  {
    PopNetClearConnectivityConstraint(1LL);
    PopNetClearConnectivityConstraint(7LL);
    PopAggressiveStandbyAppliedActions = 0;
    goto LABEL_18;
  }
  if ( dword_1403AAA78 == 0 )
  {
    v2 = 1;
LABEL_6:
    PopNetSetConnectivityConstraint(v2);
    if ( dword_1403AAA7C == 1 && !byte_1403AAA6D )
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
LABEL_18:
  v3 = PopAggressiveStandbyAppliedActions;
  PopReleasePolicyLock();
  return v3;
}
