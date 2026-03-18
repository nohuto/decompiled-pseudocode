/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x180028730
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x180004BF0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180027F00 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180027F3C (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     Template_xxhhxzqq @ 0x18014179C (Template_xxhhxzqq.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  void *v10; // rdi
  unsigned __int64 v11; // rsi
  wchar_t *v12; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rax
  wchar_t *v15; // rsi
  LARGE_INTEGER *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  wchar_t *v19; // rsi
  void *v20; // rdx
  wchar_t *v21; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+40h] [rbp-28h]
  int v23; // [rsp+48h] [rbp-20h]

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v10 = Scenario;
  if ( Scenario )
  {
    ++*((_DWORD *)Scenario + 9);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      return;
    Template_xd(
      (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits,
      &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
      *(_QWORD *)Scenario,
      *((unsigned int *)Scenario + 9));
    v18 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      return;
    v20 = &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_CONCAT_EVENT;
    v23 = *((_DWORD *)v10 + 7);
    v22 = *((_DWORD *)v10 + 6);
    v21 = (wchar_t *)*((_QWORD *)v10 + 1);
LABEL_17:
    Template_xxhhxzqq(v18, v20, v10, *(_QWORD *)a2, *((_WORD *)a2 + 5), *((_WORD *)a2 + 6), a5, v21, v22, v23);
    return;
  }
  if ( a4 )
  {
    v11 = (a3 >> 1) + 1;
    v12 = (wchar_t *)operator new(saturated_mul(v11, 2uLL));
    v13 = v12;
    if ( v12 )
    {
      if ( wcscpy_s(v12, v11, a4) )
      {
        WPF::ProcessHeapImpl::Free(v13);
        return;
      }
      v14 = wcschr(v13, 1u);
      v15 = v14;
      if ( v14 )
        *v14 = 0;
      v16 = CTelemetryTouchLatencyAnalysis::AllocateScenario(this);
      v10 = v16;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xd(
          v17,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
          *(_QWORD *)a2,
          (unsigned int)v16[4].HighPart);
      v18 = *(_QWORD *)a2;
      *(_QWORD *)v10 = *(_QWORD *)a2;
      *((_QWORD *)v10 + 1) = v13;
      v19 = v15 ? v15 + 1 : L"0.0.0.0";
      *((_QWORD *)v10 + 2) = v19;
      *((_DWORD *)v10 + 6) = *((_DWORD *)a2 + 4);
      *((_WORD *)v10 + 16) = *((_WORD *)a2 + 5);
      *((_WORD *)v10 + 17) = *((_WORD *)a2 + 6);
      *((_DWORD *)v10 + 7) = *((_DWORD *)a2 + 5);
      *((_DWORD *)v10 + 10) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v20 = &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_EVENT;
        v23 = *((_DWORD *)a2 + 5);
        v22 = *((_DWORD *)a2 + 4);
        v21 = v13;
        goto LABEL_17;
      }
    }
  }
}
