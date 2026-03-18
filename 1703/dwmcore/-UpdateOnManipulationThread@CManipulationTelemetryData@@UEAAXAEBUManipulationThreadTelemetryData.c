/*
 * XREFs of ?UpdateOnManipulationThread@CManipulationTelemetryData@@UEAAXAEBUManipulationThreadTelemetryData@@@Z @ 0x1800CCE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationTelemetryData::UpdateOnManipulationThread(
        CManipulationTelemetryData *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
}
