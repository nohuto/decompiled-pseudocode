/*
 * XREFs of GetWindowFrameMetricInternal @ 0x1C00418B0
 * Callers:
 *     AdjustWindowRectExInternal @ 0x1C003E718 (AdjustWindowRectExInternal.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0040F94 (GetWindowBordersWithCompatFlags2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowFrameMetric @ 0x1C00C28F0 (GetWindowFrameMetric.c)
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowFrameMetricInternal(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int *v5; // rcx
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v7; // r11d
  __int64 v8; // rsi
  unsigned int v9; // eax

  v3 = 0;
  if ( (a2 & 0x10000000) == 0 && (a2 & 0x20000000) == 0 )
  {
    if ( a3 )
    {
      if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        return *(unsigned int *)(gpsi + 2248LL);
      }
      else if ( a3 == 96 )
      {
        return *(unsigned int *)(gpsi + 2636LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a3);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          return (unsigned int)ScaleSystemMetricForDPIWithoutCache(92LL, v7);
        }
        else
        {
          v8 = 112LL * DpiDepSysMetCachePlateauSlot;
          v9 = *(_DWORD *)(v8 + gpsi + 3152);
          if ( v9 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v7);
            v9 = *(_DWORD *)(v8 + gpsi + 3152);
            if ( v9 == -1 )
              return 0;
          }
        }
        return v9;
      }
    }
    else
    {
      if ( (a2 & 0x2000000) != 0 )
        v5 = (unsigned int *)(gpsi + 2248LL);
      else
        v5 = (unsigned int *)(gpsi + 2636LL);
      return *v5;
    }
  }
  return v3;
}
