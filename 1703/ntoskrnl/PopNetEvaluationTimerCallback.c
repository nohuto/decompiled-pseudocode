/*
 * XREFs of PopNetEvaluationTimerCallback @ 0x140234630
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140155A70 (PopQueueWorkItem.c)
 */

char PopNetEvaluationTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetGracePeriodState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_14034A168, DelayedWorkQueue);
  return v0;
}
