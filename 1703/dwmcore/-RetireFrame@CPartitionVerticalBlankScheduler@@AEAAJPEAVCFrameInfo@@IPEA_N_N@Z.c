/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180065DC0
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180066358 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18002897C (-UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOccluded@CHwndRenderTarget@@UEAA_NXZ @ 0x18006BF00 (-IsOccluded@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800B01C4 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?RecordGlitch@CAnimationTracking@@QEAAX_KI@Z @ 0x1800B9664 (-RecordGlitch@CAnimationTracking@@QEAAX_KI@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800C2FF8 (-RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800C47C0 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x1800C49E8 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xqxxqq @ 0x18013BEFC (Template_xqxxqq.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  int v5; // ebp
  bool *v6; // r13
  CPartitionVerticalBlankScheduler *v8; // rdi
  char v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  CHwndRenderTarget *v13; // rcx
  bool (__fastcall *v14)(CHwndRenderTarget *__hidden); // rax
  char IsOccluded; // al
  __int64 v16; // rdx
  char v17; // r13
  unsigned __int64 v18; // rdx
  int v19; // edx
  bool v20; // r14
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // r8d
  char v26; // si
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  __int64 i; // rdx
  __int64 j; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  _QWORD *v36; // rcx
  int v37; // eax
  __int64 v38; // rsi
  __int64 k; // rdi
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // r8d
  unsigned __int64 v49; // rdx
  _DWORD *v50; // r8
  _QWORD *v51; // rcx
  signed int LastError; // eax
  char v53; // [rsp+40h] [rbp-88h]
  bool *v55; // [rsp+48h] [rbp-80h]
  unsigned __int64 QuadPart; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-70h] BYREF
  int v58; // [rsp+60h] [rbp-68h] BYREF
  int v59; // [rsp+64h] [rbp-64h]
  unsigned __int64 v60; // [rsp+68h] [rbp-60h]
  __int64 v61; // [rsp+70h] [rbp-58h]
  __int64 v62; // [rsp+78h] [rbp-50h]

  v5 = 0;
  v55 = a4;
  v6 = a4;
  v8 = this;
  v9 = 1;
  if ( !*((_BYTE *)a2 + 273) )
    goto LABEL_48;
  v10 = *((_QWORD *)a2 + 35) + 1LL;
  v11 = 0LL;
  do
  {
    if ( (unsigned int)v11 >= *((_DWORD *)a2 + 164) || (unsigned int)v11 >= *(_DWORD *)(*((_QWORD *)v8 + 2685) + 656LL) )
    {
      v20 = a5;
      goto LABEL_22;
    }
    v12 = *(_QWORD *)(*((_QWORD *)v8 + 16) + 32LL);
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 96) )
    {
      v53 = 1;
      MilInstrumentationCheckHR(0x14u, (const int *)"W", 1u, -2147024809, 0x534u);
      MilInstrumentationCheckHR(0x14u, (const int *)"W", 1u, -2147024809, 0xDDBu);
    }
    else
    {
      v13 = *(CHwndRenderTarget **)(*(_QWORD *)(v12 + 24) + 8 * v11);
      v14 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v13 + 216LL);
      if ( v14 == CHwndRenderTarget::IsOccluded )
        IsOccluded = CHwndRenderTarget::IsOccluded(v13);
      else
        IsOccluded = ((__int64 (__fastcall *)(CHwndRenderTarget *, bool (__fastcall *)(CHwndRenderTarget *__hidden)))v14)(
                       v13,
                       CHwndRenderTarget::IsOccluded);
      v53 = IsOccluded;
    }
    if ( !*((_BYTE *)a2 + v11 + 496) )
    {
      v16 = *((_QWORD *)v8 + 2685);
      v17 = *(_QWORD *)(v16 + 256) - *((_QWORD *)a2 + 33) > 0x989680uLL;
      LOBYTE(this) = v17 | (*((_DWORD *)a2 + v11 + 4) <= *(_DWORD *)(v16 + 32LL * (unsigned int)v11 + 664));
      *((_BYTE *)a2 + v11 + 496) = (_BYTE)this;
      if ( (_BYTE)this )
      {
        this = (CPartitionVerticalBlankScheduler *)(32 * (v11 + 21));
        v18 = *(_QWORD *)((char *)this + *((_QWORD *)v8 + 2685));
        if ( v18 <= *((_QWORD *)a2 + 35) + 1LL )
          v18 = *((_QWORD *)a2 + 35) + 1LL;
        *((_QWORD *)a2 + v11 + 38) = v18;
        v19 = *(_DWORD *)(32LL * (unsigned int)v11 + *((_QWORD *)v8 + 2685) + 668);
        *((_DWORD *)a2 + v11 + 108) = v19;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xqxxqq(
            *((_DWORD *)v8 + 6365) != 0,
            v19,
            *(_QWORD *)a2,
            v11,
            v19,
            *((_QWORD *)a2 + v11 + 38),
            v17,
            *((_DWORD *)v8 + 6365) != 0);
      }
      if ( !v53 || v17 )
      {
        v9 &= *((_BYTE *)a2 + v11 + 496);
        if ( *((_QWORD *)a2 + v11 + 38) > v10 )
          v10 = *((_QWORD *)a2 + v11 + 38);
      }
    }
    v11 = (unsigned int)(v11 + 1);
  }
  while ( v9 );
  v20 = a5;
  if ( !a5 )
    goto LABEL_47;
LABEL_22:
  *((_QWORD *)a2 + 37) = v10;
  *((_BYTE *)a2 + 288) = 1;
  if ( (*((_DWORD *)v8 + 6364))-- == 1 )
  {
    if ( *((_DWORD *)v8 + 6365) )
    {
      *((_DWORD *)v8 + 6365) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_EXIT_PARALLEL_MODE);
    }
  }
  if ( *(_QWORD *)a2 )
  {
    v22 = *((unsigned int *)v8 + 5369);
    v23 = 0LL;
    if ( (_DWORD)v22 != -1 )
      v23 = (__int64)v8 + 1328 * v22 + 216;
    v24 = *((_QWORD *)v8 + 2685);
    v57 = *((_QWORD *)v8 + 20);
    QuadPart = g_qpcFrequency.QuadPart;
    if ( *((_BYTE *)a2 + 648) && *(_BYTE *)(v24 + 648) )
    {
      v25 = *((_DWORD *)a2 + 108);
      v26 = 0;
      v27 = *((_DWORD *)a2 + 41);
      if ( v25 > v27 )
      {
        if ( v23 )
        {
          v46 = *(_DWORD *)(v23 + 432);
          if ( v46 )
          {
            v47 = v46 + 1;
            if ( v27 <= v47 )
              v27 = v47;
            if ( v27 >= v25 )
              v27 = *((_DWORD *)a2 + 108);
          }
        }
        v26 = 1;
        v5 = v25 - v27;
      }
      v28 = *(_DWORD *)(v24 + 656);
      v29 = 1;
      if ( v28 > 1 )
      {
        v50 = (_DWORD *)((char *)a2 + 168);
        do
        {
          if ( v29 >= 0x10 )
            break;
          if ( v50[67] > *v50 )
            v26 = 1;
          ++v29;
          ++v50;
        }
        while ( v29 < v28 );
      }
      if ( v26 )
      {
        CScheduleStatistics::TraceGlitch(v28, a2, &QuadPart, &v57);
        ++*((_QWORD *)v8 + 3183);
        CAnimationTracking::RecordGlitch((CPartitionVerticalBlankScheduler *)((char *)v8 + 21832), *(_QWORD *)a2, v5);
        CTelemetryTouchLatencyAnalysis::RecordGlitch(
          (CPartitionVerticalBlankScheduler *)((char *)v8 + 22408),
          *(_QWORD *)a2,
          v48);
      }
    }
    a4 = *(bool **)a2;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v8 + 5464); i = (unsigned int)(i + 1) )
    {
      v41 = *(_QWORD *)(*((_QWORD *)v8 + 2729) + 8 * i);
      v42 = *(_QWORD *)(v41 + 56);
      if ( v42 && (unsigned __int64)a4 >= v42 )
      {
        ++*(_DWORD *)(v41 + 72);
        v43 = *(_QWORD *)(v41 + 88);
        if ( v43 )
        {
          v44 = v10 - v43;
          *(_QWORD *)(v41 + 80) += v10 - v43;
          if ( *(_QWORD *)(v41 + 96) > v10 - v43 )
            v44 = *(_QWORD *)(v41 + 96);
          *(_QWORD *)(v41 + 96) = v44;
        }
        else
        {
          *(_QWORD *)(v41 + 104) = v10;
        }
        *(_QWORD *)(v41 + 88) = v10;
      }
    }
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 312); j = (unsigned int)(j + 1) )
    CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::UpdateScenarioLatency(
      *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)a2 + 153) + 8 * j),
      *(_QWORD *)((char *)v8 + 21516),
      *((_QWORD *)a2 + 35),
      *((_QWORD *)a2 + 38),
      *(_QWORD *)a2);
  LOBYTE(v58) = *((_DWORD *)a2 + 164) == 1 && !*((_BYTE *)v8 + 25472) && !*((_BYTE *)v8 + 25473);
  v32 = *(_QWORD *)a2;
  v33 = 0LL;
  v34 = *((_QWORD *)v8 + 18);
  v60 = *(_QWORD *)a2;
  v61 = v34;
  while ( (unsigned int)v33 < *((_DWORD *)v8 + 5464) )
  {
    v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2729) + 8 * v33) + 64LL);
    if ( v45 && v32 >= v45 )
    {
      CAnimationTracking::StopAnalyzingAnimationScenario(
        (CPartitionVerticalBlankScheduler *)((char *)v8 + 21832),
        v33,
        (const struct CAnimationTracking::TelFrameInfo *)&v58);
      v32 = v60;
    }
    else
    {
      v33 = (unsigned int)(v33 + 1);
    }
  }
  v5 = 0;
  if ( v20 )
  {
    v49 = *((_QWORD *)a2 + 1);
    if ( v49 )
      CKernelTransport::DiscardFrame(*((CKernelTransport **)v8 + 13), v49);
  }
  else
  {
    v58 = *((_DWORD *)a2 + 4);
    v59 = *((_DWORD *)a2 + 108);
    LODWORD(v60) = v59;
    v61 = *((_QWORD *)a2 + 38);
    v35 = *((_QWORD *)a2 + 1);
    v62 = 0LL;
    if ( v35 )
    {
      v36 = (_QWORD *)*((_QWORD *)v8 + 13);
      QuadPart = v35;
      v37 = NtDCompositionRetireFrame(*v36, &QuadPart, &v58, a4);
      if ( v37 < 0 )
      {
        v5 = v37 | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37 | 0x10000000, 0x9Cu);
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x7C6u);
        return (unsigned int)v5;
      }
    }
    v38 = 0LL;
    if ( *((_DWORD *)a2 + 304) )
    {
      while ( 1 )
      {
        SetLastError(0);
        v51 = *(_QWORD **)(*((_QWORD *)a2 + 149) + 8 * v38);
        if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v51, v51 + 1) )
          break;
        v38 = (unsigned int)(v38 + 1);
        if ( (unsigned int)v38 >= *((_DWORD *)a2 + 304) )
          goto LABEL_46;
      }
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x6EEu);
    }
  }
LABEL_46:
  *((_DWORD *)v8 + 5369) = a3;
LABEL_47:
  v6 = v55;
  if ( v9 || v20 )
  {
LABEL_48:
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)a2 + 320); k = (unsigned int)(k + 1) )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)a2 + 157) + 8 * k));
    *((_DWORD *)a2 + 320) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)a2 + 1256, 8LL);
  }
  *v6 = v9;
  return (unsigned int)v5;
}
