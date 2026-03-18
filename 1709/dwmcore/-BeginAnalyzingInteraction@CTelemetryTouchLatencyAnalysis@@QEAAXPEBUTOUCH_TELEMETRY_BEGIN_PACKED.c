/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x18012AF54
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x1801266A0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x18012A944 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18012B740 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     McTemplateU0xxhhxzqq @ 0x18012D460 (McTemplateU0xxhhxzqq.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v10; // rbx
  unsigned __int64 v11; // rsi
  wchar_t *v12; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rax
  wchar_t *v15; // rsi
  LARGE_INTEGER *v16; // rax
  unsigned __int64 QuadPart; // rcx
  int v18; // ebx
  const wchar_t *v19; // rsi
  int v20; // ecx

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2->QuadPart);
  v10 = Scenario;
  if ( Scenario )
  {
    ++*((_DWORD *)Scenario + 9);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0xq(
        (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits,
        &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
        *(_QWORD *)Scenario,
        *((unsigned int *)Scenario + 9));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xxhhxzqq(
          Microsoft_Windows_Dwm_CoreEnableBits,
          (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_CONCAT_EVENT,
          a2->QuadPart,
          (_DWORD)v10,
          HIWORD(a2[1].u.LowPart),
          WORD2(a2[1].QuadPart),
          a5,
          *((_QWORD *)v10 + 1),
          *((_DWORD *)v10 + 6),
          *((_DWORD *)v10 + 7));
    }
  }
  else if ( a4 )
  {
    v11 = (a3 >> 1) + 1;
    v12 = (wchar_t *)operator new(saturated_mul(v11, 2uLL));
    v13 = v12;
    if ( v12 )
    {
      if ( wcscpy_s(v12, v11, a4) )
      {
        WPF::ProcessHeapImpl::Free(v13);
      }
      else
      {
        v14 = wcschr(v13, 1u);
        v15 = v14;
        if ( v14 )
          *v14 = 0;
        v16 = CTelemetryTouchLatencyAnalysis::AllocateScenario(this);
        QuadPart = a2->QuadPart;
        v18 = (int)v16;
        *v16 = *a2;
        v16[1].QuadPart = (LONGLONG)v13;
        if ( v15 )
          v19 = v15 + 1;
        else
          v19 = L"0.0.0.0";
        v16[2].QuadPart = (LONGLONG)v19;
        v16[3].LowPart = a2[2].LowPart;
        LOWORD(v16[4].LowPart) = HIWORD(a2[1].u.LowPart);
        HIWORD(v16[4].u.LowPart) = WORD2(a2[1].QuadPart);
        v16[3].HighPart = a2[2].HighPart;
        v16[5].LowPart = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0xq(
            QuadPart,
            &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
            a2->QuadPart,
            (unsigned int)v16[4].HighPart);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xxhhxzqq(
              v20,
              (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_EVENT,
              a2->QuadPart,
              v18,
              HIWORD(a2[1].u.LowPart),
              WORD2(a2[1].QuadPart),
              a5,
              (__int64)v13,
              a2[2].LowPart,
              a2[2].HighPart);
        }
      }
    }
  }
}
