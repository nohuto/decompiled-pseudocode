/*
 * XREFs of ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4
 * Callers:
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800664C4 (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560 (-GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x180134114 (-UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INF.c)
 *     ?NeedsPresent@CFrameInfo@@QEAA_NXZ @ 0x180134324 (-NeedsPresent@CFrameInfo@@QEAA_NXZ.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x18013433C (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180134500 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 *     ?CalculateFrameTimeDelta@CIndependentRefreshRateScheduler@@AEAA_KXZ @ 0x18013C5B4 (-CalculateFrameTimeDelta@CIndependentRefreshRateScheduler@@AEAA_KXZ.c)
 *     ?ComputeFrameTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C784 (-ComputeFrameTime@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 *     ?ProcessDelayedCompositionPass@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D428 (-ProcessDelayedCompositionPass@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 *     ?Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18013D984 (-Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?TraceTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E5A8 (-TraceTime@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?TryParallelMode@CIndependentRefreshRateScheduler@@AEAA_N_N@Z @ 0x18013E630 (-TryParallelMode@CIndependentRefreshRateScheduler@@AEAA_N_N@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::ProcessFrame(CIndependentRefreshRateScheduler *this)
{
  int v1; // esi
  int v3; // ebx
  BOOL v4; // r15d
  __int64 v5; // rcx
  bool v6; // r14
  int v7; // r12d
  char v8; // r8
  struct CFrameInfo *v9; // rdx
  CIndependentRefreshRateScheduler *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _BYTE v21[32]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+68h] [rbp-8h]

  v1 = 0;
  v3 = 0;
  v4 = 0;
  v6 = CIndependentRefreshRateScheduler::TryParallelMode(this, *((_DWORD *)this + 6364) <= *((_DWORD *)this + 6365));
  v7 = *((_DWORD *)this + 6364);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(v5, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
  if ( !v6 )
    goto LABEL_15;
  CIndependentRefreshRateScheduler::ComputeFrameTime(this);
  v8 = *((_BYTE *)this + 21824);
  v9 = (struct CFrameInfo *)*((_QWORD *)this + 2685);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(this, v9, v8, (struct FRAME_TIME_INFO *)v21);
  *((_BYTE *)this + 21826) = 0;
  v11 = CIndependentRefreshRateScheduler::Render(v10, (struct FRAME_TIME_INFO *)v21);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3E5u);
  }
  else
  {
    *((_QWORD *)this + 2) = CPartitionScheduler::GetAbsoluteTime((CIndependentRefreshRateScheduler *)((char *)this + 8));
    CIndependentRefreshRateScheduler::TraceTime(this);
    *(_QWORD *)(*((_QWORD *)this + 2685) + 264LL) = *((_QWORD *)this + 2);
    v12 = v22;
    v13 = *((_QWORD *)this + 2685) + 1192LL;
    *(_QWORD *)&v22 = *(_QWORD *)v13;
    v14 = *(_DWORD *)(v13 + 20);
    *(_QWORD *)v13 = v12;
    LODWORD(v12) = HIDWORD(v23);
    HIDWORD(v23) = v14;
    v15 = *(_DWORD *)(v13 + 24);
    *(_DWORD *)(v13 + 20) = v12;
    LODWORD(v12) = v24;
    v24 = v15;
    *(_DWORD *)(v13 + 24) = v12;
    v16 = CIndependentRefreshRateScheduler::PresentFrame(
            this,
            *((struct CFrameInfo **)this + 2685),
            *((_DWORD *)this + 5366));
    v3 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3FEu);
  }
  v17 = *(void **)(*((_QWORD *)this + 14) + 152LL);
  if ( v17 )
    PulseEvent(v17);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x408u);
  }
  else
  {
    if ( CFrameInfo::NeedsPresent(*((CFrameInfo **)this + 2685)) )
      SetEvent(*((HANDLE *)this + 8));
    v18 = CIndependentRefreshRateScheduler::ProcessDelayedCompositionPass((HANDLE *)this);
    v3 = v18;
    if ( v18 >= 0 )
    {
      CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(this);
      CIndependentRefreshRateScheduler::CalculateFrameTimeDelta(this);
      CFrameInfo::Trace(*((CFrameInfo **)this + 2685), *((_DWORD *)this + 5366));
      FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v21);
LABEL_15:
      v1 = v6;
      v4 = CFrameInfo::NeedsPresent(*((CFrameInfo **)this + 2686));
      goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x412u);
  }
  FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v21);
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(v19, &EVTDESC_SCHEDULE_PROCESS_FRAME, v1, v4, v7, *((_DWORD *)this + 6365));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(v19, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  return (unsigned int)v3;
}
