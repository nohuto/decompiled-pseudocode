/*
 * XREFs of ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18002897C
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180065DC0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x180027FA4 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x1800C3144 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::UpdateScenarioLatency(
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  CTelemetryTouchLatencyAnalysis *v6; // rcx

  v6 = (CTelemetryTouchLatencyAnalysis *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
      v6,
      *(_QWORD *)this,
      *((_QWORD *)this + 1),
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 4),
      a3,
      a4,
      a2,
      *((_DWORD *)this + 10),
      *((_DWORD *)this + 11),
      a5);
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
      *((CTelemetryTouchLatencyAnalysis **)this + 6),
      *(_QWORD *)this,
      a5);
    *((_QWORD *)this + 6) = 0LL;
  }
}
