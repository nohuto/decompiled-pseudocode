/*
 * XREFs of PopPolicyTimeChange @ 0x14057A440
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400702C0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopEventCalloutDispatch @ 0x14014B6E4 (PopEventCalloutDispatch.c)
 */

__int64 PopPolicyTimeChange()
{
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
