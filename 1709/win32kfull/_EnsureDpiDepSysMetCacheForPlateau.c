/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01A1580
 * Callers:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(unsigned int a1)
{
  int v2; // edi
  __int64 v3; // rbx

  v2 = 0;
  v3 = 120LL * (int)GetDpiDepSysMetCachePlateauSlot(a1) + 2268;
  do
  {
    if ( *(_DWORD *)(v3 + gpsi) == -1 )
      *(_DWORD *)(v3 + gpsi) = ScaleSystemMetricForDPIWithoutCache((unsigned int)v2, a1);
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 30 );
  return 1LL;
}
