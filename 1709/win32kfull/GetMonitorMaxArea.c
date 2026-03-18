/*
 * XREFs of GetMonitorMaxArea @ 0x1C0086F24
 * Callers:
 *     CkptUpdate @ 0x1C004B97C (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C00871C4 (_HungWindowFromGhostWindow.c)
 */

_OWORD *__fastcall GetMonitorMaxArea(_OWORD *a1, struct tagWND *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 *MonitorWorkRectForWindow; // rax
  __int128 v9; // xmm0
  _OWORD *result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v6 = HungWindowFromGhostWindow(a2);
  v7 = (__int64)a2;
  if ( v6 )
    v7 = v6;
  if ( (*(_BYTE *)(v7 + 70) & 1) != 0 && (*(_BYTE *)(v7 + 56) & 8) != 0 && !*(_WORD *)(gpDispInfo + 152LL) )
    MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v11, a3, a2);
  else
    MonitorWorkRectForWindow = GetMonitorRectForWindow(&v11, a3, a2);
  v9 = *MonitorWorkRectForWindow;
  result = a1;
  *a1 = v9;
  return result;
}
