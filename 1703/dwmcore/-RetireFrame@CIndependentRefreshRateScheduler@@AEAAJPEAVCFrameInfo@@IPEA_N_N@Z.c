/*
 * XREFs of ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18
 * Callers:
 *     ?RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z @ 0x18013DF10 (-RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18002897C (-UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800B3EEC (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?RecordGlitch@CAnimationTracking@@QEAAX_KI@Z @ 0x1800B9664 (-RecordGlitch@CAnimationTracking@@QEAAX_KI@Z.c)
 *     ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800C2FF8 (-RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x1800C49E8 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?IsDisplayOccluded@CComposition@@QEAAJIPEA_N@Z @ 0x180131C2C (-IsDisplayOccluded@CComposition@@QEAAJIPEA_N@Z.c)
 *     ?RetireFrame@CKernelTransport@@QEAAJ_KPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18013399C (-RetireFrame@CKernelTransport@@QEAAJ_KPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?IncrementFrameCounts@CAnimationTracking@@QEAAX_K0@Z @ 0x180133D8C (-IncrementFrameCounts@CAnimationTracking@@QEAAX_K0@Z.c)
 *     ?RetireUnreferencedScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180133DE4 (-RetireUnreferencedScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     Template_xqxxqq @ 0x18013BEFC (Template_xqxxqq.c)
 *     ?ConfirmTokens@CIndependentRefreshRateScheduler@@AEAAJAEAV?$DynArray@PEAUConfirmPresentHistoryToken@@$0A@@@K_K@Z @ 0x18013CB30 (-ConfirmTokens@CIndependentRefreshRateScheduler@@AEAAJAEAV-$DynArray@PEAUConfirmPresentHistoryTo.c)
 *     ?TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18013E2B4 (-TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?CheckAndRecordGlitch@CScheduleStatistics@@SAJPEBVCFrameInfo@@00AEB_K1PEA_NPEAI@Z @ 0x180143F78 (-CheckAndRecordGlitch@CScheduleStatistics@@SAJPEBVCFrameInfo@@00AEB_K1PEA_NPEAI@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::RetireFrame(
        CIndependentRefreshRateScheduler *this,
        LARGE_INTEGER *a2,
        int a3,
        bool *a4,
        bool a5)
{
  unsigned int v5; // r15d
  bool *v6; // r13
  CIndependentRefreshRateScheduler *v8; // rdi
  char v9; // r12
  unsigned __int64 QuadPart; // rsi
  unsigned int v11; // r14d
  CComposition *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  char v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v21; // rax
  const struct CFrameInfo *v22; // r8
  const struct CFrameInfo *v23; // rdx
  int v24; // eax
  unsigned int v25; // r8d
  DWORD i; // esi
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  bool v32; // [rsp+40h] [rbp-41h] BYREF
  bool v33; // [rsp+41h] [rbp-40h] BYREF
  unsigned int v34[2]; // [rsp+48h] [rbp-39h] BYREF
  bool *v35; // [rsp+50h] [rbp-31h]
  int v36; // [rsp+58h] [rbp-29h]
  unsigned __int64 v37; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-19h] BYREF
  DXGI_FRAME_STATISTICS v39; // [rsp+70h] [rbp-11h] BYREF

  v5 = 0;
  v35 = a4;
  v6 = a4;
  v36 = a3;
  v8 = this;
  v9 = 1;
  v33 = 0;
  if ( !BYTE1(a2[34].LowPart) )
  {
LABEL_43:
    CFrameInfo::ReleaseResponses((CFrameInfo *)a2);
LABEL_45:
    *v6 = v9;
    return v5;
  }
  QuadPart = a2[35].QuadPart + 1;
  v11 = 0;
  do
  {
    if ( v11 >= a2[82].LowPart || v11 >= *(_DWORD *)(*((_QWORD *)v8 + 2685) + 656LL) )
      break;
    v12 = (CComposition *)*((_QWORD *)v8 + 16);
    v32 = 0;
    CComposition::IsDisplayOccluded(v12, v11, &v32);
    if ( !*((_BYTE *)&a2[62].LowPart + v11) )
    {
      v13 = *((_QWORD *)v8 + 2685);
      *(_QWORD *)v34 = *(_QWORD *)(v13 + 256) - a2[33].QuadPart;
      v14 = *(_QWORD *)v34;
      v15 = *(_QWORD *)v34 > 0x989680uLL;
      v16 = 32LL * v11;
      LOBYTE(this) = *(&a2[2].LowPart + v11) <= *(_DWORD *)(v16 + v13 + 664);
      LOBYTE(v13) = (unsigned __int8)this | (*(_QWORD *)v34 > 0x989680uLL);
      *((_BYTE *)&a2[62].LowPart + v11) = v13;
      if ( (_BYTE)v13 )
      {
        v17 = *((_QWORD *)v8 + 2685);
        v18 = a2[35].QuadPart + 1;
        this = (CIndependentRefreshRateScheduler *)(32 * (v11 + 21LL));
        if ( *(_QWORD *)((char *)this + v17) > v18 )
          v18 = *(_QWORD *)((char *)this + v17);
        a2[v11 + 38].QuadPart = v18;
        v19 = *(unsigned int *)(v16 + *((_QWORD *)v8 + 2685) + 668);
        *(&a2[54].LowPart + v11) = v19;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xqxxqq(
            *((_DWORD *)v8 + 6365) != 0,
            v19,
            a2->QuadPart,
            v11,
            v19,
            a2[v11 + 38].QuadPart,
            v15,
            *((_DWORD *)v8 + 6365) != 0);
        v14 = *(_QWORD *)v34;
      }
      if ( !v32 || v14 > 0x989680 )
      {
        v9 &= *((_BYTE *)&a2[62].LowPart + v11);
        if ( a2[v11 + 38].QuadPart > QuadPart )
          QuadPart = a2[v11 + 38].QuadPart;
      }
    }
    ++v11;
  }
  while ( v9 );
  if ( !v9 && !a5 )
  {
    v6 = v35;
    goto LABEL_45;
  }
  a2[37].QuadPart = QuadPart;
  LOBYTE(a2[36].LowPart) = 1;
  if ( (*((_DWORD *)v8 + 6364))-- == 1 )
  {
    if ( *((_DWORD *)v8 + 6365) )
    {
      *((_DWORD *)v8 + 6365) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_EXIT_PARALLEL_MODE);
    }
  }
  if ( a2->QuadPart )
  {
    v21 = *((unsigned int *)v8 + 5369);
    v22 = 0LL;
    if ( (_DWORD)v21 != -1 )
      v22 = (CIndependentRefreshRateScheduler *)((char *)v8 + 1328 * v21 + 216);
    v23 = (const struct CFrameInfo *)*((_QWORD *)v8 + 2685);
    v37 = *((_QWORD *)v8 + 20);
    v38 = g_qpcFrequency.QuadPart;
    v34[0] = 0;
    v24 = CScheduleStatistics::CheckAndRecordGlitch((const struct CFrameInfo *)a2, v23, v22, &v38, &v37, &v33, v34);
    v5 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x788u);
      return v5;
    }
    if ( v33 )
    {
      ++*((_QWORD *)v8 + 3183);
      CAnimationTracking::RecordGlitch((CIndependentRefreshRateScheduler *)((char *)v8 + 21832), a2->QuadPart, v34[0]);
      CTelemetryTouchLatencyAnalysis::RecordGlitch(
        (CIndependentRefreshRateScheduler *)((char *)v8 + 22408),
        a2->QuadPart,
        v25);
    }
    CAnimationTracking::IncrementFrameCounts(
      (CIndependentRefreshRateScheduler *)((char *)v8 + 21832),
      a2->QuadPart,
      QuadPart);
  }
  for ( i = 0; i < a2[156].LowPart; ++i )
    CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::UpdateScenarioLatency(
      *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(a2[153].QuadPart + 8LL * i),
      *(_QWORD *)((char *)v8 + 21516),
      a2[35].QuadPart,
      a2[38].QuadPart,
      a2->QuadPart);
  CIndependentRefreshRateScheduler::TelemetryFillFrameInfo(
    v8,
    (struct CAnimationTracking::TelFrameInfo *)&v39,
    (struct CFrameInfo *)a2);
  CAnimationTracking::RetireUnreferencedScenarios(
    (CIndependentRefreshRateScheduler *)((char *)v8 + 21832),
    (const struct CAnimationTracking::TelFrameInfo *)&v39);
  v29 = a2[1].QuadPart;
  if ( a5 )
  {
    if ( v29 )
      CKernelTransport::DiscardFrame(*((CKernelTransport **)v8 + 13), v29);
LABEL_41:
    v6 = v35;
    *((_DWORD *)v8 + 5369) = v36;
    if ( !v9 && !a5 )
      goto LABEL_45;
    goto LABEL_43;
  }
  v39.PresentCount = a2[2].LowPart;
  v39.PresentRefreshCount = a2[54].LowPart;
  v39.SyncRefreshCount = v39.PresentRefreshCount;
  v39.SyncQPCTime = a2[38];
  v39.SyncGPUTime.QuadPart = 0LL;
  if ( !v29
    || (v30 = CKernelTransport::RetireFrame(*((CKernelTransport **)v8 + 13), v29, &v39, v28), v5 = v30, v30 >= 0) )
  {
    CIndependentRefreshRateScheduler::ConfirmTokens(v27, (__int64)&a2[149]);
    goto LABEL_41;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x7C5u);
  return v5;
}
