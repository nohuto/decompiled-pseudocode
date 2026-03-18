/*
 * XREFs of ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180014CAC
 * Callers:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18001470C (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x180014BC4 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  unsigned int v3; // eax

  v3 = *((_DWORD *)a2 + 16) - 1;
  *((_DWORD *)a2 + 16) = v3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0xq(this, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT, *(_QWORD *)a2, v3);
    v3 = *((_DWORD *)a2 + 16);
  }
  if ( !v3 )
    CTelemetryTouchLatencyAnalysis::RetireScenario(this, a2, 1, 0);
}
