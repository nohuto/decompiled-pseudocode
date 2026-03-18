/*
 * XREFs of ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x180027FA4
 * Callers:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18002897C (-UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800289FC (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180027EA8 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180027F00 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        unsigned __int64 a3)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  CTelemetryTouchLatencyAnalysis *v5; // r11

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    if ( a3 >= *((_QWORD *)Scenario + 11) )
      CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v5, Scenario);
  }
}
