/*
 * XREFs of ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x1800288F4
 * Callers:
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x180004BC0 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180027984 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180027EA8 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180027F00 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     Template_xxqqhhqqxxz @ 0x180141A0C (Template_xxqqhhqqxxz.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int64 *a4)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rdi
  __int16 v8; // bx
  char v9; // al
  int v10; // edx
  char v11; // r10
  char v12; // r11
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xx(this, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ENDAPI_EVENT, a2, a3);
  *((_QWORD *)this + 286) = *a4;
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
    {
      v8 = *((_WORD *)Scenario + 48);
      v9 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
             this,
             *((_QWORD *)Scenario + 6),
             PerformanceCount.QuadPart);
      Template_xxqqhhqqxxz(
        *((_QWORD *)Scenario + 1),
        v10,
        (_DWORD)Scenario,
        *(_QWORD *)Scenario,
        *((_DWORD *)Scenario + 18),
        *((_DWORD *)Scenario + 19),
        *((_WORD *)Scenario + 16),
        *((_WORD *)Scenario + 17),
        v9,
        v8,
        v12,
        v11,
        *((_QWORD *)Scenario + 1));
    }
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(this, Scenario);
  }
}
