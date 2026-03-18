/*
 * XREFs of ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x1801266A0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x18012AF54 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4)
{
  CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
    (CPartitionVerticalBlankScheduler *)((char *)this + 21928),
    a2,
    a3,
    a4,
    **((_QWORD **)this + 2625));
}
