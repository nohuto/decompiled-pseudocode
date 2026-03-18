/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CB990
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01CD060 (xxxSwitchWndProc.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     _GetClientRect @ 0x1C003C920 (_GetClientRect.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  __int64 v2; // rcx
  struct tagSwitchWndInfo *v3; // rbx
  HDC DCEx; // rsi
  __int64 v5; // rcx
  __int64 DPIServerInfo; // rbp
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  LONG v10; // eax
  int v11; // edx
  LONG v12; // ecx
  LONG v13; // eax
  struct tagSwitchWndInfo *v14; // rax
  struct tagSwitchWndInfo *v15; // rbx
  int v16; // [rsp+20h] [rbp-58h]
  RECT v17; // [rsp+50h] [rbp-28h] BYREF

  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    v3 = Getpswi(a1);
    if ( v3 )
    {
      DCEx = (HDC)_GetDCEx(v2, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v3 + 27) )
        goto LABEL_6;
      if ( (GetKeyState(0x12u) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v3 + 27) )
      {
LABEL_6:
        if ( (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (_DWORD *)v3 + 23);
      FillRect(DCEx, (LPCRECT)((char *)v3 + 92), *(HBRUSH *)(gpsi + 5208LL));
      DPIServerInfo = GetDPIServerInfo(v5);
      v7 = *(_DWORD *)(DPIServerInfo + 16);
      v8 = -*(_DWORD *)(DPIServerInfo + 20);
      *((_DWORD *)v3 + 26) -= *(_DWORD *)(DPIServerInfo + 20);
      *((_DWORD *)v3 + 24) -= v8;
      v7 *= -2;
      *((_DWORD *)v3 + 23) -= v7;
      *((_DWORD *)v3 + 25) += v7;
      *((_DWORD *)v3 + 24) = *((_DWORD *)v3 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v3 + 27) )
        goto LABEL_10;
      if ( (GetKeyState(0x12u) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v3 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v9 = *(int *)(DPIServerInfo + 16) >> 1;
      v10 = *((_DWORD *)v3 + 23) - v9;
      v11 = *(int *)(DPIServerInfo + 20) >> 1;
      v17.right = *((_DWORD *)v3 + 25) + v9;
      v12 = v11 + *((_DWORD *)v3 + 26);
      v17.left = v10;
      v13 = *((_DWORD *)v3 + 24) - v11;
      v17.bottom = v12;
      v17.top = v13;
      DrawEdge(DCEx, &v17, 0xAu, 15);
      if ( *((_DWORD *)v3 + 27) )
      {
        if ( (GetKeyState(0x12u) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v3 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v3, DCEx, *((_DWORD *)v3 + 13), v16, *((_DWORD *)v3 + 11), 0, 0, 0LL);
          v14 = Getpswi(a1);
          v15 = v14;
          if ( v14
            && (!*((_DWORD *)v14 + 27) || (GetKeyState(0x12u) & 0x8000u) != 0LL)
            && (*((_DWORD *)v15 + 27) || (_GetAsyncKeyState(18LL) & 0x8000u) != 0LL) )
          {
            DrawSwitchWndHilite(v15, DCEx, *((_DWORD *)v15 + 17), *((_DWORD *)v15 + 18), 1);
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
