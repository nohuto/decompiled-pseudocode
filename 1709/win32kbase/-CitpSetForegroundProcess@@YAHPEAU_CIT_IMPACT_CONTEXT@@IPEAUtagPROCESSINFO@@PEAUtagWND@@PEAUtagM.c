/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74
 * Callers:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001B640 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084ACC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     CitSessionConnectChange @ 0x1C009ADA0 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00A3738 (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C001B4FC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C001C61C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C001C714 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C001C790 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C001C7B0 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00230F4 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C0023250 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C00234AC (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C0024920 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     CitGetMonitorInfo @ 0x1C005CB10 (CitGetMonitorInfo.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0083540 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0154654 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C015510C (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C0155620 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

__int64 __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagMONITOR *a5,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a6)
{
  unsigned int v6; // r13d
  __int64 v7; // r15
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // ecx
  bool v18; // cf
  unsigned int v19; // eax
  int v20; // edx
  __int64 v21; // r13
  UCHAR v22; // dl
  int v23; // eax
  unsigned __int8 v24; // cl
  int v25; // eax
  struct tagPROCESSINFO *v26; // rdx
  __int128 v27; // xmm0
  const GUID *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  struct _CIT_INTERACTION_SUMMARY *v31; // rax
  struct _CIT_INTERACTION_SUMMARY *v32; // r11
  unsigned int v33; // ecx
  int v34; // r10d
  unsigned int v35; // r9d
  int v36; // r8d
  int v37; // edx
  unsigned int v38; // eax
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // r8d
  int v43; // edx
  unsigned int v44; // eax
  int v45; // ecx
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // r8d
  unsigned int v49; // eax
  __int64 v50; // r11
  __int64 v51; // rcx
  UCHAR v52; // dl
  _QWORD *v53; // r11
  __int64 v54; // rbx
  int v55; // eax
  _QWORD *v56; // r14
  __int128 v57; // xmm0
  unsigned int v58; // eax
  const GUID *v59; // r9
  __int64 v61; // rcx
  unsigned int v62; // edx
  struct _CIT_PROG_DATA *v63; // rax
  struct _CIT_PROG_DATA *v64; // r10
  unsigned int v65; // ecx
  unsigned int v66; // r9d
  int v67; // r8d
  int v68; // edx
  unsigned int v69; // eax
  char v70; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+31h] [rbp-CFh] BYREF
  char v72; // [rsp+32h] [rbp-CEh] BYREF
  char v73; // [rsp+33h] [rbp-CDh] BYREF
  char v74; // [rsp+34h] [rbp-CCh] BYREF
  char v75; // [rsp+35h] [rbp-CBh] BYREF
  char v76; // [rsp+36h] [rbp-CAh] BYREF
  char v77; // [rsp+37h] [rbp-C9h] BYREF
  unsigned int v78; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v79; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v80; // [rsp+3Eh] [rbp-C2h] BYREF
  unsigned int v81; // [rsp+40h] [rbp-C0h] BYREF
  int v82; // [rsp+48h] [rbp-B8h] BYREF
  int v83; // [rsp+4Ch] [rbp-B4h]
  int v84; // [rsp+50h] [rbp-B0h] BYREF
  int v85; // [rsp+54h] [rbp-ACh]
  unsigned int v86; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v87; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v88; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+68h] [rbp-98h] BYREF
  __int64 v90; // [rsp+70h] [rbp-90h] BYREF
  struct tagWND *v91; // [rsp+78h] [rbp-88h]
  struct tagMONITOR *v92; // [rsp+80h] [rbp-80h]
  struct _GUID v93; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v94; // [rsp+98h] [rbp-68h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-58h] BYREF
  int v96; // [rsp+B0h] [rbp-50h]
  __int64 v97; // [rsp+B8h] [rbp-48h] BYREF
  int v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v100; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v102; // [rsp+110h] [rbp+10h]
  __int64 v103; // [rsp+118h] [rbp+18h]
  __int128 *v104; // [rsp+120h] [rbp+20h]
  __int64 v105; // [rsp+128h] [rbp+28h]
  char *v106; // [rsp+130h] [rbp+30h]
  __int64 v107; // [rsp+138h] [rbp+38h]
  __int128 *v108; // [rsp+140h] [rbp+40h]
  __int64 v109; // [rsp+148h] [rbp+48h]
  __int128 *v110; // [rsp+150h] [rbp+50h]
  __int64 v111; // [rsp+158h] [rbp+58h]
  unsigned int *v112; // [rsp+160h] [rbp+60h]
  __int64 v113; // [rsp+168h] [rbp+68h]
  int *v114; // [rsp+170h] [rbp+70h]
  __int64 v115; // [rsp+178h] [rbp+78h]
  int *v116; // [rsp+180h] [rbp+80h]
  __int64 v117; // [rsp+188h] [rbp+88h]
  __int16 *v118; // [rsp+190h] [rbp+90h]
  __int64 v119; // [rsp+198h] [rbp+98h]
  const GUID *v120; // [rsp+1A0h] [rbp+A0h]
  __int64 v121; // [rsp+1A8h] [rbp+A8h]
  char *v122; // [rsp+1B0h] [rbp+B0h]
  __int64 v123; // [rsp+1B8h] [rbp+B8h]
  unsigned __int16 *p_Data2; // [rsp+1C0h] [rbp+C0h]
  __int64 v125; // [rsp+1C8h] [rbp+C8h]
  unsigned __int8 *Data4; // [rsp+1D0h] [rbp+D0h]
  __int64 v127; // [rsp+1D8h] [rbp+D8h]
  unsigned __int8 *v128; // [rsp+1E0h] [rbp+E0h]
  __int64 v129; // [rsp+1E8h] [rbp+E8h]
  unsigned __int16 *p_Data3; // [rsp+1F0h] [rbp+F0h]
  __int64 v131; // [rsp+1F8h] [rbp+F8h]
  int *v132; // [rsp+200h] [rbp+100h]
  __int64 v133; // [rsp+208h] [rbp+108h]
  __int64 *v134; // [rsp+210h] [rbp+110h]
  __int64 v135; // [rsp+218h] [rbp+118h]
  char *v136; // [rsp+220h] [rbp+120h]
  __int64 v137; // [rsp+228h] [rbp+128h]
  char *v138; // [rsp+230h] [rbp+130h]
  __int64 v139; // [rsp+238h] [rbp+138h]
  char *v140; // [rsp+240h] [rbp+140h]
  __int64 v141; // [rsp+248h] [rbp+148h]
  char *v142; // [rsp+250h] [rbp+150h]
  __int64 v143; // [rsp+258h] [rbp+158h]
  __int16 *v144; // [rsp+260h] [rbp+160h]
  __int64 v145; // [rsp+268h] [rbp+168h]
  char *v146; // [rsp+270h] [rbp+170h]
  __int64 v147; // [rsp+278h] [rbp+178h]
  unsigned __int8 *v148; // [rsp+280h] [rbp+180h]
  __int64 v149; // [rsp+288h] [rbp+188h]
  unsigned int *v150; // [rsp+290h] [rbp+190h]
  __int64 v151; // [rsp+298h] [rbp+198h]
  __int64 v152; // [rsp+2A0h] [rbp+1A0h]
  __int64 v153; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v154; // [rsp+2B0h] [rbp+1B0h] BYREF
  char *v155; // [rsp+2D0h] [rbp+1D0h]
  __int64 v156; // [rsp+2D8h] [rbp+1D8h]
  __int128 *v157; // [rsp+2E0h] [rbp+1E0h]
  __int64 v158; // [rsp+2E8h] [rbp+1E8h]
  char *v159; // [rsp+2F0h] [rbp+1F0h]
  __int64 v160; // [rsp+2F8h] [rbp+1F8h]
  __int128 *v161; // [rsp+300h] [rbp+200h]
  __int64 v162; // [rsp+308h] [rbp+208h]
  __int128 *v163; // [rsp+310h] [rbp+210h]
  __int64 v164; // [rsp+318h] [rbp+218h]
  unsigned int *v165; // [rsp+320h] [rbp+220h]
  __int64 v166; // [rsp+328h] [rbp+228h]
  __int64 *v167; // [rsp+330h] [rbp+230h]
  __int64 v168; // [rsp+338h] [rbp+238h]
  char *v169; // [rsp+340h] [rbp+240h]
  __int64 v170; // [rsp+348h] [rbp+248h]
  char *v171; // [rsp+350h] [rbp+250h]
  __int64 v172; // [rsp+358h] [rbp+258h]
  char *v173; // [rsp+360h] [rbp+260h]
  __int64 v174; // [rsp+368h] [rbp+268h]
  char *v175; // [rsp+370h] [rbp+270h]
  __int64 v176; // [rsp+378h] [rbp+278h]
  unsigned int *v177; // [rsp+380h] [rbp+280h]
  __int64 v178; // [rsp+388h] [rbp+288h]
  char *v179; // [rsp+390h] [rbp+290h]
  __int64 v180; // [rsp+398h] [rbp+298h]
  unsigned int *v181; // [rsp+3A0h] [rbp+2A0h]
  __int64 v182; // [rsp+3A8h] [rbp+2A8h]
  _QWORD *v183; // [rsp+3B0h] [rbp+2B0h]
  __int64 v184; // [rsp+3B8h] [rbp+2B8h]

  v6 = 0;
  v7 = (__int64)a3;
  v91 = a4;
  v92 = a5;
  v78 = 0;
  if ( *((struct tagPROCESSINFO **)a1 + 15) == a3 )
    return 0LL;
  v10 = (char *)a1 + 188;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 188), a2);
  v11 = *((_QWORD *)v10 + 2);
  v89 = v11;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 212), a2);
  v12 = *(_QWORD *)((char *)a1 + 228);
  v13 = v11 - *((_DWORD *)a1 + 125);
  v90 = v12;
  if ( v13 > dword_1C019372C )
  {
    v62 = 3;
LABEL_59:
    CitpPostUpdateUseInfoLog(a1, v62);
    *((_DWORD *)a1 + 125) = v11;
    *((_DWORD *)a1 + 124) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 124) > 2 * dword_1C019372C )
  {
    v62 = 4;
    goto LABEL_59;
  }
LABEL_4:
  if ( a2 - *((_DWORD *)a1 + 186) >= dword_1C019373C )
    CitpDPDataLog(a1);
  if ( *((_QWORD *)a1 + 15) )
  {
    v14 = *((_DWORD *)a1 + 70);
    v15 = -1;
    v16 = a2 - *((_DWORD *)a1 + 34);
    v81 = v16;
    v17 = v14 + 1;
    v18 = v14 + 1 < v14;
    v19 = *((_DWORD *)a1 + 71);
    if ( !v18 )
      v15 = v17;
    *((_DWORD *)a1 + 70) = v15;
    v20 = -1;
    if ( v19 + v16 >= v19 )
      v20 = v19 + v16;
    *((_DWORD *)a1 + 71) = v20;
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 15) + 880LL);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v89, &v82, (char *)a1 + 168);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v90, &v84, (char *)a1 + 176);
    v23 = v84;
    *((_DWORD *)a1 + 138) += v84;
    v24 = *(_BYTE *)(v21 + 91);
    if ( (v24 & 0x1E) != 0 )
    {
      v61 = (v24 >> 1) & 0xF;
      if ( (unsigned int)v61 < 0xB )
        *((_DWORD *)a1 + v61 + 138) += v23;
    }
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v22, 0x800000000800uLL) )
    {
      v25 = *((_DWORD *)a1 + 41);
      v26 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
      v97 = *(_QWORD *)((char *)a1 + 156);
      v98 = v25;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v97, v26, 0LL);
      if ( HIBYTE(qword_1C0193740) )
      {
        v27 = (__int128)*CitpProcessGetAppSessionId(&v93, *((struct tagPROCESSINFO **)a1 + 15), &v86);
        ++*((_QWORD *)a1 + 94);
        v99 = v27;
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v70 = 0;
            v102 = &v70;
            v104 = &v99;
            v106 = &v71;
            v108 = &v99;
            v110 = &v99;
            v112 = &v81;
            v114 = &v82;
            v116 = &v84;
            v79 = v83;
            v118 = &v79;
            v122 = (char *)&v28->Data1 + 2;
            p_Data2 = &v28->Data2;
            Data4 = v28->Data4;
            v128 = &v28->Data4[2];
            p_Data3 = &v28->Data3;
            v132 = &dword_1C0193728;
            v134 = &v97;
            v136 = (char *)&v97 + 2;
            v138 = (char *)&v97 + 4;
            v140 = (char *)&v97 + 6;
            v72 = BYTE2(v98);
            v142 = &v72;
            v80 = v98;
            v144 = &v80;
            v146 = &v73;
            v148 = &v28->Data4[4];
            v103 = v30;
            v105 = 16LL;
            v71 = v30;
            v107 = v30;
            v109 = 16LL;
            v111 = 16LL;
            v113 = 4LL;
            v115 = 4LL;
            v117 = 4LL;
            v119 = 2LL;
            v120 = v28;
            v121 = 2LL;
            v123 = 2LL;
            v125 = 2LL;
            v127 = 2LL;
            v129 = 2LL;
            v131 = 2LL;
            v133 = 4LL;
            v135 = 2LL;
            v137 = 2LL;
            v139 = 2LL;
            v141 = 2LL;
            v143 = v30;
            v145 = 2LL;
            v73 = v30;
            v147 = v30;
            v149 = 2LL;
            v150 = &v86;
            v151 = 4LL;
            v152 = v29;
            v153 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016BCEE, 0LL, v28, 0x1Cu, &pData);
          }
        }
      }
      if ( BYTE5(qword_1C0193740) )
      {
        v63 = CitpProcessEnsureProgData(*(struct tagPROCESSINFO **)(v21 + 8));
        v64 = v63;
        if ( v63 )
        {
          v65 = *((_DWORD *)v63 + 20);
          v66 = v81;
          v67 = -1;
          if ( v65 + 1 >= v65 )
            v67 = v65 + 1;
          v68 = -1;
          *((_DWORD *)v63 + 20) = v67;
          v69 = *((_DWORD *)v63 + 21);
          if ( v69 + v66 >= v69 )
            v68 = v69 + v66;
          *((_DWORD *)v64 + 21) = v68;
          CitpProgDataNotifyUseUpdate(qword_1C0193750, v64);
        }
      }
      if ( (dword_1C0193730 & 1) != 0 )
      {
        v31 = CitpInteractionSummaryEnsure(a1, (struct _CIT_PROCESS *)v21);
        v32 = v31;
        if ( v31 )
        {
          v33 = *((_DWORD *)v31 + 28);
          v34 = -1;
          v35 = v81;
          v36 = -1;
          if ( v33 + 1 >= v33 )
            v36 = v33 + 1;
          v37 = -1;
          *((_DWORD *)v31 + 28) = v36;
          v38 = *((_DWORD *)v31 + 29);
          v39 = v38 + v35;
          v18 = v38 + v35 < v38;
          v40 = -1;
          if ( !v18 )
            v37 = v39;
          *((_DWORD *)v32 + 29) = v37;
          v41 = *((_DWORD *)v32 + 30);
          v42 = v82;
          if ( v41 + (v83 & 0x7FFFFFFF) >= v41 )
            v40 = v41 + (v83 & 0x7FFFFFFF);
          v43 = -1;
          *((_DWORD *)v32 + 30) = v40;
          v44 = *((_DWORD *)v32 + 31);
          v45 = v44 + v42;
          v18 = v44 + v42 < v44;
          v46 = -1;
          if ( !v18 )
            v43 = v45;
          *((_DWORD *)v32 + 31) = v43;
          v47 = *((_DWORD *)v32 + 32);
          v48 = v84;
          if ( v47 + (v85 & 0x7FFFFFFF) >= v47 )
            v46 = v47 + (v85 & 0x7FFFFFFF);
          *((_DWORD *)v32 + 32) = v46;
          v49 = *((_DWORD *)v32 + 33);
          if ( v49 + v48 >= v49 )
            v34 = v49 + v48;
          *((_DWORD *)v32 + 33) = v34;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v32 + 32),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
          *(_QWORD *)(v50 + 48) = v97;
          *(_DWORD *)(v50 + 56) = v98;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_BITMAP *)(v50 + 136),
            *((_DWORD *)a1 + 34),
            a2,
            *((_DWORD *)a1 + 198),
            dword_1C0193738);
        }
        if ( (dword_1C0193730 & 1) != 0 && a2 - *((_DWORD *)a1 + 198) > dword_1C0193734 )
          CitpInteractionSummariesFlush(a1, 0);
      }
      *(_DWORD *)(v21 + 80) = a2;
    }
    v6 = v78;
  }
  if ( a6 )
  {
    v6 = 1;
    *((_WORD *)a6 + 4) = *((_WORD *)a1 + 71);
    *((_WORD *)a6 + 5) = *((_WORD *)a1 + 72);
    *((_WORD *)a6 + 6) = *((_WORD *)a1 + 73);
    *((_WORD *)a6 + 7) = *((_WORD *)a1 + 74);
    *((_WORD *)a6 + 8) = *((_WORD *)a1 + 75);
  }
  if ( v7 )
  {
    v51 = v7 & -(__int64)((unsigned int)CitpAllowForegroundProcess(a1) != 0);
    v7 = v51;
    if ( v51 )
      v7 = v51 & -(__int64)(CitpProcessEnsureContext((struct tagPROCESSINFO *)v51) != 0LL);
  }
  *((_QWORD *)a1 + 15) = v7;
  *((_DWORD *)a1 + 34) = a2;
  *((_QWORD *)a1 + 21) = v11;
  *((_QWORD *)a1 + 22) = v12;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 248),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
  *v53 = 0LL;
  v53[1] = 0LL;
  *(_QWORD *)((char *)a1 + 156) = 0LL;
  *((_DWORD *)a1 + 41) = 0;
  if ( v7 )
  {
    v54 = *(_QWORD *)(v7 + 880);
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v52, 0x800000000800uLL) )
    {
      if ( (dword_1C0193730 & 1) != 0
        && *((struct _CIT_IMPACT_CONTEXT **)a1 + 96) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 768) )
      {
        *((_DWORD *)a1 + 198) = a2;
        *((_QWORD *)a1 + 98) = MEMORY[0xFFFFF78000000014];
      }
      v95 = 0LL;
      v96 = 0;
      if ( !(unsigned int)CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v95, (struct tagPROCESSINFO *)v7, v91) )
        CitGetMonitorInfo(v92, &v95);
      v55 = v96;
      *(_QWORD *)((char *)a1 + 156) = v95;
      *((_DWORD *)a1 + 41) = v55;
      if ( HIBYTE(qword_1C0193740) )
      {
        v56 = (_QWORD *)((char *)a1 + 752);
        v57 = (__int128)*CitpProcessGetAppSessionId(&v94, (struct tagPROCESSINFO *)v7, &v88);
        v58 = a2 - *(_DWORD *)(v54 + 80);
        ++*v56;
        v100 = v57;
        v87 = v58;
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v74 = 1;
            v155 = &v74;
            v157 = &v100;
            v159 = &v75;
            v161 = &v100;
            v163 = &v100;
            v165 = &v87;
            v167 = &v95;
            v169 = (char *)&v95 + 2;
            v171 = (char *)&v95 + 4;
            v173 = (char *)&v95 + 6;
            v76 = BYTE2(v96);
            v175 = &v76;
            LOWORD(v78) = v96;
            v177 = &v78;
            v179 = &v77;
            v181 = &v88;
            v156 = 1LL;
            v158 = 16LL;
            v75 = 1;
            v160 = 1LL;
            v162 = 16LL;
            v164 = 16LL;
            v166 = 4LL;
            v168 = 2LL;
            v170 = 2LL;
            v172 = 2LL;
            v174 = 2LL;
            v176 = 1LL;
            v178 = 2LL;
            v77 = 1;
            v180 = 1LL;
            v182 = 4LL;
            v183 = v56;
            v184 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016BBC4, 0LL, v59, 0x11u, &v154);
          }
        }
      }
    }
    *(_DWORD *)(v54 + 80) = a2;
  }
  return v6;
}
