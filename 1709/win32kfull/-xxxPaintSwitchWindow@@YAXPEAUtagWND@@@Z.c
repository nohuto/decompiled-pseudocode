/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CFD54
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01D1410 (xxxSwitchWndProc.c)
 * Callees:
 *     _GetClientRect @ 0x1C00499C0 (_GetClientRect.c)
 *     DrawEdge @ 0x1C007EBC4 (DrawEdge.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CF1B4 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  __int64 v2; // rcx
  struct tagSwitchWndInfo *v3; // rbx
  __int64 v4; // rdx
  HDC DCEx; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 DPIServerInfo; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // ecx
  LONG v18; // eax
  int v19; // edx
  LONG v20; // ecx
  LONG v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct tagSwitchWndInfo *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct tagSwitchWndInfo *v29; // rbx
  int v30; // [rsp+20h] [rbp-58h]
  RECT v31; // [rsp+50h] [rbp-28h] BYREF

  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    v3 = Getpswi(a1);
    if ( v3 )
    {
      DCEx = (HDC)_GetDCEx(v2, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v3 + 27) )
        goto LABEL_6;
      if ( (GetKeyState(0x12u, v4, v6, v7) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v3 + 27) )
      {
LABEL_6:
        if ( (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__int64)v3 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v3 + 92), *(HBRUSH *)(gpsi + 4800LL));
      DPIServerInfo = GetDPIServerInfo(v9, v8, v10, v11);
      v15 = *(_DWORD *)(DPIServerInfo + 16);
      v16 = (unsigned int)-*(_DWORD *)(DPIServerInfo + 20);
      *((_DWORD *)v3 + 26) -= *(_DWORD *)(DPIServerInfo + 20);
      *((_DWORD *)v3 + 24) -= v16;
      v15 *= -2;
      *((_DWORD *)v3 + 23) -= v15;
      *((_DWORD *)v3 + 25) += v15;
      *((_DWORD *)v3 + 24) = *((_DWORD *)v3 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v3 + 27) )
        goto LABEL_10;
      if ( (GetKeyState(0x12u, v16, v13, v14) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v3 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v17 = *(int *)(DPIServerInfo + 16) >> 1;
      v18 = *((_DWORD *)v3 + 23) - v17;
      v19 = *(int *)(DPIServerInfo + 20) >> 1;
      v31.right = *((_DWORD *)v3 + 25) + v17;
      v20 = v19 + *((_DWORD *)v3 + 26);
      v31.left = v18;
      v21 = *((_DWORD *)v3 + 24) - v19;
      v31.bottom = v20;
      v31.top = v21;
      DrawEdge(DCEx, &v31, 10, 15);
      if ( *((_DWORD *)v3 + 27) )
      {
        if ( (GetKeyState(0x12u, v22, v23, v24) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v3 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v3, DCEx, *((_DWORD *)v3 + 13), v30, *((_DWORD *)v3 + 11), 0, 0, 0LL);
          v25 = Getpswi(a1);
          v29 = v25;
          if ( v25
            && (!*((_DWORD *)v25 + 27) || (GetKeyState(0x12u, v26, v27, v28) & 0x8000u) != 0LL)
            && (*((_DWORD *)v29 + 27) || (_GetAsyncKeyState(18LL) & 0x8000u) != 0LL) )
          {
            DrawSwitchWndHilite(v29, DCEx, *((_DWORD *)v29 + 17), *((_DWORD *)v29 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (_GetAsyncKeyState(18LL) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
