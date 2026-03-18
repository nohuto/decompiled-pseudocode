/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944
 * Callers:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052820 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 *     CitSessionConnectChange @ 0x1C0084720 (CitSessionConnectChange.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0087604 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     CitDisplayPowerChange @ 0x1C00996FC (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0052258 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C0052E80 (TraceLoggingProviderEnabled.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0053010 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C005316C (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C0053350 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0053428 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00534A4 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00534C8 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00535D8 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00536A0 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C005379C (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     CitGetMonitorInfo @ 0x1C0083BF0 (CitGetMonitorInfo.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084864 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0153E20 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0154654 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C0154BCC (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

__int64 __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagMONITOR *a5,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a6)
{
  unsigned int v6; // r12d
  struct tagPROCESSINFO *v7; // r15
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // r12d
  int v16; // edx
  unsigned int v17; // r8d
  int v18; // ecx
  bool v19; // cf
  unsigned int v20; // eax
  int v21; // edx
  int v22; // eax
  UCHAR v23; // dl
  int v24; // eax
  struct tagPROCESSINFO *v25; // rdx
  struct _CIT_INTERACTION_SUMMARY *v26; // rax
  struct _CIT_INTERACTION_SUMMARY *v27; // r11
  unsigned int v28; // ecx
  int v29; // r8d
  unsigned int v30; // r9d
  int v31; // edx
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // r11
  struct tagPROCESSINFO *v43; // r11
  _QWORD *v44; // r11
  UCHAR v45; // dl
  __int64 v46; // rbx
  int v47; // eax
  __int64 v49; // rcx
  unsigned int v50; // edx
  struct _CIT_PROG_DATA *v51; // rax
  struct _CIT_PROG_DATA *v52; // r10
  char *v53; // r9
  unsigned int v54; // eax
  int v55; // edx
  unsigned int v56; // r8d
  int v57; // ecx
  unsigned int v58; // eax
  int v59; // edx
  unsigned int v60; // eax
  int v61; // edx
  int v62; // ecx
  int v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // edx
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // ecx
  int v69; // edx
  int v70; // eax
  unsigned int v71; // ecx
  int v72; // edx
  int v73; // eax
  int v74; // ecx
  unsigned int v75; // edx
  int v76; // eax
  unsigned int v77; // ecx
  int v78; // edx
  int v79; // eax
  int v80; // r9d
  unsigned int v81; // r8d
  const GUID *v82; // r9
  __int64 v83; // r10
  char v84; // r11
  _QWORD *v85; // rsi
  __int128 v86; // xmm0
  __int16 v87; // ax
  const GUID *v88; // r9
  char v89; // [rsp+30h] [rbp-D0h] BYREF
  char v90; // [rsp+31h] [rbp-CFh] BYREF
  char v91; // [rsp+32h] [rbp-CEh] BYREF
  char v92; // [rsp+33h] [rbp-CDh] BYREF
  char v93; // [rsp+34h] [rbp-CCh] BYREF
  char v94; // [rsp+35h] [rbp-CBh] BYREF
  char v95; // [rsp+36h] [rbp-CAh] BYREF
  char v96; // [rsp+37h] [rbp-C9h] BYREF
  int v97; // [rsp+38h] [rbp-C8h] BYREF
  int v98; // [rsp+3Ch] [rbp-C4h]
  unsigned int v99; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v100; // [rsp+44h] [rbp-BCh] BYREF
  int v101; // [rsp+48h] [rbp-B8h] BYREF
  int v102; // [rsp+4Ch] [rbp-B4h]
  __int16 v103; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v104; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v105; // [rsp+54h] [rbp-ACh] BYREF
  struct _CIT_PROCESS *v106; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v107; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v108; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v109; // [rsp+68h] [rbp-98h] BYREF
  __int64 v110; // [rsp+70h] [rbp-90h] BYREF
  struct tagWND *v111; // [rsp+78h] [rbp-88h]
  struct tagMONITOR *v112; // [rsp+80h] [rbp-80h]
  struct _GUID v113; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v114; // [rsp+98h] [rbp-68h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-58h] BYREF
  int v116; // [rsp+B0h] [rbp-50h]
  __int64 v117; // [rsp+B8h] [rbp-48h] BYREF
  int v118; // [rsp+C0h] [rbp-40h]
  __int128 v119; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v120; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v122; // [rsp+110h] [rbp+10h]
  __int64 v123; // [rsp+118h] [rbp+18h]
  __int128 *v124; // [rsp+120h] [rbp+20h]
  __int64 v125; // [rsp+128h] [rbp+28h]
  char *v126; // [rsp+130h] [rbp+30h]
  __int64 v127; // [rsp+138h] [rbp+38h]
  __int128 *v128; // [rsp+140h] [rbp+40h]
  __int64 v129; // [rsp+148h] [rbp+48h]
  __int128 *v130; // [rsp+150h] [rbp+50h]
  __int64 v131; // [rsp+158h] [rbp+58h]
  unsigned int *v132; // [rsp+160h] [rbp+60h]
  __int64 v133; // [rsp+168h] [rbp+68h]
  int *v134; // [rsp+170h] [rbp+70h]
  __int64 v135; // [rsp+178h] [rbp+78h]
  int *v136; // [rsp+180h] [rbp+80h]
  __int64 v137; // [rsp+188h] [rbp+88h]
  __int16 *v138; // [rsp+190h] [rbp+90h]
  __int64 v139; // [rsp+198h] [rbp+98h]
  const GUID *v140; // [rsp+1A0h] [rbp+A0h]
  __int64 v141; // [rsp+1A8h] [rbp+A8h]
  char *v142; // [rsp+1B0h] [rbp+B0h]
  __int64 v143; // [rsp+1B8h] [rbp+B8h]
  unsigned __int16 *p_Data2; // [rsp+1C0h] [rbp+C0h]
  __int64 v145; // [rsp+1C8h] [rbp+C8h]
  unsigned __int8 *Data4; // [rsp+1D0h] [rbp+D0h]
  __int64 v147; // [rsp+1D8h] [rbp+D8h]
  unsigned __int8 *v148; // [rsp+1E0h] [rbp+E0h]
  __int64 v149; // [rsp+1E8h] [rbp+E8h]
  unsigned __int16 *p_Data3; // [rsp+1F0h] [rbp+F0h]
  __int64 v151; // [rsp+1F8h] [rbp+F8h]
  int *v152; // [rsp+200h] [rbp+100h]
  __int64 v153; // [rsp+208h] [rbp+108h]
  __int64 *v154; // [rsp+210h] [rbp+110h]
  __int64 v155; // [rsp+218h] [rbp+118h]
  char *v156; // [rsp+220h] [rbp+120h]
  __int64 v157; // [rsp+228h] [rbp+128h]
  char *v158; // [rsp+230h] [rbp+130h]
  __int64 v159; // [rsp+238h] [rbp+138h]
  char *v160; // [rsp+240h] [rbp+140h]
  __int64 v161; // [rsp+248h] [rbp+148h]
  char *v162; // [rsp+250h] [rbp+150h]
  __int64 v163; // [rsp+258h] [rbp+158h]
  __int16 *v164; // [rsp+260h] [rbp+160h]
  __int64 v165; // [rsp+268h] [rbp+168h]
  char *v166; // [rsp+270h] [rbp+170h]
  __int64 v167; // [rsp+278h] [rbp+178h]
  unsigned __int8 *v168; // [rsp+280h] [rbp+180h]
  __int64 v169; // [rsp+288h] [rbp+188h]
  unsigned __int8 *v170; // [rsp+290h] [rbp+190h]
  __int64 v171; // [rsp+298h] [rbp+198h]
  unsigned int *v172; // [rsp+2A0h] [rbp+1A0h]
  __int64 v173; // [rsp+2A8h] [rbp+1A8h]
  __int64 v174; // [rsp+2B0h] [rbp+1B0h]
  __int64 v175; // [rsp+2B8h] [rbp+1B8h]
  EVENT_DATA_DESCRIPTOR v176; // [rsp+2D0h] [rbp+1D0h] BYREF
  char *v177; // [rsp+2F0h] [rbp+1F0h]
  __int64 v178; // [rsp+2F8h] [rbp+1F8h]
  __int128 *v179; // [rsp+300h] [rbp+200h]
  __int64 v180; // [rsp+308h] [rbp+208h]
  char *v181; // [rsp+310h] [rbp+210h]
  __int64 v182; // [rsp+318h] [rbp+218h]
  __int128 *v183; // [rsp+320h] [rbp+220h]
  __int64 v184; // [rsp+328h] [rbp+228h]
  __int128 *v185; // [rsp+330h] [rbp+230h]
  __int64 v186; // [rsp+338h] [rbp+238h]
  unsigned int *v187; // [rsp+340h] [rbp+240h]
  __int64 v188; // [rsp+348h] [rbp+248h]
  __int64 *v189; // [rsp+350h] [rbp+250h]
  __int64 v190; // [rsp+358h] [rbp+258h]
  char *v191; // [rsp+360h] [rbp+260h]
  __int64 v192; // [rsp+368h] [rbp+268h]
  char *v193; // [rsp+370h] [rbp+270h]
  __int64 v194; // [rsp+378h] [rbp+278h]
  char *v195; // [rsp+380h] [rbp+280h]
  __int64 v196; // [rsp+388h] [rbp+288h]
  char *v197; // [rsp+390h] [rbp+290h]
  __int64 v198; // [rsp+398h] [rbp+298h]
  __int16 *v199; // [rsp+3A0h] [rbp+2A0h]
  __int64 v200; // [rsp+3A8h] [rbp+2A8h]
  char *v201; // [rsp+3B0h] [rbp+2B0h]
  __int64 v202; // [rsp+3B8h] [rbp+2B8h]
  unsigned int *v203; // [rsp+3C0h] [rbp+2C0h]
  __int64 v204; // [rsp+3C8h] [rbp+2C8h]
  struct _CIT_PROCESS **v205; // [rsp+3D0h] [rbp+2D0h]
  __int64 v206; // [rsp+3D8h] [rbp+2D8h]
  _QWORD *v207; // [rsp+3E0h] [rbp+2E0h]
  __int64 v208; // [rsp+3E8h] [rbp+2E8h]

  v6 = 0;
  v7 = a3;
  v111 = a4;
  v112 = a5;
  v99 = 0;
  if ( *((struct tagPROCESSINFO **)a1 + 55) == a3 )
    return 0LL;
  v10 = (char *)a1 + 544;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 544), a2);
  v11 = *((_QWORD *)v10 + 2);
  v109 = v11;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 568), a2);
  v12 = *((_QWORD *)a1 + 73);
  v13 = v11 - *((_DWORD *)a1 + 209);
  v110 = v12;
  if ( v13 > dword_1C018E894 )
  {
    v50 = 3;
  }
  else
  {
    if ( a2 - *((_DWORD *)a1 + 208) <= 2 * dword_1C018E894 )
      goto LABEL_4;
    v50 = 4;
  }
  CitpPostUpdateUseInfoLog(a1, v50);
  *((_DWORD *)a1 + 209) = v11;
  *((_DWORD *)a1 + 208) = a2;
LABEL_4:
  if ( a2 - *((_DWORD *)a1 + 234) >= dword_1C018E8AC )
    CitpDPDataLog(a1);
  if ( !*((_QWORD *)a1 + 55) )
    goto LABEL_39;
  v14 = *((_DWORD *)a1 + 158);
  v15 = -1;
  v16 = -1;
  v17 = a2 - *((_DWORD *)a1 + 114);
  v100 = v17;
  v18 = v14 + 1;
  v19 = v14 + 1 < v14;
  v20 = *((_DWORD *)a1 + 159);
  if ( !v19 )
    v16 = v18;
  *((_DWORD *)a1 + 158) = v16;
  v21 = -1;
  if ( v20 + v17 >= v20 )
    v21 = v20 + v17;
  *((_DWORD *)a1 + 159) = v21;
  v106 = *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 55) + 872LL);
  if ( v106 )
  {
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v109, &v101, (char *)a1 + 488);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v110, &v97, (char *)a1 + 496);
    if ( byte_1C018E8B8 )
    {
      v51 = CitpProcessEnsureProgData(*((struct tagPROCESSINFO **)a1 + 55));
      v52 = v51;
      if ( v51 )
      {
        v53 = (char *)v51 + 88;
      }
      else
      {
        v52 = 0LL;
        v53 = (char *)qword_1C018E8C8 + 216;
      }
      if ( v53 )
      {
        v54 = *((_DWORD *)v53 + 6);
        v55 = -1;
        v56 = v100;
        v57 = v54 + 1;
        v19 = v54 + 1 < v54;
        v58 = *((_DWORD *)v53 + 7);
        if ( !v19 )
          v55 = v57;
        *((_DWORD *)v53 + 6) = v55;
        v59 = -1;
        if ( v58 + v56 >= v58 )
          v59 = v58 + v56;
        *((_DWORD *)v53 + 7) = v59;
        if ( *((_QWORD *)v53 + 1) > (unsigned __int64)(unsigned int)dword_1C018E914 )
          *(_BYTE *)((unsigned int)dword_1C018E914 + *(_QWORD *)v53) |= byte_1C018E918;
        v60 = *((_DWORD *)a1 + 42);
        v61 = -1;
        v62 = v60 + 1;
        v19 = v60 + 1 < v60;
        v63 = -1;
        if ( !v19 )
          v61 = v62;
        v64 = v100;
        *((_DWORD *)a1 + 42) = v61;
        v65 = *((_DWORD *)a1 + 43);
        v66 = v65 + v64;
        if ( v66 >= v65 )
          v63 = v66;
        *((_DWORD *)a1 + 43) = v63;
        if ( *((_QWORD *)a1 + 11) > (unsigned __int64)(unsigned int)dword_1C018E914 )
          *(_BYTE *)((unsigned int)dword_1C018E914 + *((_QWORD *)a1 + 10)) |= byte_1C018E918;
        v67 = -1;
        if ( *((_DWORD *)v53 + 8) + (v102 & 0x7FFFFFFFu) >= *((_DWORD *)v53 + 8) )
          v67 = *((_DWORD *)v53 + 8) + (v102 & 0x7FFFFFFF);
        v68 = *((_DWORD *)v53 + 9) + v101;
        v19 = v68 < *((_DWORD *)v53 + 9);
        v69 = -1;
        *((_DWORD *)v53 + 8) = v67;
        v70 = -1;
        if ( !v19 )
          v69 = v68;
        *((_DWORD *)v53 + 9) = v69;
        if ( *((_DWORD *)a1 + 26) + (v102 & 0x7FFFFFFFu) >= *((_DWORD *)a1 + 26) )
          v70 = *((_DWORD *)a1 + 26) + (v102 & 0x7FFFFFFF);
        v71 = *((_DWORD *)a1 + 27) + v101;
        v19 = v71 < *((_DWORD *)a1 + 27);
        v72 = v98;
        *((_DWORD *)a1 + 26) = v70;
        v73 = -1;
        if ( !v19 )
          v73 = v71;
        v74 = v97;
        *((_DWORD *)a1 + 27) = v73;
        v75 = *((_DWORD *)v53 + 10) + (v72 & 0x7FFFFFFF);
        v76 = -1;
        if ( v75 >= *((_DWORD *)v53 + 10) )
          v76 = v75;
        v77 = *((_DWORD *)v53 + 11) + v74;
        v19 = v77 < *((_DWORD *)v53 + 11);
        v78 = -1;
        *((_DWORD *)v53 + 10) = v76;
        v79 = -1;
        if ( !v19 )
          v78 = v77;
        *((_DWORD *)v53 + 11) = v78;
        v80 = -1;
        v81 = *((_DWORD *)a1 + 29);
        if ( *((_DWORD *)a1 + 28) + (v98 & 0x7FFFFFFFu) >= *((_DWORD *)a1 + 28) )
          v79 = *((_DWORD *)a1 + 28) + (v98 & 0x7FFFFFFF);
        *((_DWORD *)a1 + 28) = v79;
        v22 = v97;
        if ( v81 + v97 >= v81 )
          v80 = v81 + v97;
        *((_DWORD *)a1 + 29) = v80;
        if ( !v52 )
          goto LABEL_14;
        CitpProgDataNotifyUseUpdate(qword_1C018E8C8, v52);
      }
    }
    v22 = v97;
LABEL_14:
    *((_DWORD *)a1 + 222) += v22;
    v23 = *((_BYTE *)v106 + 75);
    if ( (v23 & 0x1E) != 0 )
    {
      v49 = (v23 >> 1) & 0xF;
      if ( (unsigned int)v49 < 0xB )
        *((_DWORD *)a1 + v49 + 222) += v22;
    }
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0186860, v23, 0x800000000800uLL) )
    {
      v24 = *((_DWORD *)a1 + 121);
      v25 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
      v117 = *(_QWORD *)((char *)a1 + 476);
      v118 = v24;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v117, v25, 0LL);
      v119 = (__int128)*CitpProcessGetAppSessionId(&v113, *((struct tagPROCESSINFO **)a1 + 55), &v107);
      if ( (_BYTE)qword_1C018E8BA )
      {
        ++*((_QWORD *)a1 + 118);
        if ( dword_1C0186860 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000800uLL) )
          {
            v89 = v84;
            v123 = 1LL;
            v122 = &v89;
            v124 = &v119;
            v126 = &v90;
            v128 = &v119;
            v130 = &v119;
            v132 = &v100;
            v134 = &v101;
            v136 = &v97;
            v103 = v102;
            v138 = &v103;
            v142 = (char *)&v82->Data1 + 2;
            p_Data2 = &v82->Data2;
            Data4 = v82->Data4;
            v148 = &v82->Data4[2];
            p_Data3 = &v82->Data3;
            v152 = &dword_1C018E890;
            v154 = &v117;
            v156 = (char *)&v117 + 2;
            v158 = (char *)&v117 + 4;
            v160 = (char *)&v117 + 6;
            v91 = BYTE2(v118);
            v162 = &v91;
            v104 = v118;
            v164 = &v104;
            v166 = &v92;
            v168 = &v82->Data4[4];
            v125 = 16LL;
            v90 = 1;
            v127 = 1LL;
            v129 = 16LL;
            v131 = 16LL;
            v133 = 4LL;
            v135 = 4LL;
            v137 = 4LL;
            v139 = 2LL;
            v140 = v82;
            v141 = 2LL;
            v143 = 2LL;
            v145 = 2LL;
            v147 = 2LL;
            v149 = 2LL;
            v151 = 2LL;
            v153 = 4LL;
            v155 = 2LL;
            v157 = 2LL;
            v159 = 2LL;
            v161 = 2LL;
            v163 = 1LL;
            v165 = 2LL;
            v92 = 1;
            v167 = 1LL;
            v169 = 2LL;
            v171 = 2LL;
            v170 = &v82->Data4[6];
            v172 = &v107;
            v173 = 4LL;
            v174 = v83;
            v175 = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016B8C8, 0LL, v82, 0x1Du, &pData);
          }
        }
      }
      if ( (qword_1C018E8A0 & 1) != 0 )
      {
        v26 = CitpInteractionSummaryEnsure(a1, v106);
        v27 = v26;
        if ( v26 )
        {
          v28 = *((_DWORD *)v26 + 19);
          v29 = -1;
          v30 = v100;
          if ( v28 + 1 >= v28 )
            v29 = v28 + 1;
          v31 = -1;
          *((_DWORD *)v26 + 19) = v29;
          v32 = *((_DWORD *)v26 + 20);
          v33 = v30 + v32;
          v19 = v30 + v32 < v32;
          v34 = -1;
          if ( !v19 )
            v31 = v33;
          *((_DWORD *)v27 + 20) = v31;
          if ( *((_DWORD *)v27 + 21) + (v102 & 0x7FFFFFFFu) >= *((_DWORD *)v27 + 21) )
            v34 = *((_DWORD *)v27 + 21) + (v102 & 0x7FFFFFFF);
          v35 = *((_DWORD *)v27 + 22) + v101;
          v19 = v35 < *((_DWORD *)v27 + 22);
          v36 = -1;
          *((_DWORD *)v27 + 21) = v34;
          v37 = -1;
          if ( !v19 )
            v36 = v35;
          *((_DWORD *)v27 + 22) = v36;
          if ( *((_DWORD *)v27 + 23) + (v98 & 0x7FFFFFFFu) >= *((_DWORD *)v27 + 23) )
            v37 = *((_DWORD *)v27 + 23) + (v98 & 0x7FFFFFFF);
          v38 = *((_DWORD *)v27 + 24) + v97;
          v19 = v38 < *((_DWORD *)v27 + 24);
          v39 = -1;
          *((_DWORD *)v27 + 23) = v37;
          v40 = -1;
          if ( !v19 )
            v39 = v38;
          *((_DWORD *)v27 + 24) = v39;
          if ( *((_DWORD *)v27 + 25) + (v98 & 0x7FFFFFFFu) >= *((_DWORD *)v27 + 25) )
            v40 = *((_DWORD *)v27 + 25) + (v98 & 0x7FFFFFFF);
          v41 = *((_DWORD *)v27 + 26) + v97;
          v19 = v41 < *((_DWORD *)v27 + 26);
          *((_DWORD *)v27 + 25) = v40;
          if ( !v19 )
            v15 = v41;
          *((_DWORD *)v27 + 26) = v15;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v27 + 24),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 460));
          *(_QWORD *)(v42 + 40) = v117;
          *(_DWORD *)(v42 + 48) = v118;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_BITMAP *)(v42 + 112),
            *((_DWORD *)a1 + 114),
            a2,
            *((_DWORD *)a1 + 246),
            dword_1C018E8A8);
        }
        if ( a2 - *((_DWORD *)a1 + 246) > HIDWORD(qword_1C018E8A0) )
          CitpInteractionSummariesFlush(a1);
      }
    }
    v6 = v99;
    *((_DWORD *)v106 + 16) = a2;
    goto LABEL_39;
  }
  v6 = 0;
LABEL_39:
  if ( a6 )
  {
    v6 = 1;
    *((_WORD *)a6 + 4) = *((_WORD *)a1 + 231);
    *((_WORD *)a6 + 5) = *((_WORD *)a1 + 232);
    *((_WORD *)a6 + 6) = *((_WORD *)a1 + 233);
    *((_WORD *)a6 + 7) = *((_WORD *)a1 + 234);
    *((_WORD *)a6 + 8) = *((_WORD *)a1 + 235);
  }
  if ( !(unsigned int)CitpAllowForegroundProcess(a1) )
    v7 = v43;
  *((_QWORD *)a1 + 55) = v7;
  *((_DWORD *)a1 + 114) = a2;
  *((_QWORD *)a1 + 61) = v11;
  *((_QWORD *)a1 + 62) = v12;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 616),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 460));
  *v44 = 0LL;
  v44[1] = 0LL;
  *(_QWORD *)((char *)a1 + 476) = 0LL;
  *((_DWORD *)a1 + 121) = 0;
  if ( v7 )
  {
    CitpProcessEnsureContext(v7);
    if ( byte_1C018E8B8 )
      CitpProcessEnsureProgData(v7);
    v46 = *((_QWORD *)v7 + 109);
    if ( v46 )
    {
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0186860, v45, 0x800000000800uLL) )
      {
        if ( (qword_1C018E8A0 & 1) != 0
          && *((struct _CIT_IMPACT_CONTEXT **)a1 + 120) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 960) )
        {
          *((_DWORD *)a1 + 246) = a2;
          *((_QWORD *)a1 + 122) = MEMORY[0xFFFFF78000000014];
        }
        v115 = 0LL;
        v116 = 0;
        if ( !(unsigned int)CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v115, v7, v111) )
          CitGetMonitorInfo(v112, &v115);
        v47 = v116;
        *(_QWORD *)((char *)a1 + 476) = v115;
        *((_DWORD *)a1 + 121) = v47;
        if ( (_BYTE)qword_1C018E8BA )
        {
          v108 = a2 - *(_DWORD *)(v46 + 64);
          v85 = (_QWORD *)((char *)a1 + 944);
          v86 = (__int128)*CitpProcessGetAppSessionId(&v114, v7, (unsigned int *)&v106);
          v87 = *(_WORD *)(v46 + 72);
          *(_WORD *)(v46 + 72) = 0;
          ++*v85;
          v120 = v86;
          LOWORD(v99) = v87;
          if ( dword_1C0186860 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000800uLL) )
            {
              v93 = 1;
              v177 = &v93;
              v179 = &v120;
              v181 = &v94;
              v183 = &v120;
              v185 = &v120;
              v187 = &v108;
              v189 = &v115;
              v191 = (char *)&v115 + 2;
              v193 = (char *)&v115 + 4;
              v195 = (char *)&v115 + 6;
              v95 = BYTE2(v116);
              v197 = &v95;
              v105 = v116;
              v199 = &v105;
              v201 = &v96;
              v203 = &v99;
              v205 = &v106;
              v178 = 1LL;
              v180 = 16LL;
              v94 = 1;
              v182 = 1LL;
              v184 = 16LL;
              v186 = 16LL;
              v188 = 4LL;
              v190 = 2LL;
              v192 = 2LL;
              v194 = 2LL;
              v196 = 2LL;
              v198 = 1LL;
              v200 = 2LL;
              v96 = 1;
              v202 = 1LL;
              v204 = 2LL;
              v206 = 4LL;
              v207 = v85;
              v208 = 8LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016B788, 0LL, v88, 0x12u, &v176);
            }
          }
        }
      }
      *(_DWORD *)(v46 + 64) = a2;
    }
  }
  return v6;
}
