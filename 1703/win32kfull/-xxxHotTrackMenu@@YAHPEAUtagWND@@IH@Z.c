/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020D0B4
 * Callers:
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // eax
  HDC DCEx; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v18; // rax
  __int64 *DPIMETRICSForDpi; // rax
  int TextAlign; // eax
  _DWORD *v21; // rcx
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-48h]
  _QWORD v27[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *((_QWORD *)a1 + 26);
  if ( (*((_BYTE *)a1 + 56) & 1) == 0 || !v4 )
    return 0LL;
  v6 = a2 == -1 || a2 >= *(_DWORD *)(v4 + 68) ? 0LL : *(_QWORD *)(v4 + 96) + 152LL * a2;
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 26);
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  xxxMNRecomputeBarIfNeeded(a1, v7);
  if ( (unsigned int)MNGetpItemIndex(v4, v6) == -1 )
  {
LABEL_9:
    ThreadUnlock1(v9, v8);
    return 0LL;
  }
  if ( a3 )
  {
    v11 = *(_DWORD *)(v6 + 4);
    if ( (v11 & 1) != 0 )
      goto LABEL_9;
    *(_DWORD *)(v6 + 4) = v11 | 0x100;
  }
  else
  {
    *(_DWORD *)(v6 + 4) &= ~0x100u;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 5144LL));
  v16 = 96;
  if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
         && (v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v18 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  DPIMETRICSForDpi = (__int64 *)GetDPIMETRICSForDpi(WindowDpiLastNotify, v13, v14, v15, v26);
  GreSelectFontInternal(DCEx, *DPIMETRICSForDpi, 1);
  TextAlign = GreGetTextAlign(DCEx);
  v21 = *(_DWORD **)(v4 + 96);
  v22 = TextAlign;
  if ( v21 && (*v21 & 0x2000) != 0 )
    GreSetTextAlign(DCEx, TextAlign | 0x100);
  if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
  {
    v16 = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( (*((_DWORD *)a1 + 92) & 0xF) != 0
         || (v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) == 0
         || (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 52LL) & 1) == 0 )
  {
    v16 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  xxxDrawMenuItem(DCEx, v16, v4, v6, 0, 0LL);
  GreSetTextAlign(DCEx, v22);
  ThreadUnlock1(v25, v24);
  _ReleaseDC(DCEx);
  return 1LL;
}
