/*
 * XREFs of PdcPoNetworkResiliency @ 0x1406FF140
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopNetArmDsEvaluationTimer @ 0x140707934 (PopNetArmDsEvaluationTimer.c)
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
    PopQueueWorkItem((__int64)&unk_1403647C8, DelayedWorkQueue);
  }
  return PopReleasePolicyLock();
}
