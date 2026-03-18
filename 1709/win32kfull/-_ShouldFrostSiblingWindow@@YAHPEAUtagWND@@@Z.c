/*
 * XREFs of ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D73EC
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D7730 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall _ShouldFrostSiblingWindow(struct tagWND *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int16 v6; // cx
  int v7; // r8d
  __int64 v8; // r11
  int v9; // eax
  __int64 v10; // rax

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 400);
  if ( (*((_BYTE *)a1 + 70) & 0xC0) == 0xC0
    && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(v5 + 71) & 0x10) != 0
    && *(_QWORD *)(v1 + 432) == grpdeskRitInput )
  {
    v6 = *(_WORD *)(gpsi + 884LL);
    if ( *(_WORD *)(*((_QWORD *)a1 + 21) + 8LL) != v6
      && !GetProp((__int64)a1, v6, 1)
      && !GetProp((__int64)a1, *(_WORD *)(v8 + 1362), v7)
      && (*(_DWORD *)(v4 + 12) & 0x8000000) == 0
      && *(_QWORD *)v4 != gpepCSRSS
      && !(unsigned int)IsProcessDwm(*(_QWORD *)v4) )
    {
      v9 = 0;
      if ( *(_DWORD *)(v1 + 608) <= 0x9900u )
        v9 = *(_DWORD *)(v1 + 624);
      if ( (v9 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      {
        v10 = *(_QWORD *)(v1 + 440);
        if ( a1 != *(struct tagWND **)(v10 + 160) && a1 != *(struct tagWND **)(v10 + 176) )
          return 1;
      }
    }
  }
  return v2;
}
