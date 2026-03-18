/*
 * XREFs of ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18000A7E8
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180013F20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x1800140C0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_B.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180170ADC (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDisplaySet::GetPrimaryAdapterLuid(CDisplaySet *this, struct _LUID *a2)
{
  unsigned int v2; // eax

  *a2 = g_luidZero;
  v2 = *((_DWORD *)this + 10);
  if ( v2 < *((_DWORD *)this + 18) )
    *a2 = *(struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v2) + 248LL);
  return (struct _LUID)a2;
}
