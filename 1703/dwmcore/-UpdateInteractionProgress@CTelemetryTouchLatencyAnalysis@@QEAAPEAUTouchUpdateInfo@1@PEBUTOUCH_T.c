/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800C3638
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180065AC0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CIndependentRefreshRateScheduler@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18013E480 (-TelemetryUpdateTouchLatencyAnalysis@CIndependentRefreshRateScheduler@@UEAAXAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?IdentifyScenarioInteractionTypeForKbdMouse@@YA?AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@W41@KI_K@Z @ 0x180023B98 (-IdentifyScenarioInteractionTypeForKbdMouse@@YA-AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_00.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180027F00 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180027FD4 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     Template_xhhxz @ 0x1801416C0 (Template_xhhxz.c)
 *     Template_xxxxxqhqqx @ 0x180141B50 (Template_xxxxxqhqqx.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

LARGE_INTEGER *__fastcall CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        unsigned __int64 a3,
        const unsigned __int64 *a4)
{
  LARGE_INTEGER *v7; // r14
  int v8; // ecx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v10; // rbx
  int v11; // ecx
  unsigned int v12; // eax
  unsigned __int16 v13; // ax
  int v14; // edx
  int v15; // edx
  LARGE_INTEGER v16; // rcx
  LARGE_INTEGER v17; // r9
  LARGE_INTEGER v18; // r8
  LARGE_INTEGER v19; // rdx
  LONG HighPart; // r11d
  DWORD v21; // r10d
  DWORD LowPart; // eax
  unsigned __int64 v24; // rcx
  int v25; // ecx
  int v26; // edx
  __int64 v27; // rcx
  __int16 v28; // ax
  unsigned int v29; // eax
  bool v30; // zf
  bool v31; // zf
  unsigned int v32; // ecx
  int v33; // eax
  LARGE_INTEGER v34; // rax
  LARGE_INTEGER v35; // [rsp+80h] [rbp+8h] BYREF

  *((_QWORD *)this + 286) = *a4;
  v35.QuadPart = 0LL;
  v7 = 0LL;
  QueryPerformanceCounter(&v35);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xxxxxqhqqx(
      v8,
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEAPI_EVENT,
      a2->QuadPart,
      a2[1].QuadPart,
      a2[2].QuadPart,
      a2[3].QuadPart,
      v35.QuadPart,
      a2[4].LowPart,
      WORD2(a2[4].QuadPart),
      a2[5].LowPart,
      a2[5].HighPart,
      a3);
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2->QuadPart);
  v10 = Scenario;
  if ( Scenario )
  {
    if ( *((_DWORD *)Scenario + 10)
      && (!*((_WORD *)Scenario + 41) && WORD2(a2[4].QuadPart)
       || *((_DWORD *)Scenario + 18) == 6 && *((_DWORD *)Scenario + 40) == 256 && *((_DWORD *)this + 574) == 257
       || *((_DWORD *)Scenario + 18) == 4 && *((_DWORD *)Scenario + 40) == 513 && *((_DWORD *)this + 574) == 514) )
    {
      CTelemetryTouchLatencyAnalysis::RetireScenario(this, Scenario, 0, 0);
    }
    if ( !*((_DWORD *)v10 + 10) )
    {
      *(LARGE_INTEGER *)v10 = *a2;
      *((_DWORD *)v10 + 9) = 1;
      *((_QWORD *)v10 + 6) = 0LL;
      LowPart = a2[4].LowPart;
      if ( LowPart )
      {
        *((_DWORD *)v10 + 18) = LowPart;
      }
      else
      {
        v24 = *((_QWORD *)this + 288);
        if ( v24 > a3 || v24 <= a3 - 10 )
        {
          *((_DWORD *)v10 + 18) = 0;
        }
        else
        {
          v25 = *((_DWORD *)this + 574);
          if ( (unsigned int)(v25 - 256) > 1 )
          {
            v32 = v25 - 513;
            if ( v32 <= 0xD )
            {
              v33 = 8707;
              if ( _bittest(&v33, v32) )
                *((_DWORD *)v10 + 18) = 4;
            }
          }
          else
          {
            *((_DWORD *)v10 + 18) = 6;
          }
        }
      }
      *((_DWORD *)v10 + 19) = IdentifyScenarioInteractionTypeForKbdMouse(
                                a2[6].LowPart,
                                *((_DWORD *)v10 + 18),
                                *((_DWORD *)this + 574),
                                *((_QWORD *)this + 289));
      *((_DWORD *)v10 + 20) = 0;
      *((_QWORD *)v10 + 11) = a3;
      *((_WORD *)v10 + 48) = 0;
      *(_QWORD *)((char *)v10 + 100) = 0LL;
      *(_QWORD *)((char *)v10 + 108) = 0LL;
      *(_QWORD *)((char *)v10 + 116) = 0LL;
      *(_QWORD *)((char *)v10 + 124) = 0LL;
      *(_QWORD *)((char *)v10 + 132) = 0LL;
      *((_DWORD *)v10 + 35) = 0;
      *((_WORD *)v10 + 72) = 0;
      *(_QWORD *)((char *)v10 + 148) = 0LL;
      *((_WORD *)v10 + 78) = 0;
      *((_QWORD *)v10 + 22) = 0LL;
      *((_QWORD *)v10 + 23) = 0LL;
      *((_DWORD *)v10 + 48) = a2[5].LowPart;
      *((_DWORD *)v10 + 49) = 0;
      *(_QWORD *)((char *)v10 + 164) = 0LL;
      *((_QWORD *)v10 + 7) = 0LL;
      *((_QWORD *)v10 + 8) = 0LL;
      *((_DWORD *)v10 + 40) = 0;
      v28 = Microsoft_Windows_Dwm_CoreEnableBits;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        Template_xd(v27, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT, a2->QuadPart, 1LL);
        v28 = Microsoft_Windows_Dwm_CoreEnableBits;
      }
      if ( (v28 & 0x100) != 0 )
        Template_xhhxz(
          v27,
          v26,
          a2->QuadPart,
          *((unsigned __int16 *)v10 + 16),
          *((_WORD *)v10 + 17),
          a3,
          *((_QWORD *)v10 + 1));
    }
    v11 = *((_DWORD *)v10 + 10);
    *((_QWORD *)v10 + 23) = *((_QWORD *)v10 + 22);
    *((LARGE_INTEGER *)v10 + 22) = v35;
    if ( v11 )
    {
      if ( *((_QWORD *)v10 + 8) )
        goto LABEL_18;
      v12 = *((_DWORD *)this + 508);
      if ( v12 > 3 )
      {
        if ( v12 == 4 )
        {
          if ( *((_DWORD *)v10 + 40) == 513 && *((_DWORD *)this + 574) == 514 )
            goto LABEL_49;
          v31 = ((*((_DWORD *)this + 574) - 522) & 0xFFFFFFFB) == 0;
LABEL_48:
          if ( v31 )
LABEL_49:
            *((LARGE_INTEGER *)v10 + 8) = a2[2];
LABEL_18:
          v13 = WORD2(a2[4].QuadPart);
          v14 = *((_DWORD *)v10 + 18);
          if ( *((_WORD *)v10 + 40) > v13 )
            v13 = *((_WORD *)v10 + 40);
          *((_WORD *)v10 + 40) = v13;
          *((_WORD *)v10 + 41) = WORD2(a2[4].QuadPart);
          *((_DWORD *)v10 + 49) = *((_DWORD *)v10 + 48);
          *((_DWORD *)v10 + 48) = a2[5].LowPart;
          *((_DWORD *)v10 + 19) = IdentifyScenarioInteractionTypeForKbdMouse(
                                    a2[6].LowPart,
                                    v14,
                                    *((_DWORD *)this + 574),
                                    *((_QWORD *)this + 289));
          if ( ((v15 - 4) & 0xFFFFFFFD) == 0 )
            *((_DWORD *)v10 + 40) = *((_DWORD *)this + 574);
          *((_WORD *)v10 + 84) = WORD2(a2[6].QuadPart);
          *((_DWORD *)v10 + 41) += a2[7].LowPart;
          *((_DWORD *)v10 + 10) = 1;
          v7 = (LARGE_INTEGER *)operator new(0x38uLL);
          if ( v7 )
          {
            v17 = v35;
            v18 = a2[3];
            v19 = a2[2];
            v16 = a2[1];
            HighPart = a2[5].HighPart;
            v21 = a2[5].LowPart;
            *v7 = *a2;
            v7[1] = v16;
            v7[2] = v19;
            v7[3] = v18;
            v7[4] = v17;
            v7[5].LowPart = v21;
            v7[5].HighPart = HighPart;
            v7[6].QuadPart = (LONGLONG)this;
          }
          else
          {
            v7 = 0LL;
          }
          if ( v7 )
          {
            if ( a3 >= *((_QWORD *)v10 + 11) )
            {
              ++*((_DWORD *)v10 + 9);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Template_xd)(
                  (LARGE_INTEGER)v16.QuadPart,
                  &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
                  a2->QuadPart,
                  *((unsigned int *)v10 + 9));
            }
          }
          return v7;
        }
        if ( v12 != 5 )
        {
          if ( v12 != 6 || *((_DWORD *)v10 + 40) != 256 )
            goto LABEL_18;
          v31 = *((_DWORD *)this + 574) == 257;
          goto LABEL_48;
        }
      }
      v31 = WORD2(a2[4].QuadPart) == 0;
      goto LABEL_48;
    }
    *((LARGE_INTEGER *)v10 + 6) = a2[1];
    v29 = *((_DWORD *)this + 508);
    if ( v29 > 3 )
    {
      if ( v29 == 4 )
      {
        if ( *((_DWORD *)v10 + 40) == 514 && *((_DWORD *)this + 574) == 513 )
        {
LABEL_57:
          v34 = a2[2];
LABEL_58:
          *((LARGE_INTEGER *)v10 + 7) = v34;
          goto LABEL_18;
        }
        v30 = ((*((_DWORD *)this + 574) - 522) & 0xFFFFFFFB) == 0;
LABEL_56:
        if ( !v30 )
          goto LABEL_18;
        goto LABEL_57;
      }
      if ( v29 != 5 )
      {
        if ( v29 != 6 || *((_DWORD *)v10 + 40) != 257 )
          goto LABEL_18;
        v30 = *((_DWORD *)this + 574) == 256;
        goto LABEL_56;
      }
    }
    if ( !WORD2(a2[4].QuadPart) )
      goto LABEL_18;
    v34 = a2[1];
    goto LABEL_58;
  }
  return v7;
}
