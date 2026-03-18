/*
 * XREFs of ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020D2EC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C020D618 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0063590 (xxxSetWindowPosAndBand.c)
 *     wcsncpycch @ 0x1C00C50EC (wcsncpycch.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxShowTooltip(struct tagTOOLTIPWND *a1)
{
  _WORD *v1; // rax
  int v2; // ebx
  __int64 v5; // rdx
  int v6; // edx
  __int64 v7; // rcx
  struct tagSIZE v8; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_WORD *)*((_QWORD *)a1 + 6);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( v1 == gszCAPTIONTOOLTIP )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 184LL);
    if ( !v5 || (*(_BYTE *)(v5 + 63) & 8) == 0 || !*(_DWORD *)(v5 + 232) )
      return 0LL;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_QWORD *)(v5 + 240), 99);
    word_1C0334D96 = 0;
  }
  if ( !(unsigned int)xxxTooltipGetSizeAndPosition(a1, &v8, &v9) )
    return 0LL;
  v6 = 16472;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    v6 = 16464;
  v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 184LL);
  if ( v7 )
    v2 = *(_DWORD *)(v7 + 320);
  xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, v9.x, v9.y, v8.cx, v8.cy, v6, v2);
  return 1LL;
}
