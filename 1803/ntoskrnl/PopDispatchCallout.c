/*
 * XREFs of PopDispatchCallout @ 0x140655D10
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14016E560 (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
