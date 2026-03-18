/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x18000345C
 * Callers:
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180003F9C (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800041C0 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001EA4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180002E7C (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180003B10 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180003E70 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180003EC0 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McTemplateU0qqqzzq @ 0x18012E6C4 (McTemplateU0qqqzzq.c)
 *     McTemplateU0xxqqqzzq @ 0x18012E7D4 (McTemplateU0xxqqqzzq.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq @ 0x18012E904 (McTemplateU0xxqqxxqzqqqqqqzzqq.c)
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
  _DWORD *v9; // r12
  unsigned int v10; // esi
  __int64 v11; // r8
  float v12; // xmm0_4
  float v13; // xmm1_4
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // rtt
  LONGLONG v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rtt
  unsigned int v20; // r10d
  unsigned __int64 v21; // rtt
  __int64 v22; // rax
  __int64 v23; // rax
  const WCHAR *ScenarioName; // r14
  CAnimationTracking *v25; // rcx
  unsigned int v26; // r9d
  const WCHAR *ScenarioDetails; // rax
  __int16 *v28; // r13
  size_t v29; // r8
  unsigned int v30; // edx
  const unsigned __int16 *v31; // r8
  const struct _GUID *v32; // rdx
  CAnimationTracking *v33; // rbx
  const WCHAR *v34; // rdx
  const WCHAR *v35; // rax
  const WCHAR *v36; // rdx
  const GUID *v37; // r8
  const GUID *v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // r9d
  unsigned int v43; // r11d
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // ecx
  unsigned int v47; // eax
  int v48; // eax
  unsigned int v49; // ecx
  char v50; // al
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  char v54; // al
  unsigned int v55; // r9d
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rtt
  __int16 *v58; // r8
  __int64 v59; // rcx
  int v60; // r9d
  __int16 *v61; // rcx
  __int64 cData; // [rsp+20h] [rbp-100h]
  unsigned int v63; // [rsp+30h] [rbp-F0h]
  unsigned int v64; // [rsp+A0h] [rbp-80h] BYREF
  int v65; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v66; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v69; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned int v70; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v71[2]; // [rsp+C0h] [rbp-60h]
  int v72; // [rsp+C8h] [rbp-58h] BYREF
  int v73; // [rsp+CCh] [rbp-54h] BYREF
  CAnimationTracking *v74; // [rsp+D0h] [rbp-50h]
  unsigned int v75; // [rsp+D8h] [rbp-48h]
  LPCWSTR pwsz; // [rsp+E0h] [rbp-40h]
  const struct CAnimationTracking::TelFrameInfo *v77; // [rsp+E8h] [rbp-38h]
  unsigned int v78[4]; // [rsp+F0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+0h] BYREF
  unsigned int *v81; // [rsp+130h] [rbp+10h]
  __int64 v82; // [rsp+138h] [rbp+18h]
  int *v83; // [rsp+140h] [rbp+20h]
  __int64 v84; // [rsp+148h] [rbp+28h]
  unsigned int *v85; // [rsp+150h] [rbp+30h]
  __int64 v86; // [rsp+158h] [rbp+38h]
  unsigned int *v87; // [rsp+160h] [rbp+40h]
  __int64 v88; // [rsp+168h] [rbp+48h]
  unsigned int *v89; // [rsp+170h] [rbp+50h]
  __int64 v90; // [rsp+178h] [rbp+58h]
  __int64 v91; // [rsp+180h] [rbp+60h]
  __int64 v92; // [rsp+188h] [rbp+68h]
  char *v93; // [rsp+190h] [rbp+70h]
  __int64 v94; // [rsp+198h] [rbp+78h]
  int *v95; // [rsp+1A0h] [rbp+80h]
  __int64 v96; // [rsp+1A8h] [rbp+88h]
  unsigned int *v97; // [rsp+1B0h] [rbp+90h]
  __int64 v98; // [rsp+1B8h] [rbp+98h]
  unsigned int *v99; // [rsp+1C0h] [rbp+A0h]
  __int64 v100; // [rsp+1C8h] [rbp+A8h]
  __int64 v101; // [rsp+1D0h] [rbp+B0h]
  __int64 v102; // [rsp+1D8h] [rbp+B8h]
  __int64 v103; // [rsp+1E0h] [rbp+C0h]
  __int64 v104; // [rsp+1E8h] [rbp+C8h]
  __int64 v105; // [rsp+1F0h] [rbp+D0h]
  __int64 v106; // [rsp+1F8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+200h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+210h] [rbp+F0h] BYREF
  __int64 v109; // [rsp+220h] [rbp+100h]
  __int64 v110; // [rsp+228h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v111; // [rsp+230h] [rbp+110h] BYREF
  int *v112; // [rsp+240h] [rbp+120h]
  __int64 v113; // [rsp+248h] [rbp+128h]
  wchar_t String2[8]; // [rsp+250h] [rbp+130h] BYREF
  unsigned __int16 v115[128]; // [rsp+260h] [rbp+140h] BYREF
  unsigned __int16 v116[128]; // [rsp+360h] [rbp+240h] BYREF

  v3 = 0LL;
  v74 = this;
  v77 = a3;
  LODWORD(v5) = 0;
  v75 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  v66 = 0;
  v67 = 0;
  v64 = 0;
  v69 = 0;
  v72 = 0;
  v65 = 0;
  if ( *(_BYTE *)a3 && *(_DWORD *)(v6 + 72) >= 3u && (v7 = *(_DWORD *)(v6 + 28), v7 > *(_DWORD *)(v6 + 24)) )
  {
    v8 = v7 - *(_DWORD *)(v6 + 24);
    v9 = (_DWORD *)(v6 + 32);
    v68 = v8;
    if ( *(_DWORD *)(v6 + 32) > (unsigned int)v8 )
    {
      *v9 = v8;
      LODWORD(v5) = v64;
    }
    v10 = 100 * *v9 / (unsigned int)v8;
    if ( !v10 )
      v10 = *v9 != 0;
    v11 = *((_QWORD *)a3 + 2);
    v12 = (float)(int)v11;
    *(_QWORD *)v78 = v11 * v8 / 0x2710uLL;
    if ( v11 < 0 )
      v12 = v12 + 1.8446744e19;
    v13 = 10000000.0 / v12;
    if ( (float)(10000000.0 / v12) >= 59.0 && v13 <= 61.0 )
      v13 = FLOAT_60_0;
    *(_QWORD *)v71 = (unsigned int)(int)v13;
    v14 = g_qpcFrequency;
    v66 = (int)v13 * (100 - v10) / 0x64;
    v15 = *(_QWORD *)(v6 + 96);
    v16 = v15 % g_qpcFrequency.QuadPart;
    v67 = 1000 * (v15 / g_qpcFrequency.QuadPart) + 1000 * (v15 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
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
          v64 = v5;
        }
      }
      if ( (_DWORD)v5 )
      {
        v20 = *(_DWORD *)(v6 + 72);
        if ( v20 > 1 )
        {
          v21 = *(_QWORD *)(v6 + 80);
          v16 = v21 / g_qpcFrequency.QuadPart;
          v72 = (10000000 * (v21 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * (v21 / g_qpcFrequency.QuadPart))
              / 0x2710
              / (v20 - 1);
        }
      }
      v22 = *(_QWORD *)(v6 + 152);
      if ( *(_QWORD *)(v22 + 16) )
      {
        v56 = *(_QWORD *)(v6 + 104);
        if ( v56 > *(_QWORD *)(v22 + 16) )
        {
          v57 = v56 - *(_QWORD *)(v22 + 16);
          v16 = v57 / g_qpcFrequency.QuadPart;
          v69 = (10000000 * (v57 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * (v57 / g_qpcFrequency.QuadPart))
              / 0x2710;
        }
      }
      v23 = *(_QWORD *)(v6 + 152);
      v14.QuadPart = *(unsigned int *)(v23 + 24);
      v65 = *(_DWORD *)(v23 + 24);
    }
    ScenarioName = CAnimationTracking::GetScenarioName(
                     (CAnimationTracking *)v14.QuadPart,
                     (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                     v115,
                     v16);
    ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                        v25,
                        (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                        v116,
                        v26);
    v28 = &word_1801EFDD8;
    pwsz = ScenarioDetails;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
    {
      v58 = &word_1801EFDD8;
      if ( *(_QWORD *)(v6 + 136) )
        v58 = *(__int16 **)(v6 + 136);
      v59 = *(_QWORD *)(v6 + 152);
      if ( v59 )
        v60 = *(_DWORD *)(v59 + 28);
      else
        LOBYTE(v60) = 0;
      McTemplateU0xxqqxxqzqqqqqqzzqq(
        v66,
        v71[0],
        *(_QWORD *)(v6 + 56),
        *((_QWORD *)a3 + 1),
        v10,
        v68,
        v71[0],
        v66,
        v67,
        (__int64)ScenarioName,
        *(_DWORD *)(v6 + 20),
        *(_DWORD *)(v6 + 36),
        v64,
        v69,
        v65,
        v60,
        (__int64)ScenarioDetails,
        (__int64)v58,
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
        && dword_18026D7F0 > 5u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7F0, 0x200000000004uLL) )
      {
        TlgCreateWsz(&pDesc, ScenarioName);
        v82 = 4LL;
        v83 = &v72;
        v81 = &v66;
        v85 = &v67;
        v84 = 4LL;
        v87 = &v64;
        v34 = (const WCHAR *)&word_1801EFDD8;
        v86 = 4LL;
        v89 = &v69;
        v91 = v6 + 56;
        v93 = (char *)a3 + 8;
        v95 = &v65;
        v70 = v71[0];
        v97 = &v70;
        v99 = &v68;
        v103 = v6 + 36;
        v105 = v6 + 40;
        v35 = *(const WCHAR **)(v6 + 136);
        v88 = 4LL;
        v90 = 4LL;
        if ( v35 )
          v34 = v35;
        v92 = 8LL;
        v94 = 8LL;
        v96 = 4LL;
        v98 = 4LL;
        v100 = 4LL;
        v101 = v6 + 32;
        v102 = 4LL;
        v104 = 4LL;
        v106 = 4LL;
        TlgCreateWsz(&v107, v34);
        v36 = (const WCHAR *)&word_1801EFDD8;
        if ( *(_QWORD *)(v6 + 144) )
          v36 = *(const WCHAR **)(v6 + 144);
        TlgCreateWsz(&v108, v36);
        v109 = v6 + 20;
        v110 = 4LL;
        TlgCreateWsz(&v111, pwsz);
        v39 = *(_QWORD *)(v6 + 152);
        if ( v39 )
          v73 = *(_DWORD *)(v39 + 28);
        else
          v73 = 0;
        v113 = 4LL;
        v112 = &v73;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7F0, &unk_180212530, v37, v38, 0x15u, &pData);
      }
    }
    v30 = v64;
    if ( *v9 || v64 >= 0xC8 )
    {
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
              StringCchPrintfW((unsigned __int16 *)&pData, 0x80uLL, (size_t *)L"%ws|%X|%ws", ScenarioName, cData, v41);
              v30 = v64;
              ScenarioName = (const WCHAR *)&pData;
            }
          }
        }
      }
      v42 = v68;
      v43 = v71[0];
      if ( *v9 )
      {
        v44 = 4095;
        v45 = 255;
        if ( v68 < 0xFFF )
          v44 = v68;
        if ( v71[0] < 0xFF )
          v45 = v71[0];
        v46 = v44 | (v45 << 12);
        v47 = 255;
        if ( v66 < 0xFF )
          v47 = v66;
        v48 = v46 | (v47 << 20);
        v49 = v48 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v49 = v48;
        v50 = -1;
        v70 = v49;
        if ( v67 < 0xFFF )
          v50 = v67;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        {
          v61 = &word_1801EFDD8;
          if ( *(_QWORD *)(v6 + 136) )
            v61 = *(__int16 **)(v6 + 136);
          McTemplateU0xxqqqzzq(
            (_DWORD)v61,
            v30,
            *(_QWORD *)(v6 + 56),
            *((_QWORD *)v77 + 1),
            v10,
            v70,
            v50,
            (__int64)ScenarioName,
            (__int64)v61,
            *(_DWORD *)(v6 + 20));
          v30 = v64;
          v42 = v68;
          v43 = v71[0];
        }
      }
      if ( v30 >= 0xC8 )
      {
        v51 = 255;
        v52 = 4095;
        if ( v42 < 0xFFF )
          v52 = v42;
        if ( v43 < 0xFF )
          v51 = v43;
        v53 = v52 | (v51 << 12);
        v54 = -1;
        v55 = v53 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v55 = v53;
        if ( v69 < 0xFFF )
          v54 = v69;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        {
          if ( *(_QWORD *)(v6 + 136) )
            v28 = *(__int16 **)(v6 + 136);
          McTemplateU0qqqzzq(v53, v30, v30, v55, v54, (__int64)ScenarioName, (__int64)v28, *(_DWORD *)(v6 + 20));
          v30 = v64;
        }
      }
    }
    if ( *(_DWORD *)v6 )
      v31 = *(const unsigned __int16 **)(v6 + 136);
    else
      v31 = 0LL;
    if ( !*(_DWORD *)v6 )
      v3 = (const struct _GUID *)(v6 + 4);
    v63 = v30;
    v32 = v3;
    v33 = v74;
    CAnimationTracking::UpdateLongtermStatistics(v74, v32, v31, v10, v71[0], v66, v63, v78[0], *(_DWORD *)(v6 + 36));
    a2 = v75;
  }
  else
  {
    v33 = v74;
  }
  CAnimationTracking::DeleteScenario(v33, a2);
}
