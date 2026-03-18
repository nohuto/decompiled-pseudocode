/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180013C20 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180047BA0 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18005A9B0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005B09C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B148 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005E048 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18005F7D8 (-GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UN.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x1800BC8A0 (-CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18014BE70 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     McTemplateU0qNR0 @ 0x1801513F8 (McTemplateU0qNR0.c)
 *     McTemplateU0xxf @ 0x180151468 (McTemplateU0xxf.c)
 *     McTemplateU0qff @ 0x1801514E4 (McTemplateU0qff.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  char v1; // al
  CPartitionVerticalBlankScheduler *v2; // rbx
  char *v3; // rdi
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  int PresentStatistics; // eax
  int v13; // r9d
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // r14d
  LONGLONG v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // r15d
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // ecx
  __int128 v27; // xmm1
  int v28; // edx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r12
  unsigned __int64 *v32; // rsi
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rdi
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned int v45; // edi
  signed int v46; // edx
  int v47; // r8d
  unsigned int v48; // ecx
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  _QWORD *v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rdi
  char v55; // al
  int v57; // r9d
  unsigned int v58; // edx
  __int64 v59; // r8
  __int64 v60; // rax
  int v61; // eax
  int v62; // edx
  __int64 v63; // r8
  int v64; // edi
  unsigned int v65; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v66; // rcx
  __m128d v67; // xmm0
  int v68; // edx
  char v69; // al
  unsigned int m; // esi
  __int64 v71; // rcx
  __int128 v72; // xmm1
  __m128d v73; // xmm1
  unsigned __int64 v74; // r15
  ULONG_PTR v75; // rax
  unsigned __int64 v76; // r15
  int v77; // r8d
  __int64 v78; // r9
  unsigned int v79; // eax
  unsigned __int64 v80; // rtt
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rtt
  bool v83[4]; // [rsp+110h] [rbp-198h] BYREF
  unsigned int v84; // [rsp+114h] [rbp-194h] BYREF
  __int64 v85; // [rsp+118h] [rbp-190h]
  _QWORD *v86; // [rsp+120h] [rbp-188h]
  unsigned __int64 v87; // [rsp+128h] [rbp-180h]
  CPartitionVerticalBlankScheduler *v88; // [rsp+130h] [rbp-178h]
  __int128 v89; // [rsp+148h] [rbp-160h]
  unsigned __int64 v90; // [rsp+158h] [rbp-150h]
  unsigned __int64 v91; // [rsp+160h] [rbp-148h]
  unsigned __int64 v92; // [rsp+168h] [rbp-140h]
  __int128 v93; // [rsp+180h] [rbp-128h]
  __int128 v94; // [rsp+190h] [rbp-118h]
  __int128 v95; // [rsp+1B0h] [rbp-F8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+1D0h] [rbp-D8h] BYREF

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  v2 = this;
  v88 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( !*((_BYTE *)v2 + 26180) || !*((_BYTE *)v2 + 26181) )
    goto LABEL_4;
  if ( (v1 & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Start);
  v61 = CPartitionVerticalBlankScheduler::RetireFrames(v2, 1);
  v84 = v61;
  v64 = v61;
  if ( v61 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0xA25u);
  }
  else
  {
    CCrossThreadComposition::Reset(*((CCrossThreadComposition **)v2 + 9), v62, v63);
    CPartitionVerticalBlankScheduler::Reinitialize(v2);
    *((_BYTE *)v2 + 26182) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Stop);
  }
  if ( v64 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x4B2u);
    v46 = v64;
  }
  else
  {
LABEL_4:
    v3 = (char *)v2 + 1608 * *((unsigned int *)v2 + 6456);
    memset_0(v3 + 96, 0, 0x438uLL);
    for ( i = 0; i < *((_DWORD *)v3 + 300); ++i )
      operator delete(*(void **)(*((_QWORD *)v3 + 147) + 8LL * i));
    *((_DWORD *)v3 + 300) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 1176, 8LL);
    for ( j = 0; j < *((_DWORD *)v3 + 308); ++j )
    {
      v66 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v3 + 151) + 8LL * j);
      if ( v66 )
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v66);
    }
    *((_DWORD *)v3 + 308) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 1208, 8LL);
    for ( k = 0; k < *((_DWORD *)v3 + 316); ++k )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v3 + 155) + 8LL * k));
    *((_DWORD *)v3 + 316) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 1240, 8LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
    v7 = 4LL;
    v8 = *((_QWORD *)v2 + 3230) + 472LL;
    v9 = *((_QWORD *)v2 + 3231) + 472LL;
    do
    {
      v8 += 128LL;
      v10 = *(_OWORD *)v9;
      v9 += 128LL;
      *(_OWORD *)(v8 - 128) = v10;
      *(_OWORD *)(v8 - 112) = *(_OWORD *)(v9 - 112);
      *(_OWORD *)(v8 - 96) = *(_OWORD *)(v9 - 96);
      *(_OWORD *)(v8 - 80) = *(_OWORD *)(v9 - 80);
      *(_OWORD *)(v8 - 64) = *(_OWORD *)(v9 - 64);
      *(_OWORD *)(v8 - 48) = *(_OWORD *)(v9 - 48);
      *(_OWORD *)(v8 - 32) = *(_OWORD *)(v9 - 32);
      *(_OWORD *)(v8 - 16) = *(_OWORD *)(v9 - 16);
      --v7;
    }
    while ( v7 );
    v11 = *(_OWORD *)v9;
    v84 = 16;
    v83[0] = 0;
    *(_OWORD *)v8 = v11;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + 64);
    PresentStatistics = CRenderTargetManager::GetPresentStatistics(
                          *(CRenderTargetManager **)(*((_QWORD *)v2 + 9) + 72LL),
                          &v84,
                          v83,
                          (struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)v2 + 3230) + 480LL),
                          (struct _UNSIGNED_RATIO *)&pExceptionRecord);
    v14 = PresentStatistics;
    if ( PresentStatistics < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802767B0, 2u, PresentStatistics, 0xC6Au);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276788, 2u, v14, 0x33Cu);
    }
    *(_DWORD *)(*((_QWORD *)v2 + 3230) + 472LL) = v84;
    if ( v14 < 0 || v83[0] || (v15 = *((_QWORD *)v2 + 3230), !*(_DWORD *)(v15 + 472)) )
    {
      *(_BYTE *)(*((_QWORD *)v2 + 3230) + 1060LL) = 0;
    }
    else
    {
      *(_BYTE *)(v15 + 1060) = 1;
      v16 = 0;
      v17 = *((_QWORD *)v2 + 3230);
      *(_DWORD *)(v17 + 96) = *(_DWORD *)(v17 + 472);
      v18 = *((_QWORD *)v2 + 3230);
      v19 = *(_DWORD *)(v18 + 96);
      v20 = v18 + 1208;
      if ( v19 )
      {
        v21 = 0LL;
        do
        {
          v22 = *(&pExceptionRecord.ExceptionCode + 2 * v21);
          v17 = g_qpcFrequency.QuadPart * *(&pExceptionRecord.ExceptionFlags + 2 * v21);
          if ( v22 == 60020 )
            v23 = v17 / 60020;
          else
            v23 = v17 / v22;
          if ( v23 != *(_QWORD *)(v20 + 8 * v21) )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              v67 = 0LL;
              v67.m128d_f64[0] = (double)(int)v23;
              if ( v23 < 0 )
                v67.m128d_f64[0] = v67.m128d_f64[0] + 1.844674407370955e19;
              v67.m128d_f64[0] = v67.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
              McTemplateU0qff(
                v17,
                (unsigned int)&EVTDESC_SCHEDULE_NEW_NOMINAL_REFRESH_PERIOD,
                v16,
                v13,
                _mm_cvtpd_ps(v67).m128_i8[0]);
            }
            v60 = *((_QWORD *)&pExceptionRecord.ExceptionCode + v21);
            v17 = (LONGLONG)(&pExceptionRecord.ExceptionFlags + 2 * v21);
            *(_QWORD *)(v20 + 8 * v21) = v23;
            *(_QWORD *)(v17 + v20 - (_QWORD)&pExceptionRecord.ExceptionFlags + 128) = v60;
            *(_BYTE *)(v21 + v20 + 384) = 1;
          }
          ++v16;
          ++v21;
        }
        while ( v16 < v19 );
        v2 = v88;
        v18 = *((_QWORD *)v88 + 3230);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qNR0(
          v17,
          (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
          *(_DWORD *)(v18 + 472),
          *(_DWORD *)(v18 + 472) << 9,
          v18 + 480);
        v69 = Microsoft_Windows_Dwm_CoreEnableBits;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          for ( m = 0; m < *(_DWORD *)(v18 + 472); ++m )
          {
            v71 = 32 * (m + 15LL);
            v72 = *(_OWORD *)(v71 + v18 + 16);
            v95 = *(_OWORD *)(v71 + v18);
            v89 = v72;
            v93 = v72;
            v94 = v95;
            if ( (v69 & 2) != 0 )
            {
              v73 = 0LL;
              v73.m128d_f64[0] = (double)(DWORD2(v93) - DWORD2(v94));
              if ( (__int64)(*((_QWORD *)&v93 + 1) - *((_QWORD *)&v94 + 1)) < 0 )
                v73.m128d_f64[0] = v73.m128d_f64[0] + 1.844674407370955e19;
              v73.m128d_f64[0] = v73.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
              McTemplateU0xxf(DWORD1(v95), v68, m, v89 - DWORD1(v95), _mm_cvtpd_ps(v73).m128_i8[0]);
              v69 = Microsoft_Windows_Dwm_CoreEnableBits;
            }
          }
        }
      }
      v24 = *((_QWORD *)v2 + 3231);
      if ( *(_BYTE *)(v24 + 1060) && !*((_BYTE *)v2 + 26180) )
        CRateInfo::CalculateEffectiveRefreshRates(
          (CRateInfo *)(*((_QWORD *)v2 + 3230) + 1208LL),
          0x10u,
          (const struct DXGI_FRAME_STATISTICS_DWM *)(v24 + 480),
          (const struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)v2 + 3230) + 480LL));
      v25 = *((_QWORD *)v2 + 3230);
      v26 = *((_DWORD *)v2 + 6552);
      v89 = *(_OWORD *)(v25 + 496);
      if ( v26 )
      {
        v57 = v89;
        v58 = 0;
        do
        {
          v59 = *(_QWORD *)(*((_QWORD *)v2 + 3273) + 8LL * v58);
          if ( *(_QWORD *)(v59 + 56) )
          {
            if ( !*(_DWORD *)(v59 + 24) )
              *(_DWORD *)(v59 + 24) = v57;
            *(_DWORD *)(v59 + 28) = v57;
          }
          ++v58;
        }
        while ( v58 < *((_DWORD *)v2 + 6552) );
        v25 = *((_QWORD *)v2 + 3230);
      }
      v27 = *(_OWORD *)(v25 + 496);
      v28 = 0;
      v29 = (_DWORD *)((char *)v2 + 26972);
      v30 = 10LL;
      v89 = v27;
      do
      {
        if ( *(v29 - 35) )
        {
          if ( !*v29 )
            *v29 = v27;
          v29[1] = v27;
          ++v28;
        }
        v29 += 62;
        --v30;
      }
      while ( v30 );
      if ( v28 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0d(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT,
          (unsigned int)v27);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
    v31 = *((_QWORD *)v2 + 4412);
    v32 = (unsigned __int64 *)((char *)v2 + 35312);
    v33 = *((_QWORD *)v2 + 4414);
    v34 = ((_QWORD)v2 + 35312) << 32;
    v35 = v34 | ((unsigned __int64)v2 + 35312);
    if ( (v31 ^ v35) != v33 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304320;
      v74 = v33 ^ ((unsigned __int64)v32 | v34);
      pExceptionRecord.NumberParameters = 4;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v31);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v31;
      pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v74);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v74;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      v31 = *((_QWORD *)v2 + 4412);
    }
    *((_QWORD *)v2 + 4413) = v31;
    QueryPerformanceCounter((LARGE_INTEGER *)v2 + 4412);
    v36 = *((_QWORD *)v2 + 4412);
    v37 = *((_QWORD *)v2 + 4413);
    if ( v36 < v37 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304293;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v36);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v36;
      pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v37);
      v75 = (unsigned int)v37;
      v76 = v37 - v36;
      pExceptionRecord.ExceptionInformation[3] = v75;
      pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
      pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
      pExceptionRecord.NumberParameters = 8;
      pExceptionRecord.ExceptionInformation[6] = (int)((1000 * v76 / g_qpcFrequency.QuadPart) >> 32);
      pExceptionRecord.ExceptionInformation[7] = (unsigned int)(1000 * v76 / g_qpcFrequency.QuadPart);
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      v36 = *((_QWORD *)v2 + 4412);
    }
    v38 = *((_QWORD *)v2 + 3230);
    *v32 = v36 ^ v35;
    *(_QWORD *)(v38 + 312) = v36;
    v39 = *((_QWORD *)v2 + 3230);
    v40 = *(_QWORD *)(v39 + 1464);
    if ( !*(_BYTE *)(v39 + 1060) || *(_BYTE *)(v39 + 1200) )
    {
      CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(v2);
    }
    else
    {
      *(_QWORD *)(v39 + 304) = *(_QWORD *)(v39 + 504);
      *(_DWORD *)(*((_QWORD *)v2 + 3230) + 108LL) = *(_DWORD *)(*((_QWORD *)v2 + 3230) + 496LL);
    }
    v41 = *(_QWORD *)(*((_QWORD *)v2 + 3231) + 304LL);
    if ( v41 )
      v42 = (*(_QWORD *)(*((_QWORD *)v2 + 3230) + 304LL) + (v40 >> 4) - v41) / v40;
    else
      v42 = 1LL;
    *((_QWORD *)v2 + 3232) = v42;
    v43 = *((_QWORD *)v2 + 3230);
    v44 = *(_QWORD *)(v43 + 312);
    if ( *(_QWORD *)(v43 + 304) > v44
      || *(_BYTE *)(v43 + 1060) && *(_QWORD *)(v43 + 504) < *(_QWORD *)(*((_QWORD *)v2 + 3231) + 312LL) )
    {
      *(_QWORD *)(v43 + 304) = v44;
      v43 = *((_QWORD *)v2 + 3230);
    }
    v45 = -1;
    *(_QWORD *)(v43 + 16) = *((_QWORD *)v2 + 3232) + *(_QWORD *)(*((_QWORD *)v2 + 3231) + 16LL);
    v46 = 0;
    v47 = *((_DWORD *)v2 + 6459);
    v84 = 0;
    if ( v47 == -1 )
    {
      v65 = *((_DWORD *)v2 + 6458);
      if ( v65 != -1 )
      {
        v77 = ((_BYTE)v65 + 1) & 0xF;
        while ( v65 != v77 )
        {
          v78 = 1608LL * v65;
          if ( *((_BYTE *)v2 + v78 + 1154) )
            break;
          v79 = v65;
          if ( !*((_BYTE *)v2 + v78 + 1153) )
            v79 = v45;
          v65 = ((_BYTE)v65 - 1) & 0xF;
          v45 = v79;
        }
      }
    }
    else
    {
      v48 = ((_BYTE)v47 + 1) & 0xF;
      if ( v48 != v47 )
      {
        do
        {
          if ( v45 != -1 )
            break;
          v49 = 1608LL * v48;
          if ( *((_BYTE *)v2 + v49 + 1153) && !*((_BYTE *)v2 + v49 + 1154) )
            v45 = v48;
          v48 = ((_BYTE)v48 + 1) & 0xF;
        }
        while ( v48 != v47 );
        v46 = v84;
      }
    }
    if ( v45 != -1 )
    {
      while ( 1 )
      {
        v50 = CPartitionVerticalBlankScheduler::RetireFrame(
                v2,
                (CPartitionVerticalBlankScheduler *)((char *)v2 + 1608 * v45 + 96),
                v45,
                v83,
                0);
        v84 = v50;
        v46 = v50;
        if ( v50 < 0 )
          break;
        v45 = ((_BYTE)v45 + 1) & 0xF;
        if ( !v83[0] || v45 == *((_DWORD *)v2 + 6456) )
          goto LABEL_58;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x6DFu);
      v46 = v84;
    }
LABEL_58:
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x4CDu);
      v46 = v84;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v2 + 3230) + 32LL) = *(_DWORD *)(*((_QWORD *)v2 + 3231) + 32LL) + 1;
    }
  }
  v51 = *((_QWORD *)v2 + 3231);
  v52 = (_QWORD *)*((_QWORD *)v2 + 3230);
  v86 = v52;
  v53 = *(_QWORD *)(v51 + 304);
  if ( v53 )
    v54 = v52[38] - v53;
  else
    v54 = v52[183];
  v55 = Microsoft_Windows_Dwm_CoreEnableBits;
  v85 = v54;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v80 = v52[40];
    v87 = 10000000 * (v52[39] / g_qpcFrequency.QuadPart)
        + (unsigned __int64)(10000000 * (v52[39] % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart;
    v81 = v52[38];
    v90 = 10000000 * (v80 / g_qpcFrequency.QuadPart)
        + 10000000 * (v80 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v82 = v52[148];
    v91 = 10000000 * (v81 / g_qpcFrequency.QuadPart)
        + 10000000 * (v81 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v92 = 10000000 * (v82 / g_qpcFrequency.QuadPart)
        + 10000000 * (v82 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      v90 - v87,
      *((_DWORD *)v86 + 8),
      *((_DWORD *)v88 + 6456),
      *v86,
      *((_DWORD *)v86 + 8),
      v92,
      v86[148],
      *((_DWORD *)v86 + 43));
    v55 = Microsoft_Windows_Dwm_CoreEnableBits;
    v46 = v84;
  }
  if ( (v55 & 2) == 0 )
    return (unsigned int)v46;
  McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return v84;
}
