/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C0085FF4
 * Callers:
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01405C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ZapActiveAndFocus @ 0x1C0213BE0 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusLostWindowEvent(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  int v5; // ecx

  v2 = a2;
  if ( gpqForeground
    && (v4 = *(_QWORD *)(gpqForeground + 112LL)) != 0
    && v4 != a1
    && *(_QWORD *)(a1 + 16) == *(_QWORD *)(v4 + 16) )
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
  xxxWindowEvent(0x80000003, (volatile signed __int32 *)v4, 0LL, v2, v5);
}
