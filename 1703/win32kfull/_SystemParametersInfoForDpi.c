/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1C00F6100
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1C00F5FA0 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetWindowNCMetricsForDpi @ 0x1C0044D04 (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00454B4 (GetScaledLogFontForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  _DWORD *v6; // rdi
  __int64 v9; // rdx
  __int64 *v10; // r14
  int v11; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // r11
  int v16; // eax
  int v17; // eax
  __int64 v18; // r11
  __int64 v19; // rbp

  v5 = 0;
  v6 = a3;
  if ( a1 != 41 )
  {
    if ( a1 == 31 )
    {
      v9 = a5;
    }
    else
    {
      if ( a1 != 45 )
        return v5;
      if ( *a3 != 108 )
      {
LABEL_32:
        UserSetLastError(87LL);
        return v5;
      }
      v10 = (__int64 *)gpsi;
      if ( a5 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v11 = *(_DWORD *)(gpsi + 2032LL);
      }
      else if ( a5 == 96 )
      {
        v11 = *(_DWORD *)(gpsi + 2420LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a5);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v11 = ScaleSystemMetricForDPIWithoutCache(38LL, a5);
          v10 = (__int64 *)gpsi;
        }
        else
        {
          v14 = 112LL * DpiDepSysMetCachePlateauSlot;
          v11 = *(_DWORD *)(v13 + v14 + 3108);
          if ( v11 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(a5);
            v10 = (__int64 *)gpsi;
            v11 = *(_DWORD *)(gpsi + v14 + 3108);
            if ( v11 == -1 )
              v11 = 0;
          }
        }
      }
      v6[1] = v11;
      v15 = *v10;
      if ( a5 == *(unsigned __int16 *)(*v10 + 8678) )
      {
        v16 = *(_DWORD *)(v15 + 2036);
      }
      else if ( a5 == 96 )
      {
        v16 = *(_DWORD *)(v15 + 2424);
      }
      else
      {
        v17 = GetDpiDepSysMetCachePlateauSlot(a5);
        if ( v17 == -1 )
        {
          v16 = ScaleSystemMetricForDPIWithoutCache(39LL, a5);
        }
        else
        {
          v19 = 112LL * v17;
          v16 = *(_DWORD *)(v18 + v19 + 3112);
          if ( v16 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(a5);
            v16 = *(_DWORD *)(gpsi + v19 + 3112);
            if ( v16 == -1 )
              v16 = 0;
          }
        }
      }
      v6[2] = v16;
      a3 = v6 + 4;
      v9 = a5;
      v6[3] = (gdwPUDFlags >> 21) & 1;
    }
    return (unsigned int)GetScaledLogFontForDpi(0, v9, (__int64)a3, a4);
  }
  if ( *a3 != 504 )
    goto LABEL_32;
  return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
}
