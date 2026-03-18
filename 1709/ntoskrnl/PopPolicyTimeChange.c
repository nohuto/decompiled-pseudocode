/*
 * XREFs of PopPolicyTimeChange @ 0x140706C90
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400B0E10 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopEventCalloutDispatch @ 0x14015D3BC (PopEventCalloutDispatch.c)
 */

__int64 PopPolicyTimeChange()
{
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
