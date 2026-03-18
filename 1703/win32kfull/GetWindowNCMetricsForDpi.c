/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1C0044D04
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C00F6100 (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C00454B4 (GetScaledLogFontForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, unsigned int a2)
{
  __int64 *v2; // r11
  int v5; // eax
  __int64 v6; // r11
  int v7; // eax
  INT *v8; // rax
  INT v9; // eax
  __int64 *v10; // r11
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // r11
  int v23; // eax
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v30; // rbp
  int v31; // eax
  __int64 v32; // r11
  __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rbp
  int v36; // eax
  __int64 v37; // rbp
  int v38; // eax
  __int64 v39; // rbp
  int v40; // eax
  __int64 v41; // rbp
  int v42; // eax
  __int64 v43; // rbp
  int v44; // eax
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // r11
  __int64 v48; // rbx

  v2 = (__int64 *)gpsi;
  if ( a2 == *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    v5 = *(_DWORD *)(gpsi + 2004LL);
  }
  else if ( a2 == 96 )
  {
    v5 = *(_DWORD *)(gpsi + 2392LL);
  }
  else
  {
    DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( DpiDepSysMetCachePlateauSlot == -1 )
    {
      v5 = ScaleSystemMetricForDPIWithoutCache(31LL, a2);
      v2 = (__int64 *)gpsi;
    }
    else
    {
      v30 = 112LL * DpiDepSysMetCachePlateauSlot;
      v5 = *(_DWORD *)(gpsi + v30 + 3096);
      if ( v5 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v2 = (__int64 *)gpsi;
        v5 = *(_DWORD *)(gpsi + v30 + 3096);
        if ( v5 == -1 )
          v5 = 0;
      }
    }
  }
  a1[5] = v5;
  v6 = *v2;
  if ( a2 == *(unsigned __int16 *)(v6 + 8678) )
  {
    v7 = *(_DWORD *)(v6 + 2100);
  }
  else if ( a2 == 96 )
  {
    v7 = *(_DWORD *)(v6 + 2488);
  }
  else
  {
    v31 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v31 == -1 )
    {
      v7 = ScaleSystemMetricForDPIWithoutCache(55LL, a2);
    }
    else
    {
      v33 = 112LL * v31;
      v7 = *(_DWORD *)(v33 + v32 + 3140);
      if ( v7 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v7 = *(_DWORD *)(v33 + gpsi + 3140);
        if ( v7 == -1 )
          v7 = 0;
      }
    }
  }
  a1[55] = v7;
  v8 = (INT *)Get96DpiServerInfo();
  v9 = EngMulDiv(*v8, a2, 96);
  v10 = (__int64 *)gpsi;
  a1[1] = v9;
  if ( a2 == *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    v11 = *(_DWORD *)(gpsi + 1888LL);
  }
  else if ( a2 == 96 )
  {
    v11 = *(_DWORD *)(gpsi + 2276LL);
  }
  else
  {
    v34 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v34 == -1 )
    {
      v11 = ScaleSystemMetricForDPIWithoutCache(2LL, a2);
      v10 = (__int64 *)gpsi;
    }
    else
    {
      v35 = 112LL * v34;
      v11 = *(_DWORD *)(gpsi + v35 + 3044);
      if ( v11 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v10 = (__int64 *)gpsi;
        v11 = *(_DWORD *)(gpsi + v35 + 3044);
        if ( v11 == -1 )
          v11 = 0;
      }
    }
  }
  a1[2] = v11;
  v12 = *v10;
  if ( a2 == *(unsigned __int16 *)(*v10 + 8678) )
  {
    v13 = *(_DWORD *)(v12 + 1960);
  }
  else if ( a2 == 96 )
  {
    v13 = *(_DWORD *)(v12 + 2348);
  }
  else
  {
    v36 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v36 == -1 )
    {
      v13 = ScaleSystemMetricForDPIWithoutCache(20LL, a2);
      v10 = (__int64 *)gpsi;
    }
    else
    {
      v37 = 112LL * v36;
      v13 = *(_DWORD *)(v12 + v37 + 3084);
      if ( v13 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v10 = (__int64 *)gpsi;
        v13 = *(_DWORD *)(gpsi + v37 + 3084);
        if ( v13 == -1 )
          v13 = 0;
      }
    }
  }
  a1[3] = v13;
  v14 = *v10;
  if ( a2 == *(unsigned __int16 *)(*v10 + 8678) )
  {
    v15 = *(_DWORD *)(v14 + 2000);
  }
  else if ( a2 == 96 )
  {
    v15 = *(_DWORD *)(v14 + 2388);
  }
  else
  {
    v38 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v38 == -1 )
    {
      v15 = ScaleSystemMetricForDPIWithoutCache(30LL, a2);
      v10 = (__int64 *)gpsi;
    }
    else
    {
      v39 = 112LL * v38;
      v15 = *(_DWORD *)(v14 + v39 + 3092);
      if ( v15 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v10 = (__int64 *)gpsi;
        v15 = *(_DWORD *)(gpsi + v39 + 3092);
        if ( v15 == -1 )
          v15 = 0;
      }
    }
  }
  a1[4] = v15;
  v16 = *v10;
  if ( a2 == *(unsigned __int16 *)(*v10 + 8678) )
  {
    v17 = *(_DWORD *)(v16 + 2088);
  }
  else if ( a2 == 96 )
  {
    v17 = *(_DWORD *)(v16 + 2476);
  }
  else
  {
    v40 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v40 == -1 )
    {
      v17 = ScaleSystemMetricForDPIWithoutCache(52LL, a2);
      v10 = (__int64 *)gpsi;
    }
    else
    {
      v41 = 112LL * v40;
      v17 = *(_DWORD *)(v16 + v41 + 3128);
      if ( v17 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v10 = (__int64 *)gpsi;
        v17 = *(_DWORD *)(gpsi + v41 + 3128);
        if ( v17 == -1 )
          v17 = 0;
      }
    }
  }
  a1[29] = v17;
  v18 = *v10;
  if ( a2 == *(unsigned __int16 *)(*v10 + 8678) )
  {
    v19 = *(_DWORD *)(v18 + 2092);
  }
  else if ( a2 == 96 )
  {
    v19 = *(_DWORD *)(v18 + 2480);
  }
  else
  {
    v42 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v42 == -1 )
    {
      v19 = ScaleSystemMetricForDPIWithoutCache(53LL, a2);
      v10 = (__int64 *)gpsi;
    }
    else
    {
      v43 = 112LL * v42;
      v19 = *(_DWORD *)(v18 + v43 + 3132);
      if ( v19 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v10 = (__int64 *)gpsi;
        v19 = *(_DWORD *)(gpsi + v43 + 3132);
        if ( v19 == -1 )
          v19 = 0;
      }
    }
  }
  a1[30] = v19;
  v20 = *v10;
  if ( a2 == *(unsigned __int16 *)(*v10 + 8678) )
  {
    v21 = *(_DWORD *)(v20 + 2096);
  }
  else if ( a2 == 96 )
  {
    v21 = *(_DWORD *)(v20 + 2484);
  }
  else
  {
    v44 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v44 == -1 )
    {
      v21 = ScaleSystemMetricForDPIWithoutCache(54LL, a2);
      v10 = (__int64 *)gpsi;
    }
    else
    {
      v45 = 112 * (v44 + 28LL);
      v21 = *(_DWORD *)(v45 + v20);
      if ( v21 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v10 = (__int64 *)gpsi;
        v21 = *(_DWORD *)(v45 + gpsi);
        if ( v21 == -1 )
          v21 = 0;
      }
    }
  }
  a1[54] = v21;
  v22 = *v10;
  if ( a2 == *(unsigned __int16 *)(v22 + 8678) )
  {
    v23 = *(_DWORD *)(v22 + 2248);
  }
  else if ( a2 == 96 )
  {
    v23 = *(_DWORD *)(v22 + 2636);
  }
  else
  {
    v46 = GetDpiDepSysMetCachePlateauSlot(a2);
    if ( v46 == -1 )
    {
      v23 = ScaleSystemMetricForDPIWithoutCache(92LL, a2);
    }
    else
    {
      v48 = 112LL * v46;
      v23 = *(_DWORD *)(v48 + v47 + 3152);
      if ( v23 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(a2);
        v23 = *(_DWORD *)(v48 + gpsi + 3152);
        if ( v23 == -1 )
          v23 = 0;
      }
    }
  }
  a1[125] = v23;
  v24 = GetScaledLogFontForDpi(4LL, a2, a1 + 6) & 1;
  v25 = GetScaledLogFontForDpi(1LL, a2, a1 + 31) & v24;
  v26 = GetScaledLogFontForDpi(2LL, a2, a1 + 56) & v25;
  v27 = GetScaledLogFontForDpi(3LL, a2, a1 + 79) & v26;
  return v27 & (unsigned int)GetScaledLogFontForDpi(5LL, a2, a1 + 102);
}
