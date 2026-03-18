/*
 * XREFs of ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x1801266D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x18012B638 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryEndTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned __int64 *)*((_QWORD *)this + 2625);
  v3 = 10000000 * (*((_QWORD *)this + 11) / g_qpcFrequency.QuadPart)
     + (unsigned __int64)(10000000 * (*((_QWORD *)this + 11) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart;
  CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
    (CPartitionVerticalBlankScheduler *)((char *)this + 21928),
    a2,
    *v2,
    &v3);
}
