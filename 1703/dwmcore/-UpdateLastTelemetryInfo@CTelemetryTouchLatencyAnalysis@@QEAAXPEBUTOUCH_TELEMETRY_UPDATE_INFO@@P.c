/*
 * XREFs of ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180133ECC
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180065AC0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CIndependentRefreshRateScheduler@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18013E480 (-TelemetryUpdateTouchLatencyAnalysis@CIndependentRefreshRateScheduler@@UEAAXAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180027F00 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     Template_xxxxxqhqqx @ 0x180141B50 (Template_xxxxxqhqqx.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        LARGE_INTEGER *a3,
        __int64 a4)
{
  LARGE_INTEGER *Scenario; // rax
  LARGE_INTEGER *v8; // rbx
  LARGE_INTEGER v9; // r9
  LARGE_INTEGER v10; // r8
  LARGE_INTEGER v11; // rdx
  LONGLONG QuadPart; // rcx

  Scenario = (LARGE_INTEGER *)CTelemetryTouchLatencyAnalysis::FindScenario(this, a2->QuadPart);
  if ( Scenario )
  {
    Scenario[24].LowPart = a2[5].LowPart;
    if ( Scenario[11].QuadPart != a4 )
    {
      v8 = Scenario + 22;
      QueryPerformanceCounter(Scenario + 22);
      v9 = a2[1];
      a3[1] = v9;
      v10 = a2[2];
      a3[2] = v10;
      v11 = a2[3];
      a3[3] = v11;
      QuadPart = v8->QuadPart;
      a3[4] = *v8;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxxxxqhqqx(
          QuadPart,
          (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATELASTAPI_EVENT,
          a3->QuadPart,
          v9.LowPart,
          v10.QuadPart,
          v11.QuadPart,
          QuadPart,
          a2[4].LowPart,
          WORD2(a2[4].QuadPart),
          a2[5].LowPart,
          a2[5].HighPart,
          a4);
    }
  }
}
