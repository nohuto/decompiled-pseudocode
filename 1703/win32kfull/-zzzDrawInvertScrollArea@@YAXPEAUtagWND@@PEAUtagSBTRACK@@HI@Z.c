/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C020EA64
 * Callers:
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0210360 (xxxTrackBox.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C020E138 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020E1C8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  int v4; // ebp
  unsigned __int16 v9; // r8
  int v10; // r14d
  unsigned int v11; // r8d
  int v12; // r9d
  int v13; // r15d
  int v14; // edx
  int v15; // ecx
  HDC v16; // rbp
  unsigned int v17; // r9d
  unsigned __int16 v18; // r8
  HDC DCEx; // [rsp+30h] [rbp-48h]
  RECT v20; // [rsp+38h] [rbp-40h] BYREF

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v20 = (RECT)*((_OWORD *)a2 + 2);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    if ( (*(_DWORD *)a2 & 2) != 0 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v13 = *(_DWORD *)(gpsi + 1888LL);
      else
        v13 = *(_DWORD *)(gpsi + 2276LL);
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v14 = *(_DWORD *)(gpsi + 1960LL);
      else
        v14 = *(_DWORD *)(gpsi + 2348LL);
    }
    else
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v13 = *(_DWORD *)(gpsi + 1964LL);
      else
        v13 = *(_DWORD *)(gpsi + 2352LL);
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v14 = *(_DWORD *)(gpsi + 1892LL);
      else
        v14 = *(_DWORD *)(gpsi + 2280LL);
    }
    v10 = 3;
    if ( v13 == v20.right - v20.left && v14 == v20.bottom - v20.top )
    {
      if ( a4 )
        v15 = ~(2 * *(_DWORD *)a2) & 4 | 0x32;
      else
        v15 = (*(_DWORD *)a2 & 2) != 0 ? 46 : 58;
      v16 = DCEx;
      v17 = v15 + 1;
      if ( !a3 )
        v17 = v15;
      BitBltSysBmp(DCEx, v20.left, v20.top, v17);
    }
    else
    {
      v16 = DCEx;
      DrawFrameControl(DCEx, &v20, 3, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v16);
    if ( a4 )
      v18 = 1544;
    else
      v18 = 1537;
    SetOrClrWF(a3 != 0, a1, v18, 1);
    if ( !gdwDeferWinEvent )
      v10 = 1;
    v12 = a4 != 0 ? 5 : 1;
    if ( (*(_DWORD *)a2 & 4) != 0 )
      v11 = -4;
    else
      v11 = ((*(_DWORD *)a2 & 2) != 0) | 0xFFFFFFFA;
  }
  else
  {
    InvertScrollHilite(a1, (const struct tagRECT *)a2);
    if ( a4 == 2 )
      v9 = 1538;
    else
      v9 = 1540;
    SetOrClrWF(a3 != 0, a1, v9, 1);
    v10 = 3;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    if ( a4 != 2 )
      v4 = 4;
    if ( (*(_DWORD *)a2 & 4) != 0 )
      v11 = -4;
    else
      v11 = ((*(_DWORD *)a2 & 2) != 0) | 0xFFFFFFFA;
    v12 = v4;
  }
  xxxWindowEvent(0x800Au, (__int64 *)a1, v11, v12, v10);
}
