/*
 * XREFs of ??0InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800CCE28
 * Callers:
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800CE30C (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *__fastcall CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::InteractionSummaryInfo(
        CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *this)
{
  memset_0((char *)this + 184, 0, 0x30uLL);
  `vector constructor iterator'(
    (CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *)((char *)this + 232),
    0x18uLL,
    5uLL,
    (void *(*)(void *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0((char *)this + 384, 0, 0x30uLL);
  `vector constructor iterator'(
    (CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *)((char *)this + 432),
    0x18uLL,
    5uLL,
    (void *(*)(void *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  return this;
}
