/*
 * XREFs of xxxCalcCaptionButton @ 0x1C0210C2C
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C00E7EA8 (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     xxxMNCanClose @ 0x1C00C26D0 (xxxMNCanClose.c)
 *     GetWindowBordersForDpi @ 0x1C00C3088 (GetWindowBordersForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall xxxCalcCaptionButton(__int64 a1, int a2, __int16 *a3, _DWORD *a4, __int16 *a5, int a6)
{
  __int64 *v6; // r11
  bool v7; // zf
  int WindowDpiLastNotify; // ebx
  __int64 v12; // rax
  int v13; // eax
  int WindowBordersForDpi; // eax
  _DWORD *v15; // rbp
  int v16; // eax
  int v17; // r14d
  int v18; // eax
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // r11
  int v22; // ebp
  int v23; // eax
  __int64 v24; // r11
  __int64 v25; // r12
  int v26; // ecx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // r11
  int v31; // eax
  __int64 v32; // r11
  __int64 v33; // r12
  __int16 v34; // cx
  __int16 v35; // ax
  unsigned __int16 v36; // r9
  __int16 *v37; // rax
  __int16 v38; // ax
  int v39; // ecx
  unsigned __int16 v40; // r10
  int v41; // eax
  int v42; // eax
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  int v46; // edx
  int v48; // [rsp+70h] [rbp+8h]
  int v50; // [rsp+80h] [rbp+18h]

  v6 = (__int64 *)gpsi;
  v7 = (*(_DWORD *)(a1 + 304) & 0x10000000) == 0;
  *a3 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
      && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
    }
  }
  else
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
  {
    v13 = -3;
  }
  else
  {
    WindowBordersForDpi = GetWindowBordersForDpi(
                            *(_DWORD *)(a1 + 68),
                            *(_DWORD *)(a1 + 64),
                            (__int64)a3,
                            (__int64)a4,
                            WindowDpiLastNotify);
    v6 = (__int64 *)gpsi;
    v13 = -WindowBordersForDpi;
  }
  *a4 = *(_DWORD *)(a1 + 128) - v13;
  a4[2] = *(_DWORD *)(a1 + 136) + v13;
  a4[1] = *(_DWORD *)(a1 + 132) - v13;
  a4[3] = v13 + *(_DWORD *)(a1 + 140);
  v48 = -*(_DWORD *)(a1 + 128);
  v15 = (_DWORD *)*v6;
  v50 = -*(_DWORD *)(a1 + 132);
  v16 = *(unsigned __int16 *)(*v6 + 8678);
  if ( *(char *)(a1 + 64) >= 0 )
  {
    if ( WindowDpiLastNotify == v16 )
    {
      v17 = v15[500];
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v17 = v15[597];
    }
    else
    {
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      if ( DpiDepSysMetCachePlateauSlot == -1 )
      {
        v29 = ScaleSystemMetricForDPIWithoutCache(30, WindowDpiLastNotify);
        v6 = (__int64 *)gpsi;
        v17 = v29;
      }
      else
      {
        v28 = 28LL * DpiDepSysMetCachePlateauSlot;
        v17 = v15[v28 + 773];
        if ( v17 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
          v6 = (__int64 *)gpsi;
          v17 = *(_DWORD *)(v28 * 4 + gpsi + 3092);
          if ( v17 == -1 )
            v17 = 0;
        }
      }
    }
    v30 = *v6;
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(v30 + 8678) )
    {
      v22 = *(_DWORD *)(v30 + 2004);
      goto LABEL_52;
    }
    if ( WindowDpiLastNotify == 96 )
    {
      v22 = *(_DWORD *)(v30 + 2392);
      goto LABEL_52;
    }
    v31 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    if ( v31 != -1 )
    {
      v33 = 112LL * v31;
      v22 = *(_DWORD *)(v32 + v33 + 3096);
      if ( v22 != -1 )
        goto LABEL_52;
      EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
      v22 = *(_DWORD *)(v33 + gpsi + 3096);
      goto LABEL_29;
    }
    v26 = 31;
LABEL_51:
    v22 = ScaleSystemMetricForDPIWithoutCache(v26, WindowDpiLastNotify);
    goto LABEL_52;
  }
  if ( WindowDpiLastNotify == v16 )
  {
    v17 = v15[522];
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v17 = v15[619];
  }
  else
  {
    v18 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    if ( v18 == -1 )
    {
      v20 = ScaleSystemMetricForDPIWithoutCache(52, WindowDpiLastNotify);
      v6 = (__int64 *)gpsi;
      v17 = v20;
    }
    else
    {
      v19 = 28LL * v18;
      v17 = v15[v19 + 782];
      if ( v17 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
        v6 = (__int64 *)gpsi;
        v17 = *(_DWORD *)(v19 * 4 + gpsi + 3128);
        if ( v17 == -1 )
          v17 = 0;
      }
    }
  }
  v21 = *v6;
  if ( WindowDpiLastNotify == *(unsigned __int16 *)(v21 + 8678) )
  {
    v22 = *(_DWORD *)(v21 + 2092);
    goto LABEL_52;
  }
  if ( WindowDpiLastNotify == 96 )
  {
    v22 = *(_DWORD *)(v21 + 2480);
    goto LABEL_52;
  }
  v23 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
  if ( v23 == -1 )
  {
    v26 = 53;
    goto LABEL_51;
  }
  v25 = 112LL * v23;
  v22 = *(_DWORD *)(v24 + v25 + 3132);
  if ( v22 != -1 )
    goto LABEL_52;
  EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
  v22 = *(_DWORD *)(v25 + gpsi + 3132);
LABEL_29:
  if ( v22 == -1 )
    v22 = 0;
LABEL_52:
  switch ( a2 )
  {
    case 5:
      if ( !(unsigned int)xxxMNCanClose(a1) && !a6 )
        goto LABEL_73;
      v34 = 0;
      if ( *(char *)(a1 + 64) < 0 )
        v34 = 41;
      *a5 = v34;
      v35 = -4000;
      goto LABEL_72;
    case 2:
      if ( (*(_BYTE *)(a1 + 70) & 2) == 0 && !a6 )
        goto LABEL_73;
      v36 = v48 + 2;
      a4[2] += -2 * v17;
      v37 = a5;
      if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
      {
LABEL_62:
        *v37 = 8;
        *a3 = -3808;
        goto LABEL_75;
      }
      *a5 = 4;
      v38 = -4064;
LABEL_69:
      *a3 = v38;
      goto LABEL_74;
    case 3:
      if ( (*(_BYTE *)(a1 + 70) & 1) == 0 && !a6 )
        goto LABEL_73;
      a4[2] -= v17;
      v37 = a5;
      v36 = v48;
      if ( (*(_BYTE *)(a1 + 71) & 1) != 0 )
        goto LABEL_62;
      *a5 = 14;
      v38 = -4048;
      goto LABEL_69;
  }
  if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
  {
    a4[2] -= v17;
    *a5 = 11;
    v35 = -3712;
LABEL_72:
    *a3 = v35;
  }
LABEL_73:
  v36 = v48;
LABEL_74:
  if ( !*a3 )
  {
    v40 = v50;
    return v36 | (v40 << 16);
  }
LABEL_75:
  v39 = a4[1];
  v40 = v39 + v50 + 2;
  a4[3] = v39 + v22;
  v41 = a4[2];
  a4[2] = v41 + 1;
  v42 = v41 - v17;
  ++a4[3];
  v36 += v42;
  v43 = a4[2];
  v44 = v42 - 1;
  *a4 = v42 - 1;
  a4[1] = v39 - 1;
  if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
  {
    v45 = v43 - v44;
    v46 = *(_DWORD *)(a1 + 136) - v44 + *(_DWORD *)(a1 + 128);
    a4[2] = v46;
    *a4 = v46 - v45;
  }
  return v36 | (v40 << 16);
}
