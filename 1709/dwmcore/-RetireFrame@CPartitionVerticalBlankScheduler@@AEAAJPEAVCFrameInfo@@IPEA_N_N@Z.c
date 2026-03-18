/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180011CE8 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x18000345C (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x180010698 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     ?IsOccluded@CHwndRenderTarget@@UEAA_NXZ @ 0x180017500 (-IsOccluded@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800BCA28 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqxxqq @ 0x180126D40 (McTemplateU0xqxxqq.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x18012A9F4 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18012CE08 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
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
  char v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  CHwndRenderTarget *v13; // rcx
  bool (__fastcall *v14)(CHwndRenderTarget *__hidden); // rax
  char IsOccluded; // al
  __int64 v16; // rdx
  char v17; // r13
  __int64 v18; // rcx
  char v19; // al
  unsigned __int64 v20; // rdx
  int v21; // edx
  bool v22; // si
  __int64 v23; // rax
  char *v24; // r9
  unsigned int v25; // r12d
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned __int64 v31; // r9
  __int64 j; // rdx
  __int64 k; // rbp
  __int64 v34; // rbp
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rtt
  unsigned __int64 v37; // rax
  _QWORD *v38; // rcx
  int v39; // eax
  __int64 v40; // r14
  __int64 m; // rdi
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 i; // r9
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned int v53; // eax
  unsigned __int64 v54; // r8
  _WORD *v55; // rdx
  char v56; // al
  __int64 v57; // r9
  int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rdx
  _DWORD *v61; // r8
  unsigned __int16 v62; // ax
  unsigned __int64 v63; // r12
  __int64 v64; // r14
  CTelemetryTouchLatencyAnalysis *v65; // rcx
  _QWORD *v66; // rcx
  signed int LastError; // eax
  char v68; // [rsp+60h] [rbp-88h]
  unsigned __int64 QuadPart; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v72; // [rsp+78h] [rbp-70h] BYREF
  int v73; // [rsp+80h] [rbp-68h] BYREF
  int v74; // [rsp+84h] [rbp-64h]
  unsigned __int64 v75; // [rsp+88h] [rbp-60h]
  unsigned __int64 v76; // [rsp+90h] [rbp-58h]
  __int64 v77; // [rsp+98h] [rbp-50h]

  v5 = 0;
  v6 = a4;
  v9 = 1;
  if ( !*((_BYTE *)a2 + 257) )
    goto LABEL_45;
  v10 = *((_QWORD *)a2 + 33) + 1LL;
  v11 = 0LL;
  do
  {
    if ( (unsigned int)v11 >= *((_DWORD *)a2 + 160)
      || (unsigned int)v11 >= *(_DWORD *)(*((_QWORD *)this + 2625) + 640LL) )
    {
      v22 = a5;
      goto LABEL_22;
    }
    v12 = *(_QWORD *)(*((_QWORD *)this + 9) + 72LL);
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 96) )
    {
      v68 = 1;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D08, 1u, -2147024809, 0x49Au);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D08, 1u, -2147024809, 0xC9Au);
    }
    else
    {
      v13 = *(CHwndRenderTarget **)(*(_QWORD *)(v12 + 24) + 8 * v11);
      v14 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v13 + 232LL);
      if ( v14 == CHwndRenderTarget::IsOccluded )
        IsOccluded = CHwndRenderTarget::IsOccluded(v13);
      else
        IsOccluded = ((__int64 (__fastcall *)(CHwndRenderTarget *, bool (__fastcall *)(CHwndRenderTarget *__hidden)))v14)(
                       v13,
                       CHwndRenderTarget::IsOccluded);
      v68 = IsOccluded;
    }
    if ( !*((_BYTE *)a2 + v11 + 480) )
    {
      v16 = *((_QWORD *)this + 2625);
      v17 = *(_QWORD *)(v16 + 240) - *((_QWORD *)a2 + 31) > g_qpcFrequency.QuadPart;
      v18 = 32LL * (unsigned int)v11;
      v19 = v17 | (*((_DWORD *)a2 + v11 + 4) <= *(_DWORD *)(v18 + v16 + 648));
      *((_BYTE *)a2 + v11 + 480) = v19;
      if ( v19 )
      {
        v20 = *(_QWORD *)(v18 + *((_QWORD *)this + 2625) + 656);
        if ( v20 <= *((_QWORD *)a2 + 33) + 1LL )
          v20 = *((_QWORD *)a2 + 33) + 1LL;
        *((_QWORD *)a2 + v11 + 36) = v20;
        v21 = *(_DWORD *)(v18 + *((_QWORD *)this + 2625) + 652);
        *((_DWORD *)a2 + v11 + 104) = v21;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xqxxqq(
            *((_DWORD *)this + 6195) != 0,
            v21,
            *(_QWORD *)a2,
            v11,
            v21,
            *((_QWORD *)a2 + v11 + 36),
            v17,
            *((_DWORD *)this + 6195) != 0);
      }
      if ( !v68 || v17 )
      {
        v9 &= *((_BYTE *)a2 + v11 + 480);
        if ( *((_QWORD *)a2 + v11 + 36) > v10 )
          v10 = *((_QWORD *)a2 + v11 + 36);
      }
    }
    v11 = (unsigned int)(v11 + 1);
  }
  while ( v9 );
  v22 = a5;
  if ( !a5 )
    goto LABEL_44;
LABEL_22:
  *((_QWORD *)a2 + 35) = v10;
  *((_BYTE *)a2 + 272) = 1;
  --*((_DWORD *)this + 6194);
  if ( *(_QWORD *)a2 )
  {
    v23 = *((unsigned int *)this + 5249);
    v24 = 0LL;
    if ( (_DWORD)v23 != -1 )
      v24 = (char *)this + 1304 * v23 + 120;
    v25 = 0;
    v72 = *((_QWORD *)this + 11);
    QuadPart = g_qpcFrequency.QuadPart;
    if ( *((_BYTE *)a2 + 632) )
    {
      v26 = *((_QWORD *)this + 2625);
      if ( *(_BYTE *)(v26 + 632) )
      {
        v27 = *((_DWORD *)a2 + 104);
        v28 = *((_DWORD *)a2 + 41);
        if ( v27 > v28 )
        {
          if ( v24 )
          {
            v58 = *((_DWORD *)v24 + 104);
            if ( v58 )
            {
              v59 = v58 + 1;
              if ( v28 <= v59 )
                v28 = v59;
              if ( v28 >= v27 )
                v28 = *((_DWORD *)a2 + 104);
            }
          }
          LOBYTE(v5) = 1;
          v25 = v27 - v28;
        }
        v29 = *(_DWORD *)(v26 + 640);
        v30 = 1;
        if ( v29 > 1 )
        {
          v61 = (_DWORD *)((char *)a2 + 168);
          do
          {
            if ( v30 >= 0x10 )
              break;
            if ( v61[63] > *v61 )
              LOBYTE(v5) = 1;
            ++v30;
            ++v61;
          }
          while ( v30 < v29 );
        }
        if ( (_BYTE)v5 )
        {
          CScheduleStatistics::TraceGlitch(v29, a2, &QuadPart, &v72);
          ++*((_QWORD *)this + 3098);
          v49 = 0LL;
          for ( i = *(_QWORD *)a2; (unsigned int)v49 < *((_DWORD *)this + 5344); v49 = (unsigned int)(v49 + 1) )
          {
            v51 = *(_QWORD *)(*((_QWORD *)this + 2669) + 8 * v49);
            v52 = *(_QWORD *)(v51 + 56);
            if ( v52 && i > v52 )
            {
              v53 = *(_DWORD *)(v51 + 36);
              v48 = v25;
              ++*(_DWORD *)(v51 + 40);
              *(_DWORD *)(v51 + 32) += v25;
              if ( v53 > v25 )
                v48 = v53;
              *(_DWORD *)(v51 + 36) = v48;
            }
          }
          v54 = *(_QWORD *)a2;
          v55 = (_WORD *)((char *)this + 22076);
          v56 = 0;
          v57 = 10LL;
          do
          {
            if ( *((_DWORD *)v55 - 26) && v54 >= *(_QWORD *)(v55 - 26) )
            {
              v62 = v55[1];
              v48 = (unsigned __int16)v25;
              ++*v55;
              v55[2] += v25;
              if ( v62 > (unsigned __int16)v25 )
                LOWORD(v48) = v62;
              v56 = 1;
              v55[1] = v48;
            }
            v55 += 96;
            --v57;
          }
          while ( v57 );
          if ( v56 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xq(v48, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_RECORDGLITCH_EVENT, v54, v25);
        }
      }
    }
    v31 = *(_QWORD *)a2;
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 5344); j = (unsigned int)(j + 1) )
    {
      v43 = *(_QWORD *)(*((_QWORD *)this + 2669) + 8 * j);
      v44 = *(_QWORD *)(v43 + 56);
      if ( v44 && v31 >= v44 )
      {
        ++*(_DWORD *)(v43 + 72);
        v45 = *(_QWORD *)(v43 + 88);
        if ( v45 )
        {
          v46 = v10 - v45;
          *(_QWORD *)(v43 + 80) += v10 - v45;
          if ( *(_QWORD *)(v43 + 96) > v10 - v45 )
            v46 = *(_QWORD *)(v43 + 96);
          *(_QWORD *)(v43 + 96) = v46;
        }
        else
        {
          *(_QWORD *)(v43 + 104) = v10;
        }
        *(_QWORD *)(v43 + 88) = v10;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a2 + 308); k = (unsigned int)(k + 1) )
  {
    v63 = *(_QWORD *)a2;
    v64 = *(_QWORD *)(*((_QWORD *)a2 + 151) + 8 * k);
    v65 = *(CTelemetryTouchLatencyAnalysis **)(v64 + 48);
    if ( v65 )
    {
      CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        v65,
        *(_QWORD *)v64,
        *(_QWORD *)(v64 + 8),
        *(_QWORD *)(v64 + 16),
        *(_QWORD *)(v64 + 24),
        *(_QWORD *)(v64 + 32),
        *((_QWORD *)a2 + 33),
        *((_QWORD *)a2 + 36),
        *(_QWORD *)((char *)this + 21036),
        *(_DWORD *)(v64 + 40),
        *(_DWORD *)(v64 + 44),
        *(_QWORD *)a2);
      CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        *(CTelemetryTouchLatencyAnalysis **)(v64 + 48),
        *(_QWORD *)v64,
        v63);
      *(_QWORD *)(v64 + 48) = 0LL;
    }
  }
  LOBYTE(v73) = *((_DWORD *)a2 + 160) == 1 && !*((_BYTE *)this + 24792) && !*((_BYTE *)this + 24793);
  v34 = 0LL;
  v35 = *(_QWORD *)a2;
  v36 = *((_QWORD *)this + 11);
  v75 = *(_QWORD *)a2;
  v76 = 10000000 * (v36 / g_qpcFrequency.QuadPart)
      + 10000000 * (v36 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
  while ( (unsigned int)v34 < *((_DWORD *)this + 5344) )
  {
    v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2669) + 8 * v34) + 64LL);
    if ( v47 && v35 >= v47 )
    {
      CAnimationTracking::StopAnalyzingAnimationScenario(
        (CPartitionVerticalBlankScheduler *)((char *)this + 21352),
        v34,
        (const struct CAnimationTracking::TelFrameInfo *)&v73);
      v35 = v75;
    }
    else
    {
      v34 = (unsigned int)(v34 + 1);
    }
  }
  v5 = 0;
  if ( v22 )
  {
    v60 = *((_QWORD *)a2 + 1);
    if ( v60 )
      CKernelTransport::DiscardFrame(*((CKernelTransport **)this + 6), v60);
  }
  else
  {
    v73 = *((_DWORD *)a2 + 4);
    v74 = *((_DWORD *)a2 + 104);
    LODWORD(v75) = v74;
    v76 = *((_QWORD *)a2 + 36);
    v37 = *((_QWORD *)a2 + 1);
    v77 = 0LL;
    if ( v37 )
    {
      v38 = (_QWORD *)*((_QWORD *)this + 6);
      QuadPart = v37;
      v39 = NtDCompositionRetireFrame(*v38, &QuadPart, &v73);
      if ( v39 < 0 )
      {
        v5 = v39 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39 | 0x10000000, 0x9Cu);
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x805u);
        return (unsigned int)v5;
      }
    }
    v40 = 0LL;
    if ( *((_DWORD *)a2 + 300) )
    {
      while ( 1 )
      {
        SetLastError(0);
        v66 = *(_QWORD **)(*((_QWORD *)a2 + 147) + 8 * v40);
        if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v66, v66 + 1) )
          break;
        v40 = (unsigned int)(v40 + 1);
        if ( (unsigned int)v40 >= *((_DWORD *)a2 + 300) )
          goto LABEL_43;
      }
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x73Au);
    }
  }
LABEL_43:
  *((_DWORD *)this + 5249) = a3;
LABEL_44:
  v6 = a4;
  if ( v9 || v22 )
  {
LABEL_45:
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)a2 + 316); m = (unsigned int)(m + 1) )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)a2 + 155) + 8 * m));
    *((_DWORD *)a2 + 316) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)a2 + 1240, 8LL);
  }
  *v6 = v9;
  return (unsigned int)v5;
}
