/*
 * XREFs of ?RenderThreadStartTime@CManipulationTelemetryData@@UEAAX_K@Z @ 0x1800D7100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationTelemetryData::RenderThreadStartTime(CManipulationTelemetryData *this, __int64 a2)
{
  *((_QWORD *)this + 17) = a2;
}
