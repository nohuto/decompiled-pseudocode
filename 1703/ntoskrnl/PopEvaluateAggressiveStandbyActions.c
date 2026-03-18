/*
 * XREFs of PopEvaluateAggressiveStandbyActions @ 0x1406C6F18
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x1406CB0A0 (PdcPoCsEnterExitReason.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x14022A4B8 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x1405A8364 (PopNetSetConnectivityConstraint.c)
 *     PopNetCheckOpportunisticDs @ 0x1406CFD64 (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x1406CFD8C (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetClearConnectivityConstraint @ 0x1406CFDBC (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopEvaluateAggressiveStandbyActions(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ecx
  char v5; // al
  int v6; // edx
  int v7; // edx

  PopAcquirePolicyLock();
  if ( !a1 )
  {
    PopNetClearConnectivityConstraint(1LL);
    PopNetClearConnectivityConstraint(7LL);
    PopAggressiveStandbyAppliedActions = 0;
    return PopReleasePolicyLock();
  }
  if ( (unsigned __int8)PopNetCheckUserConnectivityPolicy(v3, v2) )
  {
    if ( !(unsigned __int8)PopNetCheckOpportunisticDs() )
      goto LABEL_12;
    v4 = 7;
  }
  else
  {
    v4 = 1;
  }
  PopNetSetConnectivityConstraint(v4);
  if ( dword_14034BB7C == 1 && !byte_14034BB6D )
  {
    v5 = PopAggressiveStandbyEnabledActions;
    v6 = PopAggressiveStandbyAppliedActions;
    if ( (PopAggressiveStandbyEnabledActions & 1) != 0 )
    {
      v6 = PopAggressiveStandbyAppliedActions | 1;
      PopAggressiveStandbyAppliedActions |= 1u;
    }
    if ( (PopAggressiveStandbyEnabledActions & 2) != 0 )
    {
      v6 |= 2u;
      PopAggressiveStandbyAppliedActions = v6;
    }
    goto LABEL_13;
  }
LABEL_12:
  v5 = PopAggressiveStandbyEnabledActions;
  v6 = PopAggressiveStandbyAppliedActions;
LABEL_13:
  if ( (v5 & 4) != 0 )
    PopAggressiveStandbyAppliedActions = v6 | 4;
  if ( (v5 & 8) != 0 && PopIsUserInitiatedMonitorRequestReason() )
    PopAggressiveStandbyAppliedActions = v7 | 8;
  return PopReleasePolicyLock();
}
