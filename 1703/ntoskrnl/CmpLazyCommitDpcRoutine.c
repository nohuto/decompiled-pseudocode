/*
 * XREFs of CmpLazyCommitDpcRoutine @ 0x1401DF990
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void CmpLazyCommitDpcRoutine()
{
  if ( CmpLazyCommitWorkItemActive )
    ExQueueWorkItem(&CmpLazyCommitWorkItem, DelayedWorkQueue);
}
