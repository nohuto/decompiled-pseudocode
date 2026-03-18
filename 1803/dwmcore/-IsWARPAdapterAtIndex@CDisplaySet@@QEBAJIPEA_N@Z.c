/*
 * XREFs of ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x1800B6A78
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180013F20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x1800140C0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_B.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A414 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x1800CA78C (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
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
