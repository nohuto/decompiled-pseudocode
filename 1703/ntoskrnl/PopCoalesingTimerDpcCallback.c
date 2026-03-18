/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14022D9E0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 */

struct _KTHREAD *PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
