/*
 * XREFs of ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x1801506D4
 * Callers:
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180150704 (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x1801509A4 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

CTelemetryTracking::CTelemetryTrackingInfo *__fastcall CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(
        CTelemetryTracking::CTelemetryTrackingInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 && *((_QWORD *)this + 3) )
    operator delete(v2);
  operator delete(this);
  return this;
}
