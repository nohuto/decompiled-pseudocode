/*
 * XREFs of ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01F0D04
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01F0580 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01A3E74 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01F02C0 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?GetShellArrangedWindowType@@YA?AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z @ 0x1C01F034C (-GetShellArrangedWindowType@@YA-AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z.c)
 */

_BOOL8 __fastcall PreserveShellArrangementDuringTopBottomSize(const struct _MOVESIZEDATA *a1)
{
  int v2; // ecx
  __int64 v3; // r9
  __int64 v4; // rax
  struct tagRECT *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  char OverlapCoordinatesForArrangement; // al
  unsigned int ShellArrangedWindowType; // eax
  __int64 v10; // r9
  _BOOL8 result; // rax
  int v12; // ecx
  struct tagRECT v13; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 66) & 2) == 0 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 40);
  if ( (unsigned int)(v2 - 6) > 2 && (unsigned int)(v2 - 3) > 2 )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 0
    && (v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 52LL) & 1) != 0 )
  {
    v5 = (struct tagRECT *)(*(_QWORD *)(*((_QWORD *)a1 + 25) + 40LL) + 92LL);
  }
  else if ( (*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 1
         && (v6 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 52LL) & 1) != 0 )
  {
    v5 = (struct tagRECT *)(*(_QWORD *)(*((_QWORD *)a1 + 25) + 40LL) + 108LL);
  }
  else
  {
    v5 = (struct tagRECT *)(*(_QWORD *)(*((_QWORD *)a1 + 25) + 40LL) + 76LL);
  }
  v7 = *(_QWORD *)a1;
  v13 = *(struct tagRECT *)(v3 + 128);
  ReduceArrangedRectangleByFrameMargin(v7, v5, &v13.left);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v5, &v13, 0);
  ShellArrangedWindowType = GetShellArrangedWindowType((__int64)a1, OverlapCoordinatesForArrangement);
  v10 = (int)ShellArrangedWindowType;
  result = ShellArrangedWindowType < 6;
  if ( (unsigned int)v10 < 6 )
  {
    v12 = dword_1C02EE680[v10];
    return !_bittest(&v12, (unsigned __int8)(*((_DWORD *)a1 + 40) - 3));
  }
  return result;
}
