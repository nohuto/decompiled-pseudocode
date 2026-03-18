/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x140240F40
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1400B0F0C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
 */

struct _KTHREAD *PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
