/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1402784D0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x14007421C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 */

struct _KTHREAD *PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
