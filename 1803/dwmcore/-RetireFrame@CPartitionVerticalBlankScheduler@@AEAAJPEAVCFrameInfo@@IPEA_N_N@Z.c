/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18005A9B0
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005B09C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180014418 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18001470C (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     _anonymous_namespace_::FireFatFramesAlarm @ 0x18001C290 (_anonymous_namespace_--FireFatFramesAlarm.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x1800C2274 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800C3D68 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800D0B18 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqxxqq @ 0x180149050 (McTemplateU0xqxxqq.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  unsigned int v5; // r12d
  char v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  char v14; // al
  __int64 v15; // rcx
  char v16; // r8
  __int64 v17; // rax
  __int128 v18; // xmm1
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int128 v23; // xmm1
  unsigned __int64 v24; // xmm2_8
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int64 v27; // rdx
  bool v28; // r13
  __int64 v29; // rax
  char *v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // r8d
  char v33; // si
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned __int64 v37; // r9
  __int64 i; // r8
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // r10
  __int64 v42; // r14
  unsigned __int64 v43; // rdx
  _QWORD *v44; // rcx
  int v45; // eax
  __int64 v46; // rsi
  __int64 j; // rdi
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // r10
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  unsigned int v60; // eax
  char v61; // al
  char *v62; // rdx
  __int64 v63; // r8
  int v64; // eax
  unsigned int v65; // eax
  unsigned __int64 v66; // r12
  __int64 v67; // r14
  CTelemetryTouchLatencyAnalysis *v68; // rcx
  _DWORD *v69; // r8
  unsigned __int16 v70; // ax
  _QWORD *v71; // rcx
  signed int LastError; // eax
  char v73; // [rsp+70h] [rbp-71h]
  char v74; // [rsp+71h] [rbp-70h]
  unsigned __int64 v76; // [rsp+78h] [rbp-69h] BYREF
  unsigned __int64 QuadPart; // [rsp+80h] [rbp-61h] BYREF
  unsigned __int64 v78; // [rsp+88h] [rbp-59h] BYREF
  bool *v79; // [rsp+90h] [rbp-51h]
  __m128i v80; // [rsp+98h] [rbp-49h]
  __int128 v81; // [rsp+A8h] [rbp-39h]
  bool v82[8]; // [rsp+B8h] [rbp-29h] BYREF
  unsigned __int64 v83; // [rsp+C0h] [rbp-21h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-19h]
  int v85; // [rsp+D0h] [rbp-11h] BYREF
  int v86; // [rsp+D4h] [rbp-Dh]
  int v87; // [rsp+D8h] [rbp-9h]
  __int128 v88; // [rsp+E0h] [rbp-1h]

  v5 = 0;
  v79 = a4;
  v8 = 1;
  if ( !*((_BYTE *)a2 + 1057) )
    goto LABEL_50;
  v9 = *((_QWORD *)a2 + 41) + 1LL;
  v10 = 0LL;
  do
  {
    if ( (unsigned int)v10 >= *((_DWORD *)a2 + 118)
      || (unsigned int)v10 >= *(_DWORD *)(*((_QWORD *)this + 3230) + 472LL) )
    {
      v28 = a5;
      goto LABEL_26;
    }
    v73 = 0;
    v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 72LL);
    v76 = v11;
    if ( (unsigned int)v10 >= *(_DWORD *)(v11 + 96) )
    {
      v73 = 1;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276790, 1u, -2147024809, 0x469u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276790, 1u, -2147024809, 0xCBAu);
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v10);
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 48LL);
      if ( v13 == CHwndRenderTarget::IsOfType )
        v14 = CHwndRenderTarget::IsOfType(v12, 76LL);
      else
        v14 = v13(v12, 76LL);
      if ( v14 )
        v73 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v76 + 24) + 8 * v10) + 851LL);
    }
    if ( !*((_BYTE *)a2 + v10 + 1061) )
    {
      v15 = *((_QWORD *)this + 3230);
      if ( *(_QWORD *)(v15 + 312) - *((_QWORD *)a2 + 40) > g_qpcFrequency.QuadPart )
      {
        v16 = 1;
        v74 = 1;
      }
      else
      {
        v16 = 0;
        v17 = 32 * (v10 + 15);
        v74 = 0;
        v18 = *(_OWORD *)(v17 + v15 + 16);
        LODWORD(v17) = *(_DWORD *)(v17 + v15);
        v88 = v18;
        if ( *((_DWORD *)a2 + v10 + 8) > (unsigned int)v17 )
        {
          v19 = 0;
          goto LABEL_14;
        }
      }
      v19 = 1;
LABEL_14:
      *((_BYTE *)a2 + v10 + 1061) = v19;
      if ( v19 )
      {
        v20 = *((_QWORD *)this + 3230);
        v21 = 32 * (v10 + 15);
        v22 = *((_QWORD *)a2 + 41) + 1LL;
        v23 = *(_OWORD *)(v21 + v20 + 16);
        v80 = *(__m128i *)(v21 + v20);
        v24 = _mm_srli_si128(v80, 8).m128i_u64[0];
        v81 = v23;
        if ( v24 > v22 )
          v22 = v24;
        *((_QWORD *)a2 + v10 + 43) = v22;
        v25 = *((_QWORD *)this + 3230);
        v26 = *(_OWORD *)(v21 + v25 + 16);
        v27 = HIDWORD(*(_QWORD *)(v21 + v25));
        *((_DWORD *)a2 + v10 + 59) = v27;
        v88 = v26;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0xqxxqq(
            *((_DWORD *)this + 7639) != 0,
            v27,
            *(_QWORD *)a2,
            v10,
            v27,
            *((_QWORD *)a2 + v10 + 43),
            v16,
            *((_DWORD *)this + 7639) != 0);
          v16 = v74;
        }
      }
      if ( !v73 || v16 )
      {
        v8 &= *((_BYTE *)a2 + v10 + 1061);
        if ( *((_QWORD *)a2 + v10 + 43) > v9 )
          v9 = *((_QWORD *)a2 + v10 + 43);
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( v8 );
  v28 = a5;
  if ( !a5 )
    goto LABEL_49;
LABEL_26:
  *((_QWORD *)a2 + 42) = v9;
  *((_BYTE *)a2 + 1058) = 1;
  --*((_DWORD *)this + 7638);
  if ( *(_QWORD *)a2 )
  {
    v29 = *((unsigned int *)this + 6459);
    v30 = 0LL;
    if ( (_DWORD)v29 != -1 )
      v30 = (char *)this + 1608 * v29 + 96;
    v31 = *((_QWORD *)this + 3230);
    v76 = *(_QWORD *)(v31 + 1464);
    QuadPart = g_qpcFrequency.QuadPart;
    if ( !*((_BYTE *)a2 + 1060) || !*(_BYTE *)(v31 + 1060) )
      goto LABEL_34;
    v32 = *((_DWORD *)a2 + 59);
    v33 = 0;
    v34 = *((_DWORD *)a2 + 43);
    if ( v32 > v34 )
    {
      if ( v30 )
      {
        v64 = *((_DWORD *)v30 + 59);
        if ( v64 )
        {
          v65 = v64 + 1;
          if ( v34 > v65 )
            v65 = *((_DWORD *)a2 + 43);
          v34 = v65;
          if ( v65 >= v32 )
            v34 = *((_DWORD *)a2 + 59);
        }
      }
      v33 = 1;
      v5 = v32 - v34;
    }
    v35 = *(_DWORD *)(v31 + 472);
    v36 = 1;
    if ( v35 > 1 )
    {
      v69 = (_DWORD *)((char *)a2 + 176);
      do
      {
        if ( v36 >= 0x10 )
          break;
        if ( v69[16] > *v69 )
          v33 = 1;
        ++v36;
        ++v69;
      }
      while ( v36 < v35 );
    }
    if ( v33 )
    {
      CScheduleStatistics::TraceGlitch(v35, a2, &QuadPart, &v76);
      ++dword_1802D6278;
      if ( byte_1802D63C0 )
        ++dword_1802D6254;
      if ( byte_1802D63C1 )
        ++dword_1802D6250;
      if ( ++dword_1802D5EA0 > CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold )
        anonymous_namespace_::FireFatFramesAlarm();
      ++*((_QWORD *)this + 3820);
      v56 = 0LL;
      v57 = *(_QWORD *)a2;
      if ( *((_DWORD *)this + 6552) )
      {
        do
        {
          v58 = *(_QWORD *)(*((_QWORD *)this + 3273) + 8 * v56);
          v59 = *(_QWORD *)(v58 + 56);
          if ( v59 && v57 > v59 )
          {
            v60 = *(_DWORD *)(v58 + 36);
            ++*(_DWORD *)(v58 + 40);
            *(_DWORD *)(v58 + 32) += v5;
            if ( v60 <= v5 )
              v60 = v5;
            *(_DWORD *)(v58 + 36) = v60;
          }
          v56 = (unsigned int)(v56 + 1);
        }
        while ( (unsigned int)v56 < *((_DWORD *)this + 6552) );
        v57 = *(_QWORD *)a2;
      }
      v61 = 0;
      v62 = (char *)this + 26872;
      v63 = 10LL;
      do
      {
        if ( *((_DWORD *)v62 - 10) )
        {
          v55 = *(_QWORD *)v62;
          if ( v57 >= *(_QWORD *)v62 )
          {
            if ( v57 == *(_QWORD *)v62 )
            {
              v62[42] += v5;
              v62[41] = 1;
            }
            else
            {
              v70 = *((_WORD *)v62 + 48);
              v55 = (unsigned __int16)v5;
              ++*((_WORD *)v62 + 47);
              *((_WORD *)v62 + 49) += v5;
              if ( v70 > (unsigned __int16)v5 )
                LOWORD(v55) = v70;
              *((_WORD *)v62 + 48) = v55;
            }
            v61 = 1;
          }
        }
        v62 += 248;
        --v63;
      }
      while ( v63 );
      if ( v61 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xq(v55, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_RECORDGLITCH_EVENT, v57, v5);
    }
    else
    {
LABEL_34:
      dword_1802D5EA0 = 0;
    }
    v37 = *(_QWORD *)a2;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6552); i = (unsigned int)(i + 1) )
    {
      v49 = *(_QWORD *)(*((_QWORD *)this + 3273) + 8 * i);
      v50 = *(_QWORD *)(v49 + 56);
      if ( v50 && v37 >= v50 )
      {
        ++*(_DWORD *)(v49 + 72);
        v51 = *(_QWORD *)(v49 + 88);
        if ( v51 )
        {
          v52 = v9 - v51;
          v53 = *(_QWORD *)(v49 + 96);
          *(_QWORD *)(v49 + 80) += v52;
          if ( v53 <= v52 )
            v53 = v52;
          *(_QWORD *)(v49 + 96) = v53;
        }
        else
        {
          *(_QWORD *)(v49 + 104) = v9;
        }
        *(_QWORD *)(v49 + 88) = v9;
      }
    }
  }
  v39 = 0LL;
  v40 = _InterlockedExchange64(&qword_1802D5F50, 0LL);
  dword_1802D623C += v40;
  dword_1802D6240 += HIDWORD(v40);
  if ( *((_DWORD *)a2 + 284) )
  {
    do
    {
      v66 = *(_QWORD *)a2;
      v67 = *(_QWORD *)(*((_QWORD *)a2 + 139) + 8 * v39);
      v68 = *(CTelemetryTouchLatencyAnalysis **)(v67 + 56);
      if ( v68 )
      {
        CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
          v68,
          *(_QWORD *)v67,
          *(_QWORD *)(v67 + 8),
          *(_QWORD *)(v67 + 16),
          *(_QWORD *)(v67 + 24),
          *(_QWORD *)(v67 + 32),
          *((_QWORD *)a2 + 41),
          *((_QWORD *)a2 + 43),
          *(_QWORD *)((char *)this + 25876),
          *(_DWORD *)(v67 + 40),
          *(_DWORD *)(v67 + 44),
          *(_DWORD *)(v67 + 48),
          *(_QWORD *)a2);
        CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
          *(CTelemetryTouchLatencyAnalysis **)(v67 + 56),
          *(_QWORD *)v67,
          v66);
        *(_QWORD *)(v67 + 56) = 0LL;
      }
      v39 = (unsigned int)(v39 + 1);
    }
    while ( (unsigned int)v39 < *((_DWORD *)a2 + 284) );
  }
  v82[0] = *((_DWORD *)a2 + 118) == 1 && !*((_BYTE *)this + 30568) && !*((_BYTE *)this + 30569);
  v41 = *(_QWORD *)a2;
  v42 = 0LL;
  v83 = *(_QWORD *)a2;
  v84 = 10000000 * (*((_QWORD *)a2 + 183) / g_qpcFrequency.QuadPart)
      + (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 183) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart;
  while ( (unsigned int)v42 < *((_DWORD *)this + 6552) )
  {
    v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3273) + 8 * v42) + 64LL);
    if ( v54 && v41 >= v54 )
    {
      CAnimationTracking::StopAnalyzingAnimationScenario(
        (CPartitionVerticalBlankScheduler *)((char *)this + 26184),
        v42,
        (const struct CAnimationTracking::TelFrameInfo *)v82);
      v41 = v83;
    }
    else
    {
      v42 = (unsigned int)(v42 + 1);
    }
  }
  v43 = *((_QWORD *)a2 + 3);
  v5 = 0;
  if ( v28 )
  {
    if ( v43 )
      CKernelTransport::DiscardFrame(*((CKernelTransport **)this + 6), v43);
  }
  else
  {
    v85 = *((_DWORD *)a2 + 8);
    v86 = *((_DWORD *)a2 + 59);
    v87 = v86;
    v88 = *((unsigned __int64 *)a2 + 43);
    if ( v43 )
    {
      v44 = (_QWORD *)*((_QWORD *)this + 6);
      v78 = v43;
      v45 = NtDCompositionRetireFrame(*v44, &v78, &v85);
      if ( v45 < 0 )
      {
        v5 = v45 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45 | 0x10000000, 0x9Cu);
      }
      if ( (v5 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x7AFu);
        return v5;
      }
    }
    v46 = 0LL;
    if ( *((_DWORD *)a2 + 276) )
    {
      while ( 1 )
      {
        SetLastError(0);
        v71 = *(_QWORD **)(*((_QWORD *)a2 + 135) + 8 * v46);
        if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v71, v71 + 1) )
          break;
        v46 = (unsigned int)(v46 + 1);
        if ( (unsigned int)v46 >= *((_DWORD *)a2 + 276) )
          goto LABEL_48;
      }
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x1B3u);
    }
  }
LABEL_48:
  *((_DWORD *)this + 6459) = a3;
LABEL_49:
  if ( v8 || v28 )
  {
LABEL_50:
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 292); j = (unsigned int)(j + 1) )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)a2 + 143) + 8 * j));
    *((_DWORD *)a2 + 292) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)a2 + 1144, 8LL);
  }
  *v79 = v8;
  return v5;
}
