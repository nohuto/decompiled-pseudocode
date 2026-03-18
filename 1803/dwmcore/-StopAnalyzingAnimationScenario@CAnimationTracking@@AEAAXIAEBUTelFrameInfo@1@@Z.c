/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800D0B18
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18005A9B0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800D0018 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800D008C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 * Callees:
 *     McTemplateU0qqqzzq @ 0x1800CF794 (McTemplateU0qqqzzq.c)
 *     McTemplateU0xxqqqzzq @ 0x1800CF8A0 (McTemplateU0xxqqqzzq.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800D0538 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800D1268 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800D1614 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800D1664 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D1A30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq @ 0x18014C9A0 (McTemplateU0xxqqxxqzqqqqqqzzqq.c)
 */

void __fastcall CAnimationTracking::StopAnalyzingAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct CAnimationTracking::TelFrameInfo *a3)
{
  const struct _GUID *v3; // rbx
  unsigned __int64 v5; // r10
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rcx
  int *v9; // r14
  unsigned int v10; // r8d
  unsigned int v11; // esi
  __int64 v12; // r8
  float v13; // xmm0_4
  float v14; // xmm1_4
  unsigned __int64 v15; // rtt
  LONGLONG v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rtt
  unsigned int v20; // r10d
  unsigned __int64 v21; // rtt
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  const WCHAR *ScenarioName; // r15
  CAnimationTracking *v25; // rcx
  unsigned int v26; // r9d
  const WCHAR *ScenarioDetails; // rax
  const wchar_t *v28; // r13
  size_t v29; // r8
  const WCHAR *v30; // rdx
  const WCHAR *v31; // rax
  const WCHAR *v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdx
  unsigned __int16 *v36; // r8
  const struct _GUID *v37; // rdx
  CAnimationTracking *v38; // rbx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // r8d
  unsigned int v43; // r11d
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // r10d
  int v47; // ecx
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // eax
  int v52; // r10d
  int v53; // eax
  int v54; // r10d
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rcx
  char v58; // al
  int v59; // r8d
  wchar_t *v60; // rcx
  unsigned __int64 v61; // r8
  wchar_t *v62; // r8
  __int64 v63; // rcx
  int v64; // r9d
  __int64 cData; // [rsp+20h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-F8h]
  unsigned int v67[2]; // [rsp+30h] [rbp-F0h]
  unsigned int v68; // [rsp+30h] [rbp-F0h]
  __int64 v69; // [rsp+48h] [rbp-D8h]
  unsigned int v70; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v71; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v72; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v73; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v74; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v75; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned int v76; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v77[2]; // [rsp+C0h] [rbp-60h]
  int v78; // [rsp+C8h] [rbp-58h] BYREF
  CAnimationTracking *v79; // [rsp+D0h] [rbp-50h]
  unsigned int v80; // [rsp+D8h] [rbp-48h] BYREF
  unsigned int v81; // [rsp+DCh] [rbp-44h]
  LPCWSTR pwsz; // [rsp+E0h] [rbp-40h]
  const struct CAnimationTracking::TelFrameInfo *v83; // [rsp+E8h] [rbp-38h]
  unsigned int v84[4]; // [rsp+F0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+100h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+0h] BYREF
  unsigned int *v87; // [rsp+130h] [rbp+10h]
  __int64 v88; // [rsp+138h] [rbp+18h]
  int *v89; // [rsp+140h] [rbp+20h]
  __int64 v90; // [rsp+148h] [rbp+28h]
  unsigned int *v91; // [rsp+150h] [rbp+30h]
  __int64 v92; // [rsp+158h] [rbp+38h]
  unsigned int *v93; // [rsp+160h] [rbp+40h]
  __int64 v94; // [rsp+168h] [rbp+48h]
  unsigned int *v95; // [rsp+170h] [rbp+50h]
  __int64 v96; // [rsp+178h] [rbp+58h]
  __int64 v97; // [rsp+180h] [rbp+60h]
  __int64 v98; // [rsp+188h] [rbp+68h]
  char *v99; // [rsp+190h] [rbp+70h]
  __int64 v100; // [rsp+198h] [rbp+78h]
  unsigned int *v101; // [rsp+1A0h] [rbp+80h]
  __int64 v102; // [rsp+1A8h] [rbp+88h]
  unsigned int *v103; // [rsp+1B0h] [rbp+90h]
  __int64 v104; // [rsp+1B8h] [rbp+98h]
  unsigned int *v105; // [rsp+1C0h] [rbp+A0h]
  __int64 v106; // [rsp+1C8h] [rbp+A8h]
  __int64 v107; // [rsp+1D0h] [rbp+B0h]
  __int64 v108; // [rsp+1D8h] [rbp+B8h]
  __int64 v109; // [rsp+1E0h] [rbp+C0h]
  __int64 v110; // [rsp+1E8h] [rbp+C8h]
  __int64 v111; // [rsp+1F0h] [rbp+D0h]
  __int64 v112; // [rsp+1F8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+200h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+210h] [rbp+F0h] BYREF
  __int64 v115; // [rsp+220h] [rbp+100h]
  __int64 v116; // [rsp+228h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+230h] [rbp+110h] BYREF
  unsigned int *v118; // [rsp+240h] [rbp+120h]
  __int64 v119; // [rsp+248h] [rbp+128h]
  wchar_t String2[8]; // [rsp+250h] [rbp+130h] BYREF
  unsigned __int16 v121[128]; // [rsp+260h] [rbp+140h] BYREF
  unsigned __int16 v122[128]; // [rsp+360h] [rbp+240h] BYREF

  v3 = 0LL;
  v79 = this;
  v83 = a3;
  LODWORD(v5) = 0;
  v81 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  v72 = 0;
  v73 = 0;
  v70 = 0;
  v75 = 0;
  v78 = 0;
  v71 = 0;
  if ( *(_BYTE *)a3 && *(_DWORD *)(v6 + 72) >= 3u && (v7 = *(_DWORD *)(v6 + 28), v7 > *(_DWORD *)(v6 + 24)) )
  {
    v8 = v7 - *(_DWORD *)(v6 + 24);
    v9 = (int *)(v6 + 32);
    v10 = *(_DWORD *)(v6 + 32);
    v74 = v8;
    if ( v10 > (unsigned int)v8 )
    {
      *v9 = v8;
      v10 = *(_DWORD *)(v6 + 32);
      LODWORD(v5) = v70;
    }
    v11 = 100 * v10 / (unsigned int)v8;
    if ( !v11 )
      v11 = v10 != 0;
    v12 = *((_QWORD *)a3 + 2);
    v13 = (float)(int)v12;
    *(_QWORD *)v84 = v12 * v8 / 0x2710uLL;
    if ( v12 < 0 )
      v13 = v13 + 1.8446744e19;
    v14 = 10000000.0 / v13;
    if ( (float)(10000000.0 / v13) >= 59.0 && v14 <= 61.0 )
      v14 = FLOAT_60_0;
    *(_QWORD *)v77 = (unsigned int)(int)v14;
    v72 = (int)v14 * (100 - v11) / 0x64;
    v15 = *(_QWORD *)(v6 + 96);
    v16 = v15 % g_qpcFrequency.QuadPart;
    v73 = 1000 * (v15 / g_qpcFrequency.QuadPart) + 1000 * (v15 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v17 = *(_QWORD *)(v6 + 152);
    if ( v17 )
    {
      if ( *(_QWORD *)(v17 + 8) )
      {
        v18 = *(_QWORD *)(v6 + 104);
        if ( v18 > *(_QWORD *)(v17 + 8) )
        {
          v19 = v18 - *(_QWORD *)(v17 + 8);
          v16 = v19 / g_qpcFrequency.QuadPart;
          v5 = (10000000 * (v19 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
              + 10000000 * (v19 / g_qpcFrequency.QuadPart))
             / 0x2710;
          v70 = v5;
        }
      }
      if ( (_DWORD)v5 )
      {
        v20 = *(_DWORD *)(v6 + 72);
        if ( v20 > 1 )
        {
          v21 = *(_QWORD *)(v6 + 80);
          v16 = v21 / g_qpcFrequency.QuadPart;
          v78 = (10000000 * (v21 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * (v21 / g_qpcFrequency.QuadPart))
              / 0x2710
              / (v20 - 1);
        }
      }
      v22 = *(_QWORD *)(v6 + 152);
      v23 = *(_QWORD *)(v22 + 16);
      if ( v23 )
      {
        v61 = *(_QWORD *)(v6 + 104);
        if ( v61 > v23 )
        {
          v16 = (v61 - v23) / g_qpcFrequency.QuadPart;
          v75 = (10000000 * ((v61 - v23) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 10000000 * v16) / 0x2710;
          v22 = *(_QWORD *)(v6 + 152);
        }
      }
      v71 = *(_DWORD *)(v22 + 24);
    }
    ScenarioName = CAnimationTracking::GetScenarioName(
                     (CAnimationTracking *)g_qpcFrequency.QuadPart,
                     (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                     v121,
                     v16);
    ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                        v25,
                        (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                        v122,
                        v26);
    v28 = word_180252860;
    pwsz = ScenarioDetails;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
    {
      v62 = word_180252860;
      if ( *(_QWORD *)(v6 + 136) )
        v62 = *(wchar_t **)(v6 + 136);
      v63 = *(_QWORD *)(v6 + 152);
      if ( v63 )
        v64 = *(_DWORD *)(v63 + 28);
      else
        LOBYTE(v64) = 0;
      McTemplateU0xxqqxxqzqqqqqqzzqq(
        v72,
        v77[0],
        *(_QWORD *)(v6 + 56),
        *((_QWORD *)a3 + 1),
        v11,
        v74,
        v77[0],
        v72,
        v73,
        (__int64)ScenarioName,
        *(_DWORD *)(v6 + 20),
        *(_DWORD *)(v6 + 36),
        v70,
        v75,
        v71,
        v64,
        (__int64)ScenarioDetails,
        (__int64)v62,
        *(_DWORD *)(v6 + 40),
        *v9);
    }
    wcscpy(String2, L"DManip");
    if ( ScenarioName )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( String2[v29] );
      if ( wcsncmp(ScenarioName, String2, v29)
        && dword_1802D3F60 > 5u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3F60, 0x200000000004uLL) )
      {
        TlgCreateWsz(&pDesc, ScenarioName);
        v88 = 4LL;
        v89 = &v78;
        v87 = &v72;
        v91 = &v73;
        v90 = 4LL;
        v93 = &v70;
        v30 = word_180252860;
        v92 = 4LL;
        v95 = &v75;
        v97 = v6 + 56;
        v99 = (char *)a3 + 8;
        v101 = &v71;
        v80 = v77[0];
        v103 = &v80;
        v105 = &v74;
        v109 = v6 + 36;
        v111 = v6 + 40;
        v31 = *(const WCHAR **)(v6 + 136);
        v94 = 4LL;
        v96 = 4LL;
        if ( v31 )
          v30 = v31;
        v98 = 8LL;
        v100 = 8LL;
        v102 = 4LL;
        v104 = 4LL;
        v106 = 4LL;
        v107 = v6 + 32;
        v108 = 4LL;
        v110 = 4LL;
        v112 = 4LL;
        TlgCreateWsz(&v113, v30);
        v32 = word_180252860;
        if ( *(_QWORD *)(v6 + 144) )
          v32 = *(const WCHAR **)(v6 + 144);
        TlgCreateWsz(&v114, v32);
        v115 = v6 + 20;
        v116 = 4LL;
        TlgCreateWsz(&v117, pwsz);
        v33 = *(_QWORD *)(v6 + 152);
        if ( v33 )
          v34 = *(_DWORD *)(v33 + 28);
        else
          v34 = 0;
        v76 = v34;
        v118 = &v76;
        v119 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3F60, &unk_1802A5800, 0LL, 0LL, 0x15u, &v85);
      }
    }
    v35 = v70;
    if ( *v9 || v70 >= 0xC8 )
    {
      v39 = *v9;
      if ( *(_DWORD *)v6 )
      {
        v40 = *(_QWORD *)(v6 + 152);
        if ( v40 )
        {
          if ( *(_WORD *)(v40 + 38) )
          {
            v41 = v40 + *(unsigned __int16 *)(v40 + 38);
            if ( v41 )
            {
              LODWORD(cData) = *(_DWORD *)(v40 + 28);
              StringCchPrintfW((unsigned __int16 *)&v85, 0x80uLL, L"%ws|%X|%ws", ScenarioName, cData, v41);
              v39 = *(_DWORD *)(v6 + 32);
              ScenarioName = (const WCHAR *)&v85;
              v35 = v70;
            }
          }
        }
      }
      v42 = v74;
      v43 = v77[0];
      if ( v39 )
      {
        v44 = 4095;
        v45 = 255;
        v46 = 255;
        if ( v74 < 0xFFF )
          v44 = v74;
        if ( v77[0] < 0xFF )
          v45 = v77[0];
        v47 = v44 | (v45 << 12);
        v48 = 255;
        if ( v72 < 0xFF )
          v48 = v72;
        v49 = v47 | (v48 << 20);
        v50 = v49 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v50 = v49;
        v51 = 4095;
        v76 = v50;
        if ( v73 < 0xFFF )
          v51 = v73;
        if ( *(_DWORD *)(v6 + 36) < 0xFFu )
          v46 = *(_DWORD *)(v6 + 36);
        v52 = v51 | (v46 << 12);
        v53 = 4095;
        if ( v71 < 0xFFF )
          v53 = v71;
        v54 = (v53 << 20) | v52;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        {
          v60 = word_180252860;
          if ( *(_QWORD *)(v6 + 136) )
            v60 = *(wchar_t **)(v6 + 136);
          LODWORD(v69) = *(_DWORD *)(v6 + 20);
          v67[0] = v54;
          LODWORD(pData) = v76;
          LODWORD(cData) = v11;
          McTemplateU0xxqqqzzq(
            (__int64)v60,
            v35,
            *(_QWORD *)(v6 + 56),
            *((_QWORD *)v83 + 1),
            cData,
            pData,
            *(_QWORD *)v67,
            ScenarioName,
            v60,
            v69);
          v35 = v70;
          v42 = v74;
          v43 = v77[0];
        }
      }
      if ( (unsigned int)v35 >= 0xC8 )
      {
        v55 = 255;
        v56 = 4095;
        if ( v42 < 0xFFF )
          v56 = v42;
        if ( v43 < 0xFF )
          v55 = v43;
        v57 = v56 | (unsigned int)(v55 << 12);
        v58 = -1;
        v59 = v57 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v59 = v57;
        if ( v75 < 0xFFF )
          v58 = v75;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        {
          if ( *(_QWORD *)(v6 + 136) )
            v28 = *(const wchar_t **)(v6 + 136);
          McTemplateU0qqqzzq(v57, v35, v35, v59, v58, ScenarioName, v28, *(_DWORD *)(v6 + 20));
          LODWORD(v35) = v70;
        }
      }
    }
    if ( *(_DWORD *)v6 )
      v36 = *(unsigned __int16 **)(v6 + 136);
    else
      v36 = 0LL;
    if ( !*(_DWORD *)v6 )
      v3 = (const struct _GUID *)(v6 + 4);
    v68 = v35;
    v37 = v3;
    v38 = v79;
    CAnimationTracking::UpdateLongtermStatistics(v79, v37, v36, v11, v77[0], v72, v68, v84[0], *(_DWORD *)(v6 + 36));
    a2 = v81;
  }
  else
  {
    v38 = v79;
  }
  CAnimationTracking::DeleteScenario(v38, a2);
}
