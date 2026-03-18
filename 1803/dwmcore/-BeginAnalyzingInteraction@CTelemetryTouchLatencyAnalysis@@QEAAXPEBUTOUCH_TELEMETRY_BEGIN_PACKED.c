/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x18001473C
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x1800140C0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180014CF4 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180014D30 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     McTemplateU0xxhhxqntzqq @ 0x18014FBB4 (McTemplateU0xxhhxqntzqq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct _LUID a7,
        bool a8)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  int v13; // ebx
  unsigned __int64 v14; // rsi
  void *v15; // rax
  void *v16; // r14
  wchar_t *v17; // rax
  wchar_t *v18; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // ebx
  const wchar_t *v22; // rsi
  __int64 v23; // r9

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v13 = (int)Scenario;
  if ( Scenario )
  {
    v23 = (unsigned int)(*((_DWORD *)Scenario + 16) + 1);
    *((_DWORD *)Scenario + 16) = v23;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0xq(
        (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits,
        &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
        *(_QWORD *)Scenario,
        v23);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xxhhxqntzqq(
          a8,
          (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_CONCAT_EVENT,
          *(_QWORD *)a2,
          v13,
          *((_WORD *)a2 + 5),
          *((_WORD *)a2 + 6),
          a5,
          a6);
    }
  }
  else if ( a4 )
  {
    v14 = (a3 >> 1) + 1;
    v15 = operator new(saturated_mul(v14, 2uLL));
    v16 = v15;
    if ( v15 )
    {
      if ( (unsigned int)_o_wcscpy_s(v15, v14, a4) )
      {
        operator delete(v16);
      }
      else
      {
        v17 = wcschr((const wchar_t *)v16, 1u);
        v18 = v17;
        if ( v17 )
          *v17 = 0;
        v19 = CTelemetryTouchLatencyAnalysis::AllocateScenario(this);
        v20 = *(_QWORD *)a2;
        v21 = (int)v19;
        *(_QWORD *)v19 = *(_QWORD *)a2;
        *((_QWORD *)v19 + 1) = v16;
        if ( v18 )
          v22 = v18 + 1;
        else
          v22 = L"0.0.0.0";
        *((_QWORD *)v19 + 2) = v22;
        *((_DWORD *)v19 + 6) = *((_DWORD *)a2 + 4);
        *((_WORD *)v19 + 22) = *((_WORD *)a2 + 5);
        *((_WORD *)v19 + 23) = *((_WORD *)a2 + 6);
        *((_DWORD *)v19 + 12) = a6;
        *(struct _LUID *)((char *)v19 + 52) = a7;
        *((_BYTE *)v19 + 60) = a8;
        *((_DWORD *)v19 + 8) = *((_DWORD *)a2 + 5);
        *((_DWORD *)v19 + 17) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0xq(
            v20,
            &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
            *(_QWORD *)a2,
            *((unsigned int *)v19 + 16));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xxhhxqntzqq(
              a8,
              (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_EVENT,
              *(_QWORD *)a2,
              v21,
              *((_WORD *)a2 + 5),
              *((_WORD *)a2 + 6),
              a5,
              a6);
        }
      }
    }
  }
}
