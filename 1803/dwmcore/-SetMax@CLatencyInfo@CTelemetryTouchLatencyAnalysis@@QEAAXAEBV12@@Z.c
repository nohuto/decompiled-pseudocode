/*
 * XREFs of ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x180014EBC
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180014418 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014CFC4 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     <none>
 */

void __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
        CTelemetryTouchLatencyAnalysis::CLatencyInfo *this,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    if ( v2 <= *(_DWORD *)a2 )
      v2 = *(_DWORD *)a2;
    *(_DWORD *)this = v2;
    v3 = *((_DWORD *)this + 1);
    if ( v3 <= *((_DWORD *)a2 + 1) )
      v3 = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 1) = v3;
    v4 = *((_DWORD *)this + 2);
    if ( v4 <= *((_DWORD *)a2 + 2) )
      v4 = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 2) = v4;
    v5 = *((_DWORD *)this + 3);
    if ( v5 <= *((_DWORD *)a2 + 3) )
      v5 = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 3) = v5;
    v6 = *((_DWORD *)this + 4);
    if ( v6 <= *((_DWORD *)a2 + 4) )
      v6 = *((_DWORD *)a2 + 4);
    *((_DWORD *)this + 4) = v6;
    v7 = *((_DWORD *)this + 5);
    if ( v7 <= *((_DWORD *)a2 + 5) )
      v7 = *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 5) = v7;
  }
  else
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(this, a2);
  }
}
