/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190
 * Callers:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800143A4 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180014878 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180014CAC (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180014D30 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180014C90 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x180014F10 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800CD718 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18014CF74 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014CFC4 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x18014F7C4 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QE.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x18014F7E8 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 *     McTemplateU0xxqqqhhqqxxqnttqqqz @ 0x18014FCF4 (McTemplateU0xxqqqhhqqxxqnttqqqz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3,
        char a4)
{
  char v4; // r12
  char v5; // r14
  CTelemetryTouchLatencyAnalysis *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r10
  char *v11; // rsi
  unsigned __int16 v12; // r15
  int v13; // r10d
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 QuadPart; // r8
  unsigned int v23; // ecx
  __int64 v24; // r12
  char v25; // al
  int v26; // edx
  unsigned int v27; // r9d
  const GUID *v28; // rax
  UINT32 cData; // r10d
  char *v30; // rdi
  ULONGLONG v31; // r10
  __int64 v32; // r11
  const WCHAR *v33; // rdx
  char v34; // cl
  __int64 v35; // r11
  ULONGLONG v36; // r10
  unsigned int v37; // r11d
  const WCHAR *v38; // rdx
  char v39; // cl
  const WCHAR *v40; // rdx
  char v41; // cl
  char v42; // [rsp+B0h] [rbp-80h] BYREF
  char v43; // [rsp+B1h] [rbp-7Fh] BYREF
  char v44; // [rsp+B2h] [rbp-7Eh] BYREF
  char v45; // [rsp+B3h] [rbp-7Dh] BYREF
  char v46; // [rsp+B4h] [rbp-7Ch] BYREF
  char v47; // [rsp+B5h] [rbp-7Bh] BYREF
  char v48; // [rsp+B6h] [rbp-7Ah] BYREF
  char v49; // [rsp+B7h] [rbp-79h] BYREF
  char v50; // [rsp+B8h] [rbp-78h] BYREF
  unsigned __int16 v51[2]; // [rsp+BCh] [rbp-74h] BYREF
  unsigned __int16 v52[2]; // [rsp+C0h] [rbp-70h] BYREF
  char v53; // [rsp+C4h] [rbp-6Ch] BYREF
  __int16 v54; // [rsp+C8h] [rbp-68h] BYREF
  int v55; // [rsp+CCh] [rbp-64h] BYREF
  int v56; // [rsp+D0h] [rbp-60h] BYREF
  int v57; // [rsp+D4h] [rbp-5Ch] BYREF
  int v58; // [rsp+D8h] [rbp-58h] BYREF
  int v59; // [rsp+DCh] [rbp-54h] BYREF
  int v60; // [rsp+E0h] [rbp-50h] BYREF
  int v61; // [rsp+E4h] [rbp-4Ch] BYREF
  int v62; // [rsp+E8h] [rbp-48h] BYREF
  int v63; // [rsp+ECh] [rbp-44h] BYREF
  int v64; // [rsp+F0h] [rbp-40h] BYREF
  CTelemetryTouchLatencyAnalysis *v65; // [rsp+F8h] [rbp-38h] BYREF
  int v66; // [rsp+100h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+108h] [rbp-28h] BYREF
  __int64 v68; // [rsp+110h] [rbp-20h] BYREF
  __int64 v69; // [rsp+118h] [rbp-18h]
  __int64 v70; // [rsp+120h] [rbp-10h]
  int v71; // [rsp+128h] [rbp-8h] BYREF
  char v72; // [rsp+12Ch] [rbp-4h]
  GUID pActivityId; // [rsp+130h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR v74; // [rsp+150h] [rbp+20h] BYREF
  char *v75; // [rsp+170h] [rbp+40h]
  __int64 v76; // [rsp+178h] [rbp+48h]
  int *v77; // [rsp+180h] [rbp+50h]
  __int64 v78; // [rsp+188h] [rbp+58h]
  int *v79; // [rsp+190h] [rbp+60h]
  __int64 v80; // [rsp+198h] [rbp+68h]
  char *v81; // [rsp+1A0h] [rbp+70h]
  __int64 v82; // [rsp+1A8h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+1C0h] [rbp+90h] BYREF
  char *v85; // [rsp+1D0h] [rbp+A0h]
  __int64 v86; // [rsp+1D8h] [rbp+A8h]
  char *v87; // [rsp+1E0h] [rbp+B0h]
  __int64 v88; // [rsp+1E8h] [rbp+B8h]
  char *v89; // [rsp+1F0h] [rbp+C0h]
  __int64 v90; // [rsp+1F8h] [rbp+C8h]
  char *v91; // [rsp+200h] [rbp+D0h]
  __int64 v92; // [rsp+208h] [rbp+D8h]
  char *v93; // [rsp+210h] [rbp+E0h]
  __int64 v94; // [rsp+218h] [rbp+E8h]
  char *v95; // [rsp+220h] [rbp+F0h]
  __int64 v96; // [rsp+228h] [rbp+F8h]
  unsigned __int16 *v97; // [rsp+230h] [rbp+100h]
  __int64 v98; // [rsp+238h] [rbp+108h]
  unsigned __int16 *v99; // [rsp+240h] [rbp+110h]
  __int64 v100; // [rsp+248h] [rbp+118h]
  char *v101; // [rsp+250h] [rbp+120h]
  __int64 v102; // [rsp+258h] [rbp+128h]
  int *v103; // [rsp+260h] [rbp+130h]
  __int64 v104; // [rsp+268h] [rbp+138h]
  char *v105; // [rsp+270h] [rbp+140h]
  __int64 v106; // [rsp+278h] [rbp+148h]
  char *v107; // [rsp+280h] [rbp+150h]
  __int64 v108; // [rsp+288h] [rbp+158h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v109; // [rsp+290h] [rbp+160h]
  __int64 v110; // [rsp+298h] [rbp+168h]
  char *v111; // [rsp+2A0h] [rbp+170h]
  __int64 v112; // [rsp+2A8h] [rbp+178h]
  int *v113; // [rsp+2B0h] [rbp+180h]
  __int64 v114; // [rsp+2B8h] [rbp+188h]
  int *v115; // [rsp+2C0h] [rbp+190h]
  __int64 v116; // [rsp+2C8h] [rbp+198h]
  int *v117; // [rsp+2D0h] [rbp+1A0h]
  __int64 v118; // [rsp+2D8h] [rbp+1A8h]
  int *v119; // [rsp+2E0h] [rbp+1B0h]
  __int64 v120; // [rsp+2E8h] [rbp+1B8h]
  int *v121; // [rsp+2F0h] [rbp+1C0h]
  __int64 v122; // [rsp+2F8h] [rbp+1C8h]
  int *v123; // [rsp+300h] [rbp+1D0h]
  __int64 v124; // [rsp+308h] [rbp+1D8h]
  char *v125; // [rsp+310h] [rbp+1E0h]
  __int64 v126; // [rsp+318h] [rbp+1E8h]
  int *v127; // [rsp+320h] [rbp+1F0h]
  __int64 v128; // [rsp+328h] [rbp+1F8h]
  int *v129; // [rsp+330h] [rbp+200h]
  __int64 v130; // [rsp+338h] [rbp+208h]
  CTelemetryTouchLatencyAnalysis **v131; // [rsp+340h] [rbp+210h]
  __int64 v132; // [rsp+348h] [rbp+218h]
  char *v133; // [rsp+350h] [rbp+220h]
  __int64 v134; // [rsp+358h] [rbp+228h]
  char *v135; // [rsp+360h] [rbp+230h]
  __int64 v136; // [rsp+368h] [rbp+238h]
  char *v137; // [rsp+370h] [rbp+240h]
  __int64 v138; // [rsp+378h] [rbp+248h]
  __int16 *v139; // [rsp+380h] [rbp+250h]
  __int64 v140; // [rsp+388h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+390h] [rbp+260h] BYREF

  v49 = a4;
  v4 = a4;
  v5 = a3;
  v50 = a3;
  v7 = this;
  v65 = this;
  if ( *((_QWORD *)a2 + 1) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    *((_QWORD *)&v9 + 1) = *((_QWORD *)a2 + 10);
    v10 = *((_QWORD *)a2 + 11);
    v52[0] = 0;
    v51[0] = 0;
    if ( *((_QWORD *)&v9 + 1) )
    {
      QuadPart = PerformanceCount.QuadPart;
      if ( v10 )
        QuadPart = v10;
      v52[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                 v7,
                 *((unsigned __int64 *)&v9 + 1),
                 QuadPart);
    }
    if ( v10 )
      v51[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v7, v10, PerformanceCount.QuadPart);
    v11 = (char *)a2 + 112;
    v12 = *((_WORD *)a2 + 56);
    v68 = 0LL;
    v69 = 0LL;
    LOBYTE(v13) = 1;
    v70 = 0LL;
    if ( v12 <= 1u )
    {
      v55 = HIDWORD(v68);
    }
    else
    {
      v14 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((char *)a2 + 172, &pData, (unsigned int)v12 - 1);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(&v68, v14);
      LODWORD(v9) = 0;
      v55 = 0;
      if ( *((_WORD *)a2 + 57) > (unsigned __int16)v13 )
      {
        HIDWORD(v9) = 0;
        v23 = *((unsigned __int16 *)a2 + 57) - v13;
        DWORD2(v9) = *((_DWORD *)a2 + 44) % v23;
        LODWORD(v9) = *((_DWORD *)a2 + 44) / v23;
        v55 = v9;
      }
      HIDWORD(v68) = v9;
    }
    v15 = *((_DWORD *)a2 + 52);
    v16 = *((_DWORD *)a2 + 51);
    if ( v15 <= v16 || (v17 = v15 - v16, v18 = *((unsigned __int16 *)a2 + 101), v18 > v17) )
    {
      LOBYTE(v8) = 0;
      v19 = 0LL;
    }
    else
    {
      LOBYTE(v8) = v13;
      *((_QWORD *)&v9 + 1) = 100 * v18 % v17;
      v19 = 100 * v18 / v17;
    }
    v20 = *((_QWORD *)v7 + 394);
    v54 = 0;
    if ( v20 )
    {
      *((_QWORD *)&v9 + 1) = 0x989680 % v20;
      v54 = 0x989680 / v20;
      if ( (_BYTE)v8 )
      {
        v21 = (unsigned int)(100 - v19) * (0x989680uLL / (unsigned int)v20);
        v9 = v21 * (unsigned __int128)0x47AE147AE147AE15uLL;
        v8 = v21 / 0x64;
        *((_WORD *)a2 + 106) = v8;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v24 = *((_QWORD *)a2 + 13);
      v25 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
              v65,
              *((_QWORD *)a2 + 9),
              PerformanceCount.QuadPart);
      McTemplateU0xxqqqhhqqxxqnttqqqz(
        *((_DWORD *)a2 + 12),
        v26,
        *(_QWORD *)a2,
        (_DWORD)a2,
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 9),
        *((_DWORD *)a2 + 10),
        *((_WORD *)a2 + 22),
        *((_WORD *)a2 + 23),
        v25,
        v12,
        v24,
        v12 + v24 - 1,
        *((_DWORD *)a2 + 12));
      v12 = *((_WORD *)a2 + 56);
      v11 = (char *)a2 + 112;
      v7 = v65;
      v5 = v50;
      v4 = v49;
    }
    if ( v12 && *(_QWORD *)a2 && *(_QWORD *)a2 != 0xDDEECCCCDDEE0001uLL && *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 9) )
    {
      v71 = 0;
      v72 = 0;
      _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        &v71,
        *((_QWORD *)&v9 + 1),
        v8,
        v19);
      v27 = hProvider;
      if ( hProvider > 5u )
      {
        v28 = (const GUID *)_TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(&v71);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A7013, &pActivityId, v28, cData, &pData);
        v27 = hProvider;
      }
      if ( v27 > 4 )
      {
        v30 = (char *)a2 + 48;
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
        {
          v33 = (const WCHAR *)*((_QWORD *)a2 + 1);
          v56 = *((_DWORD *)a2 + 13);
          v77 = &v56;
          v57 = *((_DWORD *)a2 + 14);
          v79 = &v57;
          v50 = *((_BYTE *)a2 + 60);
          v81 = &v50;
          v75 = (char *)a2 + 48;
          v76 = v32;
          v78 = v32;
          v80 = v32;
          v82 = 1LL;
          TlgCreateWsz(&pDesc, v33);
          TlgCreateWsz(&v84, *((LPCWSTR *)a2 + 2));
          v34 = *((_BYTE *)a2 + 24);
          v85 = &v49;
          v53 = *((_BYTE *)a2 + 28);
          v87 = &v53;
          v42 = *((_BYTE *)a2 + 32);
          v89 = &v42;
          v43 = *((_BYTE *)a2 + 36);
          v91 = &v43;
          v44 = *((_BYTE *)a2 + 40);
          v93 = &v44;
          v95 = (char *)a2 + 96;
          v97 = v52;
          v99 = v51;
          v58 = *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51);
          v103 = &v58;
          v105 = (char *)a2 + 44;
          v107 = (char *)a2 + 46;
          v111 = &v45;
          v59 = *((_DWORD *)a2 + 30);
          v113 = &v59;
          v49 = v34;
          v86 = 1LL;
          v88 = 1LL;
          v90 = 1LL;
          v92 = 1LL;
          v94 = 1LL;
          v96 = 1LL;
          v98 = 2LL;
          v100 = 2LL;
          v101 = v11;
          v102 = 2LL;
          v104 = v35;
          v106 = 2LL;
          v108 = 2LL;
          v109 = a2;
          v110 = 8LL;
          v45 = v4;
          v112 = 1LL;
          v46 = *((_BYTE *)a2 + 144);
          v115 = (int *)&v46;
          v47 = *((_BYTE *)a2 + 145);
          v117 = (int *)&v47;
          v60 = v68;
          v119 = &v60;
          v61 = *((_DWORD *)a2 + 37);
          v121 = &v61;
          v123 = (int *)((char *)a2 + 196);
          v125 = (char *)a2 + 198;
          v48 = *((_BYTE *)a2 + 116);
          v127 = (int *)&v48;
          v114 = v35;
          v116 = 1LL;
          v118 = 1LL;
          v120 = v35;
          v122 = v35;
          v124 = 2LL;
          v126 = 2LL;
          v128 = 1LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A6E01, &pActivityId, 0LL, 0x1Eu, &v74);
          v27 = hProvider;
          v31 = 2LL;
          LODWORD(v32) = 4;
        }
        if ( v27 > (unsigned int)v32 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v31) )
          {
            v38 = (const WCHAR *)*((_QWORD *)a2 + 1);
            v61 = *((_DWORD *)a2 + 13);
            v77 = &v61;
            v60 = *((_DWORD *)a2 + 14);
            v79 = &v60;
            v48 = *((_BYTE *)a2 + 60);
            v81 = &v48;
            v75 = (char *)a2 + 48;
            v76 = 4LL;
            v78 = 4LL;
            v80 = 4LL;
            v82 = 1LL;
            TlgCreateWsz(&pDesc, v38);
            TlgCreateWsz(&v84, *((LPCWSTR *)a2 + 2));
            v39 = *((_BYTE *)a2 + 24);
            v85 = &v47;
            v46 = *((_BYTE *)a2 + 28);
            v87 = &v46;
            v45 = *((_BYTE *)a2 + 32);
            v89 = &v45;
            v44 = *((_BYTE *)a2 + 36);
            v91 = &v44;
            v43 = *((_BYTE *)a2 + 40);
            v93 = &v43;
            v95 = (char *)a2 + 96;
            v97 = v52;
            v99 = v51;
            v59 = *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51);
            v103 = &v59;
            v105 = (char *)a2 + 44;
            v107 = (char *)a2 + 46;
            v111 = &v42;
            v58 = *((_DWORD *)a2 + 31);
            v113 = &v58;
            v47 = v39;
            v86 = 1LL;
            v88 = 1LL;
            v90 = 1LL;
            v92 = 1LL;
            v94 = 1LL;
            v96 = 1LL;
            v98 = 2LL;
            v100 = 2LL;
            v101 = v11;
            v102 = 2LL;
            v104 = 4LL;
            v106 = 2LL;
            v108 = 2LL;
            v109 = a2;
            v110 = 8LL;
            v42 = v4;
            v112 = 1LL;
            v57 = *((_DWORD *)a2 + 32);
            v115 = &v57;
            v56 = v55;
            v117 = &v56;
            v62 = v69;
            v119 = &v62;
            v63 = *((_DWORD *)a2 + 38);
            v121 = &v63;
            v64 = *((_DWORD *)a2 + 39);
            v123 = &v64;
            v125 = (char *)a2 + 216;
            v114 = 4LL;
            v116 = 4LL;
            v118 = 4LL;
            v120 = 4LL;
            v122 = 4LL;
            v124 = 4LL;
            v126 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A6BE0, &pActivityId, 0LL, 0x1Du, &v74);
            v27 = hProvider;
            v36 = 2LL;
            v37 = 4;
          }
          else
          {
            v30 = (char *)a2 + 48;
          }
          if ( v27 > v37 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v36) )
          {
            v40 = (const WCHAR *)*((_QWORD *)a2 + 1);
            v64 = *((_DWORD *)a2 + 13);
            v77 = &v64;
            v63 = *((_DWORD *)a2 + 14);
            v79 = &v63;
            v48 = *((_BYTE *)a2 + 60);
            v75 = v30;
            v81 = &v48;
            v76 = 4LL;
            v78 = 4LL;
            v80 = 4LL;
            v82 = 1LL;
            TlgCreateWsz(&pDesc, v40);
            TlgCreateWsz(&v84, *((LPCWSTR *)a2 + 2));
            v41 = *((_BYTE *)a2 + 24);
            v85 = &v47;
            v46 = *((_BYTE *)a2 + 28);
            v87 = &v46;
            v45 = *((_BYTE *)a2 + 32);
            v89 = &v45;
            v44 = *((_BYTE *)a2 + 36);
            v91 = &v44;
            v43 = *((_BYTE *)a2 + 40);
            v93 = &v43;
            v95 = (char *)a2 + 96;
            v97 = v52;
            v99 = v51;
            v62 = *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51);
            v103 = &v62;
            v105 = (char *)a2 + 44;
            v107 = (char *)a2 + 46;
            v111 = &v42;
            v61 = *((_DWORD *)a2 + 33);
            v47 = v41;
            v86 = 1LL;
            v88 = 1LL;
            v90 = 1LL;
            v92 = 1LL;
            v94 = 1LL;
            v96 = 1LL;
            v98 = 2LL;
            v100 = 2LL;
            v101 = v11;
            v102 = 2LL;
            v104 = 4LL;
            v106 = 2LL;
            v108 = 2LL;
            v109 = a2;
            v110 = 8LL;
            v42 = v4;
            v112 = 1LL;
            v113 = &v61;
            v60 = *((_DWORD *)a2 + 34);
            v115 = &v60;
            v59 = *((_DWORD *)a2 + 35);
            v117 = &v59;
            v119 = (int *)((char *)a2 + 146);
            v58 = HIDWORD(v69);
            v121 = &v58;
            v57 = v70;
            v123 = &v57;
            v56 = HIDWORD(v70);
            v125 = (char *)&v56;
            v55 = *((_DWORD *)a2 + 40);
            v127 = &v55;
            v66 = *((_DWORD *)a2 + 41);
            v129 = &v66;
            LODWORD(v65) = *((_DWORD *)a2 + 42);
            v131 = &v65;
            v133 = (char *)a2 + 202;
            v135 = (char *)a2 + 200;
            v137 = (char *)a2 + 212;
            v139 = &v54;
            v114 = 4LL;
            v116 = 4LL;
            v118 = 4LL;
            v120 = 1LL;
            v122 = 4LL;
            v124 = 4LL;
            v126 = 4LL;
            v128 = 4LL;
            v130 = 4LL;
            v132 = 4LL;
            v134 = 2LL;
            v136 = 2LL;
            v138 = 2LL;
            v140 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A692B, &pActivityId, 0LL, 0x24u, &v74);
            v27 = hProvider;
          }
        }
      }
      v71 = 2;
      if ( v27 > 5 )
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A6910, &pActivityId, 0LL, 2u, &pData);
      if ( (unsigned int)(*((_DWORD *)a2 + 7) - 2) <= 4 )
        CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
          v7,
          a2,
          v52[0],
          v51[0],
          (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)&v68,
          *((_DWORD *)a2 + 52) - *((_DWORD *)a2 + 51));
      if ( v71 == 1 )
      {
        v71 = 2;
        _TlgWriteActivityAutoStop<0,5>(&hProvider, &pActivityId);
      }
    }
    *((_DWORD *)a2 + 17) = 0;
    if ( v5 )
    {
      operator delete(*((void **)a2 + 1));
      memset_0(a2, 0, 0xF8uLL);
      if ( *(_DWORD *)v7 )
        --*(_DWORD *)v7;
    }
  }
}
