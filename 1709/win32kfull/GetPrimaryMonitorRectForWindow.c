/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C010ED78
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRectForWindow(_OWORD *a1, struct tagWND *a2)
{
  __int64 DispInfo; // rax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo();
  v5 = *GetMonitorRectForWindow(&v7, *(_QWORD *)(DispInfo + 88), a2);
  result = a1;
  *a1 = v5;
  return result;
}
