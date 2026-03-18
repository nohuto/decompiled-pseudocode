/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C00B5E38
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 */

__int64 __fastcall zzzInputFocusReceivedWindowEvent(int a1)
{
  __int64 *v2; // r10
  __int64 v3; // rdx
  int v4; // ecx

  v2 = *(__int64 **)(gpqForeground + 80LL);
  v3 = *(_QWORD *)(v2[2] + 392);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 40);
  v4 = 35;
  if ( !gdwDeferWinEvent )
    v4 = 33;
  return xxxWindowEvent(0x80000002, v2, v3, a1, v4);
}
