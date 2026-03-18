/*
 * XREFs of ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CB3D4
 * Callers:
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01CB1A4 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

__int64 __fastcall xxxMoveSwitchWndHilite(struct tagWND *a1, struct tagSwitchWndInfo *a2, int a3)
{
  int v3; // edi
  int v4; // esi
  struct tagSwitchWndInfo *v5; // rbx
  int v7; // r15d
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  BOOL v15; // r13d
  HDC DCEx; // rbp
  __int64 *v17; // rcx
  __int64 v18; // r12
  int v20; // [rsp+20h] [rbp-58h]

  v3 = *((_DWORD *)a2 + 17);
  v4 = *((_DWORD *)a2 + 18);
  v5 = a2;
  v7 = 0;
  if ( a3 )
  {
    if ( v3 > 0 )
    {
LABEL_11:
      v10 = v3 - 1;
      goto LABEL_25;
    }
    if ( v4 > 0 )
    {
      v3 = *((_DWORD *)a2 + 14);
LABEL_10:
      --v4;
      goto LABEL_11;
    }
    if ( !*((_DWORD *)a2 + 12) )
    {
      v4 = *((_DWORD *)a2 + 15);
      v3 = *((_DWORD *)a2 + 16);
      goto LABEL_10;
    }
    v7 = 1;
    v8 = *((_DWORD *)a2 + 14);
    v9 = *((_DWORD *)a2 + 13) - v8;
    if ( v9 < 0 )
      v9 += *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 13) = v9;
    v10 = v8 - 1;
  }
  else
  {
    v11 = *((_DWORD *)a2 + 15) - 1;
    if ( v4 == v11 )
      v12 = *((_DWORD *)a2 + 16);
    else
      v12 = *((_DWORD *)a2 + 14);
    if ( v3 >= v12 - 1 )
    {
      if ( v4 == v11 )
      {
        if ( *((_DWORD *)a2 + 12) )
        {
          v7 = 1;
          v13 = *((_DWORD *)a2 + 14) + *((_DWORD *)a2 + 13);
          v14 = *((_DWORD *)a2 + 10);
          if ( v13 >= v14 )
            v13 -= v14;
          *((_DWORD *)a2 + 13) = v13;
        }
        else
        {
          v4 = 0;
        }
      }
      else
      {
        ++v4;
      }
      v10 = 0;
    }
    else
    {
      v10 = v3 + 1;
    }
  }
LABEL_25:
  v15 = a3 == 0;
  *((_QWORD *)a2 + 4) = NextPrevPhwnd(a2, *((HWND **)a2 + 4), v15);
  DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
  DrawSwitchWndHilite(v5, DCEx, *((_DWORD *)v5 + 17), *((_DWORD *)v5 + 18), 0);
  v17 = (__int64 *)*((_QWORD *)v5 + 4);
  *((_DWORD *)v5 + 18) = v4;
  *((_DWORD *)v5 + 17) = v10;
  v18 = *v17;
  if ( v7 )
  {
    xxxPaintIconsInSwitchWindow(a1, v5, DCEx, *((_DWORD *)v5 + 13), v20, 0, 1, v15, 0LL);
    v5 = Getpswi(a1);
  }
  if ( v5 )
  {
    DrawSwitchWndHilite(v5, DCEx, v10, v4, 1);
    _ReleaseDC(DCEx);
    xxxWindowEvent(0x8005u, (__int64 *)a1, -4, v10 + v4 * *((_DWORD *)v5 + 14) + 1, 1);
  }
  else
  {
    _ReleaseDC(DCEx);
  }
  return v18;
}
