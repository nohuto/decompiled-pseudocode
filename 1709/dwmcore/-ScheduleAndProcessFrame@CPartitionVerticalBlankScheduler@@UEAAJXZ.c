/*
 * XREFs of ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180003F9C (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x1800113E4 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x180011520 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800115E8 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180015000 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x1800C4A30 (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18012CD34 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18012F174 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180194044 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801944B0 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  int FrameStart; // eax
  int v3; // edi
  int updated; // eax
  CPartitionVerticalBlankScheduler *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  char v8; // r15
  int v9; // eax
  int v10; // r14d
  int v11; // r9d
  int v12; // r8d
  unsigned int v13; // eax
  __int64 v14; // rdx
  void *v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edx
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // eax
  int v22; // esi
  BOOL v23; // eax
  CHAR v24; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-F8h] BYREF
  int v28; // [rsp+64h] [rbp-F4h] BYREF
  LARGE_INTEGER DueTime; // [rsp+68h] [rbp-F0h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v31[24]; // [rsp+110h] [rbp-48h] BYREF

  CPartitionVerticalBlankScheduler::WaitForWork(this);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(this, 0);
  v3 = FrameStart;
  if ( FrameStart < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameStart, 0x222u);
    goto LABEL_9;
  }
  updated = CPartitionVerticalBlankScheduler::UpdateTimes(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x224u);
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 6194) || !*((_DWORD *)this + 6195) )
    goto LABEL_5;
  CPartitionVerticalBlankScheduler::GetActualParallelModePolicy(v5, (enum ParallelModePolicy *)&v28);
  if ( v28 == 2 )
  {
    v17 = *((unsigned int *)this + 5249);
    if ( (_DWORD)v17 != -1
      && *((_QWORD *)this + 3690) < (unsigned __int64)(*((_QWORD *)this + 163 * v17 + 51)
                                                     + g_qpcFrequency.QuadPart
                                                     * CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS
                                                     / 1000) )
    {
      *((_BYTE *)this + 29500) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0d(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULE_PARALLEL_MODE_NEEDS_TO_WAIT_FOR_NEXT_VSYNC,
          2LL);
    }
    if ( *((_BYTE *)this + 29500) )
      goto LABEL_5;
    *((_DWORD *)this + 6195) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_55;
  }
  if ( v28 != 1 )
  {
    if ( v28 == 3 )
    {
      *((_BYTE *)this + 29500) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0d(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULE_PARALLEL_MODE_NEEDS_TO_WAIT_FOR_NEXT_VSYNC,
          3LL);
    }
    goto LABEL_5;
  }
  *((_DWORD *)this + 6195) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
LABEL_55:
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PARALLEL_MODE_Stop);
LABEL_5:
  v6 = CPartitionVerticalBlankScheduler::ProcessFrame(this);
  v3 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x229u);
  }
  else
  {
    v7 = *((_QWORD *)this + 2625);
    if ( *(_BYTE *)(v7 + 256) || *(_BYTE *)(v7 + 496) )
      CPartitionVerticalBlankScheduler::UpdateFrameIndices(this);
    else
      *(_DWORD *)(v7 + 1292) = *(_DWORD *)(v7 + 100);
  }
LABEL_9:
  if ( v3 == 142213121 )
  {
    dword_18026ED20 |= 0x200u;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  if ( *((_DWORD *)this + 5344) )
  {
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v31, 0LL);
    CAnimationTracking::TimeoutOverdueScenarios(
      (CPartitionVerticalBlankScheduler *)((char *)this + 21352),
      (const struct CAnimationTracking::TelFrameInfo *)v31);
  }
  if ( *((_DWORD *)this + 5482) )
    CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 21928));
  if ( GetTickCount64() >= *((_QWORD *)this + 3088) )
  {
    CTelemetryTracking::SendTelemetry((CPartitionVerticalBlankScheduler *)((char *)this + 24176));
    *((_QWORD *)this + 3088) = GetTickCount64() + 3600000;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14), 4LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x25Eu);
  if ( !v3 || v3 >= 0 && v10 < 0 )
    v3 = v10;
  if ( !v8 && (*((_DWORD *)this + 5344) || *((_DWORD *)this + 5482)) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass((__int64)this, 0x3E8u, 0x40000u);
  v11 = *((_DWORD *)this + 5249);
  v12 = -1;
  if ( v11 != -1 )
  {
    v13 = ((_BYTE)v11 + 1) & 0xF;
    if ( v13 == v11 )
      goto LABEL_34;
    while ( v12 == -1 )
    {
      v14 = 1304LL * v13;
      if ( *((_BYTE *)this + v14 + 377) && !*((_BYTE *)this + v14 + 392) )
        v12 = v13;
      v13 = ((_BYTE)v13 + 1) & 0xF;
      if ( v13 == v11 )
        goto LABEL_31;
    }
    goto LABEL_32;
  }
  v18 = *((_DWORD *)this + 5248);
  if ( v18 != -1 )
  {
    v19 = ((_BYTE)v18 + 1) & 0xF;
    while ( v18 != v19 )
    {
      v20 = 1304LL * v18;
      if ( *((_BYTE *)this + v20 + 392) )
        break;
      if ( *((_BYTE *)this + v20 + 377) )
        v12 = v18;
      v18 = ((_BYTE)v18 - 1) & 0xF;
    }
LABEL_31:
    if ( v12 != -1 )
    {
LABEL_32:
      if ( *((_DWORD *)this + 6199) )
      {
        v16 = (void *)*((_QWORD *)this + 3);
        DueTime.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v16, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
        {
          while ( 1 )
          {
            v21 = IsKernelDebuggerPresent();
            strcpy(Response, "?");
            v22 = v21;
            if ( !v21 )
            {
              v23 = IsDebuggerPresent();
              v24 = Response[0];
              if ( v23 )
                v24 = 103;
              Response[0] = v24;
            }
            DbgPrintEx(
              0x65u,
              0,
              "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
              (const wchar_t *)&word_1801EFDD8,
              (const wchar_t *)&word_1801EFDD8,
              L"false",
              "Function: ",
              L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
              ", ",
              L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
              2290);
            if ( !v22 )
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
              JUMPOUT(0x1800CD753LL);
            }
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
            switch ( Response[0] )
            {
              case 'B':
              case 'b':
                __debugbreak();
                goto LABEL_83;
              case 'G':
              case 'g':
LABEL_83:
                RaiseFailFastException(0LL, 0LL, 0);
                goto LABEL_40;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_81;
              case 'T':
              case 't':
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_81;
              default:
LABEL_81:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
LABEL_40:
        *((_DWORD *)this + 6199) = 0;
      }
      _InterlockedOr(&dword_180272190, 1u);
    }
  }
LABEL_34:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, "O");
  }
  if ( v3 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedError(v3, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v3;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v3);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v3;
}
