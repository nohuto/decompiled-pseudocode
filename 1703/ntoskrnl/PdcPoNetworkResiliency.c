/*
 * XREFs of PdcPoNetworkResiliency @ 0x1406CB1A0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140155A70 (PopQueueWorkItem.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopNetArmDsEvaluationTimer @ 0x1406CFD14 (PopNetArmDsEvaluationTimer.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(char a1)
{
  __int64 v2; // rcx

  PopAcquirePolicyLock();
  if ( a1 )
  {
    PopNetResiliencyEngaged = 1;
    PopNetArmDsEvaluationTimer(v2, (unsigned int)_InterlockedExchange(&PopNetGracePeriodState, 1));
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_14034A168, DelayedWorkQueue);
  }
  return PopReleasePolicyLock();
}
