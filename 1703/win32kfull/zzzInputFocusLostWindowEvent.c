/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C00B5DB8
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C000656C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     ZapActiveAndFocus @ 0x1C02126B0 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 */

__int64 __fastcall zzzInputFocusLostWindowEvent(__int64 *a1, int a2)
{
  __int64 *v4; // rdx
  int v5; // ecx

  if ( gpqForeground && (v4 = *(__int64 **)(gpqForeground + 80LL)) != 0LL && v4 != a1 && a1[2] == v4[2] )
  {
    v5 = 35;
    if ( !gdwDeferWinEvent )
      v5 = 33;
  }
  else
  {
    v5 = 51;
    if ( !gdwDeferWinEvent )
      v5 = 49;
    v4 = a1;
  }
  return xxxWindowEvent(0x80000003, v4, 0, a2, v5);
}
