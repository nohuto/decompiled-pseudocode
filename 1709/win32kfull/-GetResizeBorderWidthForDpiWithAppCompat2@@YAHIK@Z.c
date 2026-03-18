/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00982B4
 * Callers:
 *     GetResizeBorderWidthForDpi @ 0x1C007BB64 (GetResizeBorderWidthForDpi.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C007C324 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     _AdjustWindowRectExForDpi @ 0x1C009C178 (_AdjustWindowRectExForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpiWithAppCompat2(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebx
  int DpiDependentMetric; // eax

  v3 = a2;
  v4 = a1;
  if ( (a2 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v5 = ((int)a1 * *(_DWORD *)(Get96DpiServerInfo(a1, a2, a3) + 4) + 48) / 96;
    if ( (v3 & 0x20000000) != 0 )
    {
      if ( v4 == *(unsigned __int16 *)(gpsi + 9974LL) )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2384LL);
      }
      else if ( v4 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2504LL);
      }
      else if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(v4) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v4);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(29LL, v4);
      }
      v5 += DpiDependentMetric;
    }
  }
  return v5;
}
