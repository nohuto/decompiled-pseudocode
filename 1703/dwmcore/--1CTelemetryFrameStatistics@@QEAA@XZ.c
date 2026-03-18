/*
 * XREFs of ??1CTelemetryFrameStatistics@@QEAA@XZ @ 0x1801435FC
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18013B684 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800BC14C (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 */

void __fastcall CTelemetryFrameStatistics::~CTelemetryFrameStatistics(CTelemetryFrameStatistics *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(this, PerformanceCount.QuadPart);
}
