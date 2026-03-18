/*
 * XREFs of ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x18012B638
 * Callers:
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x1801266D0 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z.c)
 * Callees:
 *     McTemplateU0xx @ 0x180126DF8 (McTemplateU0xx.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18012B740 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18012B94C (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x18012CDB4 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     McTemplateU0xxqqhhqqxxz @ 0x18012D878 (McTemplateU0xxqqhhqqxxz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
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
    McTemplateU0xx(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ENDAPI_EVENT, a2, a3);
  *((_QWORD *)this + 276) = *a4;
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
      McTemplateU0xxqqhhqqxxz(
        *((_QWORD *)Scenario + 1),
        v10,
        *(_QWORD *)Scenario,
        (_DWORD)Scenario,
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
