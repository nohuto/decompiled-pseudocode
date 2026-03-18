/*
 * XREFs of ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800143A4 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180055630 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A314 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18005A614 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18005A6A0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A828 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18005ED9C (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA370 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4w.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800D0018 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     HintPpm @ 0x180149458 (HintPpm.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x1801509A4 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x1801CD1F8 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801CD680 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // r13
  int FrameStart; // eax
  int v4; // edi
  HANDLE CurrentThread; // rax
  __int64 v6; // rcx
  signed __int32 v7; // edi
  struct wil_details_RecordUsageResult *v8; // r9
  int updated; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  char v13; // r15
  int v14; // eax
  int v15; // r14d
  int v16; // r9d
  int v17; // r8d
  unsigned int v18; // eax
  __int64 v19; // rdx
  void *v20; // rcx
  unsigned int v22; // edx
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  BOOL v28; // eax
  CHAR v29; // cl
  HANDLE CurrentProcess; // rax
  HANDLE v31; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-A0h] BYREF
  signed __int32 v33[2]; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v34; // [rsp+6Ch] [rbp-94h]
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+78h] [rbp-88h] BYREF
  __int16 v37; // [rsp+7Ch] [rbp-84h]
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER DueTime; // [rsp+98h] [rbp-68h] BYREF
  __int128 *v41; // [rsp+A0h] [rbp-60h] BYREF
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[2]; // [rsp+150h] [rbp+50h] BYREF
  int v46; // [rsp+160h] [rbp+60h]
  int v47; // [rsp+164h] [rbp+64h]
  __int128 v48; // [rsp+168h] [rbp+68h] BYREF
  __int64 v49; // [rsp+178h] [rbp+78h]
  _BYTE v50[24]; // [rsp+180h] [rbp+80h] BYREF

  v2 = 0LL;
  CPartitionVerticalBlankScheduler::WaitForWork(this);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(this, 0);
  v4 = FrameStart;
  if ( FrameStart < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameStart, 0x21Au);
  }
  else
  {
    if ( !byte_1802D5EB4 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      dword_1802D5F48 = GetCurrentThreadId();
      byte_1802D5EB4 = 1;
    }
    CurrentThread = GetCurrentThread();
    if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
    {
      qword_1802D6108 = CycleTime;
    }
    else
    {
      qword_1802D6108 = 0LL;
      CycleTime = 0LL;
    }
    v2 = *((_QWORD *)this + 3230);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState(v6);
    LOBYTE(v34) = 3;
    v36 = 0;
    v37 = v34;
    v38 = 0uLL;
    v39 = 0LL;
    v41 = &v38;
    v33[0] = 0x10000;
    v42 = 0x10000;
    v43 = 0;
    v33[1] = 0;
    v35 = 3;
    do
    {
      v33[0] = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data;
      v7 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data;
      if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)v33, &v41) )
      {
        LODWORD(v39) = 1;
        goto LABEL_11;
      }
    }
    while ( v7 != _InterlockedCompareExchange(
                    (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
                    v33[0],
                    v7) );
    LODWORD(v39) = 0;
LABEL_11:
    v49 = v39;
    v48 = v38;
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
        wil::details::RecordFeatureUsageCallback(
          (wil::details *)0xC36614,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          (union wil_details_FeaturePropertyCache *)&v48,
          v8);
      else
        g_wil_details_recordFeatureUsage(
          0xC36614u,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          (struct wil_details_RecordUsageResult *)&v48);
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v46 = 0;
        v47 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v45[0] = 0LL;
        v45[1] = 2LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, v45);
      }
    }
    if ( !(_DWORD)v49 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xC36614u,
        (const struct FEATURE_LOGGED_TRAITS *)&v36,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v35,
        0LL,
        0,
        1uLL);
    if ( wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(1u) )
      HintPpm(0LL);
    updated = CPartitionVerticalBlankScheduler::UpdateTimes(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x221u);
    }
    else
    {
      CPartitionVerticalBlankScheduler::TryDebouncingParallelMode(this);
      v11 = CPartitionVerticalBlankScheduler::ProcessFrame(this, v10);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x226u);
      }
      else
      {
        v12 = *((_QWORD *)this + 3230);
        if ( *(_BYTE *)(v12 + 1056) || *(_BYTE *)(v12 + 1059) )
          CPartitionVerticalBlankScheduler::UpdateFrameIndices(this);
        else
          *(_DWORD *)(v12 + 1196) = *(_DWORD *)(v12 + 108);
      }
    }
  }
  if ( v4 == 142213121 )
  {
    dword_1802D6260 |= 0x200u;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( *((_DWORD *)this + 6552) )
  {
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v50, 0LL);
    CAnimationTracking::TimeoutOverdueScenarios(
      (CPartitionVerticalBlankScheduler *)((char *)this + 26184),
      (const struct CAnimationTracking::TelFrameInfo *)v50);
  }
  if ( *((_DWORD *)this + 6690) )
    CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 26760));
  if ( GetTickCount64() >= *((_QWORD *)this + 3810) )
  {
    CTelemetryTracking::SendTelemetry((CPartitionVerticalBlankScheduler *)((char *)this + 29952));
    *((_QWORD *)this + 3810) = GetTickCount64() + 3600000;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), 4LL);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x25Bu);
  if ( !v4 || v4 >= 0 && v15 < 0 )
    v4 = v15;
  if ( !v13 && (*((_DWORD *)this + 6552) || *((_DWORD *)this + 6690)) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass((__int64)this, 0x3E8u, 0x40000u);
  v16 = *((_DWORD *)this + 6459);
  v17 = -1;
  if ( v16 != -1 )
  {
    v18 = ((_BYTE)v16 + 1) & 0xF;
    if ( v18 == v16 )
      goto LABEL_52;
    while ( v17 == -1 )
    {
      v19 = 1608LL * v18;
      if ( *((_BYTE *)this + v19 + 1153) && !*((_BYTE *)this + v19 + 1154) )
        v17 = v18;
      v18 = ((_BYTE)v18 + 1) & 0xF;
      if ( v18 == v16 )
        goto LABEL_45;
    }
    goto LABEL_46;
  }
  v22 = *((_DWORD *)this + 6458);
  if ( v22 != -1 )
  {
    v23 = ((_BYTE)v22 + 1) & 0xF;
    while ( v22 != v23 )
    {
      v24 = 1608LL * v22;
      if ( *((_BYTE *)this + v24 + 1154) )
        break;
      v25 = v22;
      if ( !*((_BYTE *)this + v24 + 1153) )
        v25 = v17;
      v22 = ((_BYTE)v22 - 1) & 0xF;
      v17 = v25;
    }
LABEL_45:
    if ( v17 != -1 )
    {
LABEL_46:
      if ( *((_DWORD *)this + 7643) )
      {
        v20 = (void *)*((_QWORD *)this + 3);
        DueTime.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v20, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
        {
          while ( 1 )
          {
            v26 = IsKernelDebuggerPresent();
            strcpy(Response, "?");
            v27 = v26;
            if ( !v26 )
            {
              v28 = IsDebuggerPresent();
              v29 = Response[0];
              if ( v28 )
                v29 = 103;
              Response[0] = v29;
            }
            DbgPrintEx(
              0x65u,
              0,
              "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
              word_180252860,
              word_180252860,
              L"false",
              "Function: ",
              L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
              ", ",
              L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
              2205);
            if ( !v27 )
            {
              DbgPrintEx(
                0x65u,
                0,
                "(No kernel debugger is present.) Respond with:\n"
                "  g                    -- Go (continue)\n"
                "  eb 0x%p 'p';g  -- terminate Process\n"
                "  eb 0x%p 't';g  -- terminate Thread\n"
                " or regular debugging.\n",
                Response,
                Response);
              JUMPOUT(0x1801089B4LL);
            }
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
            switch ( Response[0] )
            {
              case 'B':
              case 'b':
                __debugbreak();
                goto LABEL_97;
              case 'G':
              case 'g':
LABEL_97:
                RaiseFailFastException(0LL, 0LL, 0);
                goto LABEL_48;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_95;
              case 'T':
              case 't':
                v31 = GetCurrentThread();
                TerminateThread(v31, 0xC0000001);
                goto LABEL_95;
              default:
LABEL_95:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
LABEL_48:
        *((_DWORD *)this + 7643) = 0;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULED_COMPOSITION_REASON, 1LL);
      _InterlockedOr(&dword_1802D5EAC, 1u);
    }
  }
LABEL_52:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
  if ( v2 )
    CTelemetryFrames::FrameEnded(*(_BYTE *)(v2 + 1057), *(_BYTE *)(v2 + 1192), *(_QWORD *)(v2 + 328));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  if ( v4 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedError(v4, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v4;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v4);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v4;
}
