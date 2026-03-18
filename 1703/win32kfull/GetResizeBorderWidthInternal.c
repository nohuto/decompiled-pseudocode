/*
 * XREFs of GetResizeBorderWidthInternal @ 0x1C0042D24
 * Callers:
 *     AdjustWindowRectExInternal @ 0x1C003E718 (AdjustWindowRectExInternal.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0040F94 (GetWindowBordersWithCompatFlags2.c)
 *     GetResizeBorderWidth @ 0x1C00C28B8 (GetResizeBorderWidth.c)
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetResizeBorderWidthInternal(int a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v6; // eax
  int *v7; // rcx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v9; // r11
  __int64 v10; // rsi

  if ( (a1 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v4 = (int)(a2 * *(_DWORD *)Get96DpiServerInfo() + 48) / 96;
    if ( (a1 & 0x20000000) != 0 )
    {
      if ( a2 )
      {
        if ( a2 == *(unsigned __int16 *)(gpsi + 8678LL) )
        {
          v6 = *(_DWORD *)(gpsi + 2248LL);
        }
        else if ( a2 == 96 )
        {
          v6 = *(_DWORD *)(gpsi + 2636LL);
        }
        else
        {
          DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a2);
          if ( DpiDepSysMetCachePlateauSlot == -1 )
          {
            v6 = ScaleSystemMetricForDPIWithoutCache(92LL, a2);
          }
          else
          {
            v10 = 112LL * DpiDepSysMetCachePlateauSlot;
            v6 = *(_DWORD *)(v10 + v9 + 3152);
            if ( v6 == -1 )
            {
              EnsureDpiDepSysMetCacheForPlateau(a2);
              v6 = *(_DWORD *)(v10 + gpsi + 3152);
              if ( v6 == -1 )
                v6 = 0;
            }
          }
        }
      }
      else
      {
        if ( (a1 & 0x2000000) != 0 )
          v7 = (int *)(gpsi + 2248LL);
        else
          v7 = (int *)(gpsi + 2636LL);
        v6 = *v7;
      }
      v4 += v6;
    }
  }
  return v4;
}
