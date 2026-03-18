/*
 * XREFs of ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800286B0 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800BA774 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Update@CTelemetryTracking@@QEAAXXZ @ 0x180133E3C (-Update@CTelemetryTracking@@QEAAXXZ.c)
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x180135A84 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     ?FindFirstOutstandingFrameIndex@CIndependentRefreshRateScheduler@@AEAAIXZ @ 0x18013CCA8 (-FindFirstOutstandingFrameIndex@CIndependentRefreshRateScheduler@@AEAAIXZ.c)
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18013E2B4 (-TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?UpdateFrameIndices@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E70C (-UpdateFrameIndices@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 *     ?WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013E9B4 (-WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 *     ?WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013EBD4 (-WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180185D20 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180189220 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::ScheduleAndProcessFrame(CIndependentRefreshRateScheduler *this)
{
  int v2; // esi
  int FrameStart; // eax
  int v4; // edi
  int updated; // eax
  int v6; // eax
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r14d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v17[24]; // [rsp+D0h] [rbp-28h] BYREF

  CIndependentRefreshRateScheduler::WaitForWork(this);
  v2 = *((_DWORD *)this + 5455);
  *((_DWORD *)this + 5455) = 2000;
  FrameStart = CIndependentRefreshRateScheduler::WaitForNextFrameStart(this);
  v4 = FrameStart;
  if ( FrameStart < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameStart, 0x1FDu);
  }
  else
  {
    updated = CIndependentRefreshRateScheduler::UpdateTimes(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1FFu);
    }
    else
    {
      v6 = CIndependentRefreshRateScheduler::ProcessFrame(this);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x202u);
      }
      else
      {
        v7 = *((_QWORD *)this + 2685);
        if ( *(_BYTE *)(v7 + 272) || *(_BYTE *)(v7 + 512) )
          CIndependentRefreshRateScheduler::UpdateFrameIndices(this);
        else
          *(_DWORD *)(v7 + 1316) = *(_DWORD *)(v7 + 100);
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_q(v7, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, v2);
  v8 = CD3DDeviceManager::ClearD2DCaches((CD3DDeviceManager *)&g_D3DDeviceManager, *((_DWORD *)this + 5455));
  *((_DWORD *)this + 5455) = v8 != 0 ? -1 : 2000;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v9) = -v8;
    Template_q(v9, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v8 != 0);
  }
  if ( *((_DWORD *)this + 5464) )
  {
    CIndependentRefreshRateScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v17, 0LL);
    CAnimationTracking::TimeoutOverdueScenarios(
      (CIndependentRefreshRateScheduler *)((char *)this + 21832),
      (const struct CAnimationTracking::TelFrameInfo *)v17);
  }
  if ( *((_DWORD *)this + 5602) )
    CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CIndependentRefreshRateScheduler *)((char *)this + 22408));
  CTelemetryTracking::Update((CIndependentRefreshRateScheduler *)((char *)this + 24728));
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), 4LL);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x24Au);
  if ( !v4 || v4 >= 0 && v11 < 0 )
    v4 = v11;
  if ( *((_DWORD *)this + 5464) || *((_DWORD *)this + 5602) )
  {
    v12 = 1000;
    if ( *((_DWORD *)this + 5455) < 0x3E8u )
      v12 = *((_DWORD *)this + 5455);
    *((_DWORD *)this + 5455) = v12;
  }
  if ( (unsigned int)CIndependentRefreshRateScheduler::FindFirstOutstandingFrameIndex(this) != -1 )
    SetEvent(*((HANDLE *)this + 8));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v14, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  }
  if ( v4 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedErrorWithAsimovEvent(v4, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v4;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v4);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v4;
}
