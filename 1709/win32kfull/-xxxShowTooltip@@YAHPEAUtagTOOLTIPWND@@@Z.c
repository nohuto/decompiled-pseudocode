/*
 * XREFs of ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C013B8C0
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C013B818 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     wcsncpycch @ 0x1C00DDB98 (wcsncpycch.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C013B98C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxShowTooltip(struct tagTOOLTIPWND *a1)
{
  _WORD *v1; // rax
  int v2; // ebx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v7; // rdx
  struct tagSIZE v8; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_WORD *)*((_QWORD *)a1 + 6);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( v1 == gszCAPTIONTOOLTIP )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 184LL);
    if ( !v7 || (*(_BYTE *)(v7 + 63) & 8) == 0 || !*(_DWORD *)(v7 + 232) )
      return 0LL;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_QWORD *)(v7 + 240), 99);
    word_1C032B9E6 = 0;
  }
  if ( !(unsigned int)xxxTooltipGetSizeAndPosition(a1, &v8, &v9) )
    return 0LL;
  v4 = 16472;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    v4 = 16464;
  v5 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 184LL);
  if ( v5 )
    v2 = *(_DWORD *)(v5 + 320);
  xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, v9.x, v9.y, v8.cx, v8.cy, v4, v2);
  return 1LL;
}
