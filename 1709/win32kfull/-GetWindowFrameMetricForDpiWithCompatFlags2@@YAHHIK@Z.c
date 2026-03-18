/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C007C400
 * Callers:
 *     GetWindowFrameMetricForDpi @ 0x1C007BB8C (GetWindowFrameMetricForDpi.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C007C324 (GetWindowBordersForDpiWithCompatFlags2.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpiWithCompatFlags2(__int64 a1, int a2, int a3)
{
  unsigned int v4; // r11d

  if ( (a3 & 0x10000000) != 0 || (a3 & 0x20000000) != 0 )
    return 0LL;
  if ( a2 == *(unsigned __int16 *)(gpsi + 9974LL) )
    return *(unsigned int *)(gpsi + 2384LL);
  if ( a2 == 96 )
    return *(unsigned int *)(gpsi + 2504LL);
  if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(a2) == -1 )
    return ScaleSystemMetricForDPIWithoutCache(29LL, v4);
  return GetDpiDependentMetric(29LL, v4);
}
