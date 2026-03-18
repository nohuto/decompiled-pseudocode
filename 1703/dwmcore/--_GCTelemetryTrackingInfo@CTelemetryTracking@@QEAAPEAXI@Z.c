/*
 * XREFs of ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x180142F9C
 * Callers:
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180142FCC (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18014324C (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
