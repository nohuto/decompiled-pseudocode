/*
 * XREFs of PopDispatchCallout @ 0x1405F2CB0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14015D3BC (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
