/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_KPEAPEAUTouchUpdateInfo@1@@Z @ 0x18012CE38
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180126750 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18012B740 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18012B818 (-IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18012B858 (-IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18012B8AC (-IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     McTemplateU0xhhxz @ 0x18012D384 (McTemplateU0xhhxz.c)
 *     McTemplateU0xxhhxzqxxqqxxq @ 0x18012D568 (McTemplateU0xxhhxzqxxqqxxq.c)
 *     McTemplateU0xxxxxqhqqxh @ 0x18012D9B8 (McTemplateU0xxxxxqhqqxh.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        unsigned __int64 a3,
        const unsigned __int64 *a4,
        LARGE_INTEGER **a5)
{
  unsigned int v6; // edi
  int v9; // ecx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  int v11; // edx
  __int64 v12; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v13; // rbx
  DWORD LowPart; // eax
  LARGE_INTEGER v15; // rax
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *v16; // r11
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *v17; // r11
  int v18; // eax
  __int64 v19; // r11
  int v20; // eax
  __int16 v21; // ax
  unsigned int v22; // eax
  LARGE_INTEGER v23; // rax
  unsigned int v24; // eax
  unsigned __int16 v25; // ax
  int v26; // ecx
  DWORD v27; // edx
  LARGE_INTEGER v28; // rcx
  LARGE_INTEGER *v29; // r14
  LARGE_INTEGER v30; // r9
  LARGE_INTEGER v31; // r8
  LARGE_INTEGER v32; // rdx
  LONG HighPart; // r11d
  DWORD v34; // r10d
  LARGE_INTEGER v36; // [rsp+A0h] [rbp+8h] BYREF

  *((_QWORD *)this + 276) = *a4;
  v6 = 0;
  v36.QuadPart = 0LL;
  QueryPerformanceCounter(&v36);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xxxxxqhqqxh(
      v9,
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEAPI_EVENT,
      a2->QuadPart,
      a2[1].QuadPart,
      a2[2].QuadPart,
      a2[3].QuadPart,
      v36.QuadPart,
      a2[4].LowPart,
      WORD2(a2[4].QuadPart),
      a2[5].LowPart,
      a2[5].HighPart,
      a3,
      WORD2(a2[6].QuadPart));
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2->QuadPart);
  v13 = Scenario;
  if ( Scenario )
  {
    if ( *((_DWORD *)Scenario + 10)
      && *((_QWORD *)Scenario + 8)
      && (WORD2(a2[4].QuadPart)
       || (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2216),
                          a3)) )
    {
      CTelemetryTouchLatencyAnalysis::RetireScenario(this, v13, 0, 0);
    }
    if ( !*((_DWORD *)v13 + 10) )
    {
      *(LARGE_INTEGER *)v13 = *a2;
      *((_DWORD *)v13 + 9) = 1;
      LowPart = a2[4].LowPart;
      if ( LowPart )
      {
        *((_DWORD *)v13 + 18) = LowPart;
        *((_DWORD *)v13 + 19) = a2[6].LowPart;
        v15 = a2[1];
      }
      else
      {
        if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(
                             (CTelemetryTouchLatencyAnalysis *)((char *)this + 2216),
                             a3) )
        {
          if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(v16, a3) )
            v18 = *((_DWORD *)v17 + 6);
          else
            v18 = 0;
          *((_DWORD *)v13 + 18) = v18;
          if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(v17, a3) )
            v20 = *(_DWORD *)(v19 + 28);
          else
            v20 = 0;
          *((_DWORD *)v13 + 19) = v20;
        }
        else
        {
          *((_QWORD *)v13 + 9) = 0LL;
        }
        v15 = a2[2];
      }
      *((LARGE_INTEGER *)v13 + 6) = v15;
      *((_DWORD *)v13 + 20) = 0;
      *((_QWORD *)v13 + 11) = a3;
      *((_WORD *)v13 + 48) = 0;
      *(_QWORD *)((char *)v13 + 100) = 0LL;
      *(_QWORD *)((char *)v13 + 108) = 0LL;
      *(_QWORD *)((char *)v13 + 116) = 0LL;
      *(_QWORD *)((char *)v13 + 124) = 0LL;
      *(_QWORD *)((char *)v13 + 132) = 0LL;
      *((_DWORD *)v13 + 35) = 0;
      *((_WORD *)v13 + 72) = 0;
      *(_QWORD *)((char *)v13 + 148) = 0LL;
      *((_WORD *)v13 + 78) = 0;
      *((_QWORD *)v13 + 21) = 0LL;
      *((_QWORD *)v13 + 22) = 0LL;
      *((_DWORD *)v13 + 46) = a2[5].LowPart;
      *((_DWORD *)v13 + 47) = 0;
      *((_QWORD *)v13 + 20) = 0LL;
      *((_QWORD *)v13 + 7) = 0LL;
      *((_QWORD *)v13 + 8) = 0LL;
      v21 = Microsoft_Windows_Dwm_CoreEnableBits;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0xq(v12, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT, a2->QuadPart, 1LL);
        v21 = Microsoft_Windows_Dwm_CoreEnableBits;
      }
      if ( (v21 & 0x100) != 0 )
        McTemplateU0xhhxz(
          v12,
          v11,
          a2->QuadPart,
          *((unsigned __int16 *)v13 + 16),
          *((_WORD *)v13 + 17),
          a3,
          *((_QWORD *)v13 + 1));
    }
    *((_QWORD *)v13 + 22) = *((_QWORD *)v13 + 21);
    *((LARGE_INTEGER *)v13 + 21) = v36;
    if ( !*((_DWORD *)v13 + 10) )
    {
      v22 = *((_DWORD *)v13 + 18);
      if ( v22 < 2 )
        goto LABEL_48;
      if ( v22 > 3 )
      {
        if ( v22 == 4 )
        {
LABEL_32:
          if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                               (CTelemetryTouchLatencyAnalysis *)((char *)this + 2216),
                               a3) )
          {
            v23 = a2[2];
LABEL_36:
            *((LARGE_INTEGER *)v13 + 7) = v23;
            goto LABEL_48;
          }
          goto LABEL_48;
        }
        if ( v22 != 5 )
        {
          if ( v22 != 6 )
            goto LABEL_48;
          goto LABEL_32;
        }
      }
      if ( WORD2(a2[4].QuadPart) )
      {
        v23 = a2[1];
        goto LABEL_36;
      }
LABEL_48:
      v25 = WORD2(a2[4].QuadPart);
      v26 = *((_DWORD *)v13 + 46);
      if ( *((_WORD *)v13 + 40) > v25 )
        v25 = *((_WORD *)v13 + 40);
      *((_WORD *)v13 + 40) = v25;
      *((_WORD *)v13 + 41) = WORD2(a2[4].QuadPart);
      *((_DWORD *)v13 + 47) = v26;
      v27 = a2[5].LowPart;
      *((_DWORD *)v13 + 46) = v27;
      *((_WORD *)v13 + 82) = WORD2(a2[6].QuadPart);
      *((_DWORD *)v13 + 40) += a2[7].LowPart;
      *((_DWORD *)v13 + 10) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xxhhxzqxxqqxxq(
          v26,
          v27,
          *(_QWORD *)v13,
          (_DWORD)v13,
          *((_WORD *)v13 + 16),
          *((_WORD *)v13 + 17),
          a3,
          *((_QWORD *)v13 + 1),
          *((_DWORD *)v13 + 18),
          *((_QWORD *)v13 + 7),
          *((_QWORD *)v13 + 8),
          v27,
          v26,
          *((_QWORD *)v13 + 21),
          *((_QWORD *)v13 + 22),
          *((_DWORD *)v13 + 9));
      v29 = (LARGE_INTEGER *)operator new(0x38uLL);
      if ( v29 )
      {
        v30 = v36;
        v31 = a2[3];
        v32 = a2[2];
        v28 = a2[1];
        HighPart = a2[5].HighPart;
        v34 = a2[5].LowPart;
        *v29 = *a2;
        v29[1] = v28;
        v29[2] = v32;
        v29[3] = v31;
        v29[4] = v30;
        v29[5].LowPart = v34;
        v29[5].HighPart = HighPart;
        v29[6].QuadPart = (LONGLONG)this;
      }
      else
      {
        v29 = 0LL;
      }
      if ( v29 )
      {
        *a5 = v29;
        if ( a3 >= *((_QWORD *)v13 + 11) )
        {
          ++*((_DWORD *)v13 + 9);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq)(
              (LARGE_INTEGER)v28.QuadPart,
              &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
              a2->QuadPart,
              *((unsigned int *)v13 + 9));
        }
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x3BDu);
      }
      return v6;
    }
    if ( *((_QWORD *)v13 + 8) )
      goto LABEL_48;
    v24 = *((_DWORD *)v13 + 18);
    if ( v24 )
    {
      if ( v24 <= 1 )
        goto LABEL_48;
      if ( v24 > 3 )
      {
        if ( v24 == 4 )
        {
LABEL_44:
          if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsStartInertia(
                                (CTelemetryTouchLatencyAnalysis *)((char *)this + 2216),
                                a3) )
            goto LABEL_48;
LABEL_47:
          *((LARGE_INTEGER *)v13 + 8) = a2[2];
          goto LABEL_48;
        }
        if ( v24 != 5 )
        {
          if ( v24 != 6 )
            goto LABEL_48;
          goto LABEL_44;
        }
      }
    }
    if ( WORD2(a2[4].QuadPart) )
      goto LABEL_48;
    goto LABEL_47;
  }
  return v6;
}
