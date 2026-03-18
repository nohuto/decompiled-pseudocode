/*
 * XREFs of ?Update@CTelemetryTracking@@QEAAXXZ @ 0x180133E3C
 * Callers:
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18014324C (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 */

void __fastcall CTelemetryTracking::Update(CTelemetryTracking *this)
{
  if ( GetTickCount64() >= *((_QWORD *)this + 66) )
  {
    CTelemetryTracking::SendTelemetry(this);
    *((_QWORD *)this + 66) = GetTickCount64() + 3600000;
  }
}
