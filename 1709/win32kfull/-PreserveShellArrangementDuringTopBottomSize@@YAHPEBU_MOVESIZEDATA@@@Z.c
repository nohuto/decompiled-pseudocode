/*
 * XREFs of ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01D8AAC
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01D8298 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01AB288 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01D7FD8 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?GetShellArrangedWindowType@@YA?AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z @ 0x1C01D8064 (-GetShellArrangedWindowType@@YA-AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z.c)
 */

_BOOL8 __fastcall PreserveShellArrangementDuringTopBottomSize(const struct _MOVESIZEDATA *a1)
{
  int v2; // ecx
  struct tagRECT *MonitorWorkRectForWindow; // rax
  __int64 v4; // rcx
  struct tagRECT v5; // xmm1
  char OverlapCoordinatesForArrangement; // al
  unsigned int ShellArrangedWindowType; // eax
  __int64 v8; // r9
  _BOOL8 result; // rax
  int v10; // ecx
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 70) & 2) == 0 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 44);
  if ( (unsigned int)(v2 - 6) > 2 && (unsigned int)(v2 - 3) > 2 )
    return 0LL;
  MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(
                                                 &v12,
                                                 *((_QWORD *)a1 + 27),
                                                 *((struct tagWND **)a1 + 2));
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(struct tagRECT *)(v4 + 128);
  v12 = *MonitorWorkRectForWindow;
  v11 = v5;
  ReduceArrangedRectangleByFrameMargin(v4, &v12, &v11.left);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v12, &v11, 0);
  ShellArrangedWindowType = GetShellArrangedWindowType((__int64)a1, OverlapCoordinatesForArrangement);
  v8 = (int)ShellArrangedWindowType;
  result = ShellArrangedWindowType < 6;
  if ( (unsigned int)v8 < 6 )
  {
    v10 = dword_1C02EADF0[v8];
    return !_bittest(&v10, (unsigned __int8)(*((_DWORD *)a1 + 44) - 3));
  }
  return result;
}
