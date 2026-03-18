/*
 * XREFs of ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x1800B7730
 * Callers:
 *     ?GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x1800658F0 (-GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180046560 (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 */

__int64 __fastcall CDisplaySet::IsWARPAdapterAtIndex(CDisplaySet *this, __int64 a2, bool *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 2);
  *a3 = 0;
  if ( *(_DWORD *)(v3 + 88) )
  {
    _mm_lfence();
    *a3 = CDXGIEnumeration::IsWarpAdapterLuid((CDXGIEnumeration *)v3, *(struct _LUID *)(**(_QWORD **)(v3 + 64) + 336LL));
  }
  return 0LL;
}
