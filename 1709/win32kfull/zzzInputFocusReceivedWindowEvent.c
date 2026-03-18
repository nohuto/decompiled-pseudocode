/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C0086074
 * Callers:
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusReceivedWindowEvent(unsigned int a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // rdx
  int v4; // ecx

  v1 = a1;
  v2 = *(_QWORD *)(gpqForeground + 112LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 416LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 40);
  v4 = 35;
  if ( !gdwDeferWinEvent )
    v4 = 33;
  xxxWindowEvent(0x80000002, (volatile signed __int32 *)v2, (unsigned int)v3, v1, v4);
}
