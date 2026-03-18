/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290
 * Callers:
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0211A90 (xxxTrackBox.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C020F94C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F9DC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned __int16 v9; // r8
  int v10; // r12d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 DCEx; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // ecx
  HDC v26; // rbp
  unsigned int v27; // r9d
  unsigned __int16 v28; // r8
  HDC v29; // [rsp+30h] [rbp-48h]
  struct tagRECT v30; // [rsp+38h] [rbp-40h] BYREF
  int DpiDependentMetric; // [rsp+98h] [rbp+20h]

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v30 = (struct tagRECT)*((_OWORD *)a2 + 2);
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v15 = *(unsigned int *)a2;
    v29 = (HDC)DCEx;
    if ( (v15 & 2) != 0 )
    {
      DpiForSystem = GetDpiForSystem(v15, v14);
      DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
      v19 = GetDpiForSystem(v18, v17);
      v20 = 10LL;
    }
    else
    {
      v21 = GetDpiForSystem(v15, v14);
      DpiDependentMetric = GetDpiDependentMetric(11LL, v21);
      v19 = GetDpiForSystem(v23, v22);
      v20 = 1LL;
    }
    v24 = GetDpiDependentMetric(v20, v19);
    v10 = 3;
    if ( DpiDependentMetric == v30.right - v30.left && v24 == v30.bottom - v30.top )
    {
      if ( a4 )
        v25 = ~(2 * *(_DWORD *)a2) & 4 | 0x32;
      else
        v25 = (*(_DWORD *)a2 & 2) != 0 ? 46 : 58;
      v26 = v29;
      v27 = v25 + 1;
      if ( !a3 )
        v27 = v25;
      BitBltSysBmp(v29, (unsigned int)v30.left, v30.top, v27);
    }
    else
    {
      v26 = v29;
      DrawFrameControl(v29, &v30, 3u, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v26);
    if ( a4 )
      v28 = 1544;
    else
      v28 = 1537;
    SetOrClrWF(a3 != 0, a1, v28, 1);
    if ( !gdwDeferWinEvent )
      v10 = 1;
    v12 = a4 != 0 ? 5 : 1;
    if ( (*(_DWORD *)a2 & 4) != 0 )
      v11 = 4294967292LL;
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
      v11 = 4294967292LL;
    else
      v11 = ((*(_DWORD *)a2 & 2) != 0) | 0xFFFFFFFA;
    v12 = v4;
  }
  xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, v11, v12, v10);
}
