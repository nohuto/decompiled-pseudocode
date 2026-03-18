/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180014878
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180013F20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180014CF4 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x180014D98 (-IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x180014DE4 (-IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18014DA6C (-IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     McTemplateU0xhhxqnttz @ 0x18014F82C (McTemplateU0xhhxqnttz.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     McTemplateU0xxhhxqnttzqqxxqqxxq @ 0x18014F9B8 (McTemplateU0xxhhxqnttzqqxxqqxxq.c)
 *     McTemplateU0xxxxxqhqqxqntt @ 0x180150090 (McTemplateU0xxxxxqhqqxqntt.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        unsigned __int64 a3,
        char a4,
        const unsigned __int64 *a5,
        unsigned int a6,
        struct _LUID a7,
        unsigned __int8 a8,
        struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **a9)
{
  const unsigned __int64 *v9; // rax
  unsigned int v11; // edi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v16; // rbx
  int v17; // r14d
  unsigned __int8 v18; // r14
  char v19; // r12
  unsigned __int8 v20; // al
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  _QWORD *v24; // r14
  const unsigned __int64 *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r11d
  int v29; // r10d
  __int64 v30; // r9
  int v32; // eax
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *v33; // r11
  __int64 v34; // rax
  __int64 v35; // rcx
  __int16 v36; // ax
  int v37; // eax
  int v38; // eax
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *v39; // r11
  int v40; // eax
  __int64 v41; // r11
  int v42; // eax
  __int64 v43; // rax
  int v44; // [rsp+38h] [rbp-90h]
  int v45; // [rsp+40h] [rbp-88h]

  v9 = a5;
  v11 = 0;
  a5 = 0LL;
  *((_QWORD *)this + 394) = *v9;
  QueryPerformanceCounter((LARGE_INTEGER *)&a5);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xxxxxqhqqxqntt(
      a8,
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEAPI_EVENT,
      *(_QWORD *)a2,
      *((_QWORD *)a2 + 1),
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 3),
      (char)a5,
      *((_DWORD *)a2 + 8),
      *((_WORD *)a2 + 18),
      *((_DWORD *)a2 + 10),
      *((_DWORD *)a2 + 11),
      a3,
      a6);
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v16 = Scenario;
  if ( Scenario )
  {
    v17 = *((_DWORD *)Scenario + 17);
    if ( v17
      && *((_QWORD *)Scenario + 11)
      && (*((_WORD *)a2 + 18)
       || (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                          (CTelemetryTouchLatencyAnalysis *)((char *)this + 3160),
                          a3)) )
    {
      CTelemetryTouchLatencyAnalysis::RetireScenario(this, v16, 0, 0);
      v17 = *((_DWORD *)v16 + 17);
    }
    if ( v17 )
    {
      v18 = a8;
      v19 = a6;
    }
    else
    {
      *(_QWORD *)v16 = *(_QWORD *)a2;
      *((_DWORD *)v16 + 16) = 1;
      v32 = *((_DWORD *)a2 + 8);
      if ( v32 )
      {
        *((_DWORD *)v16 + 7) = v32;
        *((_DWORD *)v16 + 9) = *((_DWORD *)a2 + 12);
        v34 = *((_QWORD *)a2 + 1);
      }
      else
      {
        if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(
                             (CTelemetryTouchLatencyAnalysis *)((char *)this + 3160),
                             a3) )
        {
          if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(v33, a3) )
            v40 = *((_DWORD *)v39 + 6);
          else
            v40 = 0;
          *((_DWORD *)v16 + 7) = v40;
          if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(v39, a3) )
            v42 = *(_DWORD *)(v41 + 28);
          else
            v42 = 0;
          *((_DWORD *)v16 + 9) = v42;
        }
        else
        {
          *((_DWORD *)v16 + 7) = 0;
          *((_DWORD *)v16 + 9) = 0;
        }
        v34 = *((_QWORD *)a2 + 2);
      }
      v18 = a8;
      *((_QWORD *)v16 + 9) = v34;
      *((_DWORD *)v16 + 12) = a6;
      *((_DWORD *)v16 + 10) = 0;
      *(struct _LUID *)((char *)v16 + 52) = a7;
      *((_BYTE *)v16 + 60) = v18;
      *((_WORD *)v16 + 48) = 0;
      *((_QWORD *)v16 + 13) = a3;
      *((_DWORD *)v16 + 28) = 0;
      *((_QWORD *)v16 + 15) = 0LL;
      *((_QWORD *)v16 + 16) = 0LL;
      *((_QWORD *)v16 + 17) = 0LL;
      *((_WORD *)v16 + 72) = 0;
      *((_BYTE *)v16 + 116) = a4;
      *((_BYTE *)v16 + 146) = 0;
      memset_0((char *)v16 + 148, 0, 0x30uLL);
      *((_DWORD *)v16 + 49) = 0;
      *((_QWORD *)v16 + 25) = 0LL;
      *((_DWORD *)v16 + 54) = 0;
      *((_DWORD *)v16 + 52) = 0;
      *((_WORD *)v16 + 106) = 0;
      *((_QWORD *)v16 + 28) = 0LL;
      *((_QWORD *)v16 + 29) = 0LL;
      *((_DWORD *)v16 + 60) = *((_DWORD *)a2 + 10);
      *((_DWORD *)v16 + 61) = 0;
      *((_QWORD *)v16 + 10) = 0LL;
      *((_QWORD *)v16 + 11) = 0LL;
      *((_WORD *)v16 + 110) = 0;
      v36 = Microsoft_Windows_Dwm_CoreEnableBits;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0xq(
          v35,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
          *(_QWORD *)a2,
          *((unsigned int *)v16 + 16));
        v36 = Microsoft_Windows_Dwm_CoreEnableBits;
      }
      v19 = a6;
      if ( (v36 & 0x100) != 0 )
        McTemplateU0xhhxqnttz(
          *((unsigned __int8 *)v16 + 116),
          v18,
          *(_QWORD *)a2,
          *((unsigned __int16 *)v16 + 22),
          *((_WORD *)v16 + 23),
          a3,
          a6,
          v44,
          (__int64)&a7,
          v18,
          *((_BYTE *)v16 + 116),
          *((_QWORD *)v16 + 1));
    }
    *((_QWORD *)v16 + 29) = *((_QWORD *)v16 + 28);
    *((_QWORD *)v16 + 28) = a5;
    if ( *((_DWORD *)v16 + 17) )
    {
      if ( *((_QWORD *)v16 + 11) )
      {
LABEL_12:
        v20 = *((_BYTE *)v16 + 96);
        v21 = *((_DWORD *)v16 + 60);
        if ( v20 <= *((_BYTE *)a2 + 36) )
          v20 = *((_BYTE *)a2 + 36);
        *((_BYTE *)v16 + 96) = v20;
        *((_BYTE *)v16 + 97) = *((_BYTE *)a2 + 36);
        *((_DWORD *)v16 + 61) = v21;
        v22 = *((_DWORD *)a2 + 10);
        *((_DWORD *)v16 + 60) = v22;
        *((_WORD *)v16 + 110) = *((_WORD *)a2 + 26);
        *((_DWORD *)v16 + 54) += *((unsigned __int16 *)a2 + 28);
        *((_DWORD *)v16 + 17) = 1;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xxhhxqnttzqqxxqqxxq(
            *((unsigned __int8 *)v16 + 116),
            v18,
            *(_QWORD *)v16,
            (_DWORD)v16,
            *((_WORD *)v16 + 22),
            *((_WORD *)v16 + 23),
            a3,
            v19,
            v45,
            (__int64)&a7,
            v18,
            *((_BYTE *)v16 + 116),
            *((_QWORD *)v16 + 1),
            *((_DWORD *)v16 + 7),
            *((_DWORD *)v16 + 10),
            *((_QWORD *)v16 + 10),
            *((_QWORD *)v16 + 11),
            v22,
            v21,
            *((_QWORD *)v16 + 28),
            *((_QWORD *)v16 + 29),
            *((_DWORD *)v16 + 16));
        v24 = operator new(0x40uLL);
        if ( v24 )
        {
          v25 = a5;
          v26 = *((_QWORD *)a2 + 3);
          v27 = *((_QWORD *)a2 + 2);
          v23 = *((_QWORD *)a2 + 1);
          v28 = *((_DWORD *)a2 + 11);
          v29 = *((_DWORD *)a2 + 10);
          *v24 = *(_QWORD *)a2;
          v24[1] = v23;
          v24[2] = v27;
          v24[3] = v26;
          v24[4] = v25;
          *((_DWORD *)v24 + 10) = v29;
          *((_DWORD *)v24 + 11) = v28;
          *((_DWORD *)v24 + 12) = v28;
          v24[7] = this;
        }
        else
        {
          v24 = 0LL;
        }
        if ( v24 )
        {
          *a9 = (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v24;
          if ( a3 >= *((_QWORD *)v16 + 13) )
          {
            v30 = (unsigned int)(*((_DWORD *)v16 + 16) + 1);
            *((_DWORD *)v16 + 16) = v30;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0xq(v23, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT, *(_QWORD *)a2, v30);
          }
        }
        else
        {
          v11 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4D0u);
        }
        return v11;
      }
      v38 = *((_DWORD *)v16 + 7);
      if ( v38 )
      {
        if ( v38 <= 1 )
          goto LABEL_12;
        if ( v38 > 3 )
        {
          if ( v38 == 4 )
          {
LABEL_59:
            if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsStartInertia(
                                  (CTelemetryTouchLatencyAnalysis *)((char *)this + 3160),
                                  a3) )
              goto LABEL_12;
            goto LABEL_35;
          }
          if ( v38 != 5 )
          {
            if ( v38 != 6 )
              goto LABEL_12;
            goto LABEL_59;
          }
        }
      }
      if ( *((_WORD *)a2 + 18) )
        goto LABEL_12;
LABEL_35:
      *((_QWORD *)v16 + 11) = *((_QWORD *)a2 + 2);
      goto LABEL_12;
    }
    v37 = *((_DWORD *)v16 + 7);
    if ( v37 < 2 )
      goto LABEL_12;
    if ( v37 > 3 )
    {
      if ( v37 == 4 )
      {
LABEL_49:
        if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3160),
                              a3) )
          goto LABEL_12;
        v43 = *((_QWORD *)a2 + 2);
LABEL_53:
        *((_QWORD *)v16 + 10) = v43;
        goto LABEL_12;
      }
      if ( v37 != 5 )
      {
        if ( v37 != 6 )
          goto LABEL_12;
        goto LABEL_49;
      }
    }
    if ( !*((_WORD *)a2 + 18) )
      goto LABEL_12;
    v43 = *((_QWORD *)a2 + 1);
    goto LABEL_53;
  }
  return v11;
}
