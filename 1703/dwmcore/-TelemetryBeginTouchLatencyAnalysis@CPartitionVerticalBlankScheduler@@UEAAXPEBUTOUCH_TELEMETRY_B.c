/*
 * XREFs of ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x180004BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x180028730 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4)
{
  CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
    (CPartitionVerticalBlankScheduler *)((char *)this + 22408),
    a2,
    a3,
    a4,
    **((_QWORD **)this + 2685));
}
