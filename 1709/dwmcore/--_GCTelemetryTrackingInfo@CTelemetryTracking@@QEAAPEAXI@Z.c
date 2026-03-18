/*
 * XREFs of ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x18012EED8
 * Callers:
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18012EF08 (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18012F174 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CTelemetryTracking::CTelemetryTrackingInfo *__fastcall CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(
        CTelemetryTracking::CTelemetryTrackingInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 && *((_QWORD *)this + 3) )
    WPF::ProcessHeapImpl::Free(v2);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
