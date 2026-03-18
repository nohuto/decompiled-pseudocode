/*
 * XREFs of UserPowerInfoCallout @ 0x1C0063D28
 * Callers:
 *     W32CalloutDispatch @ 0x1C002D340 (W32CalloutDispatch.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002EA30 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00496E0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0052EAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     EtwTraceDisplayReqChange @ 0x1C0064654 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C006467C (CitDisplayRequestChange.c)
 *     QueuePowerRequest @ 0x1C00649B0 (QueuePowerRequest.c)
 *     SqmPowerState @ 0x1C0065930 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0065D74 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SetPendingInput @ 0x1C009BE30 (SetPendingInput.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C009D01C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00D6494 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5, int *a6)
{
  int v6; // edi
  int v8; // r15d
  int v9; // ebx
  unsigned int v10; // r14d
  int v11; // ebx
  int v12; // ebx
  int *v13; // r15
  int v14; // r13d
  LARGE_INTEGER *v15; // rbx
  struct tagTHREADINFO *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  int v21; // ecx
  LARGE_INTEGER v22; // rbx
  int v23; // r8d
  int v24; // esi
  int v25; // ebx
  bool v26; // cc
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  LARGE_INTEGER *v42; // rbx
  struct tagTHREADINFO *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r15
  int v48; // ecx
  LARGE_INTEGER v49; // rbx
  int v50; // r8d
  int v51; // r13d
  __int64 v52; // r15
  LARGE_INTEGER *v53; // rbx
  struct tagTHREADINFO *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rsi
  int v59; // ecx
  LARGE_INTEGER v60; // rbx
  int v61; // r8d
  __int64 v62; // rbx
  LARGE_INTEGER *v63; // rbx
  struct tagTHREADINFO *v64; // r12
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r15
  int v69; // ecx
  LARGE_INTEGER v70; // rbx
  int v71; // r8d
  LARGE_INTEGER *v72; // rbx
  struct tagTHREADINFO *v73; // r12
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r15
  int v78; // ecx
  LARGE_INTEGER v79; // rbx
  int v80; // r8d
  LARGE_INTEGER *v81; // rbx
  struct tagTHREADINFO *v82; // r12
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r15
  int v87; // ecx
  LARGE_INTEGER v88; // rbx
  int v89; // r8d
  LARGE_INTEGER *v90; // rbx
  struct tagTHREADINFO *v91; // r12
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r15
  int v96; // ecx
  LARGE_INTEGER v97; // rbx
  int v98; // r8d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r13
  int v104; // ecx
  int v105; // r8d
  LARGE_INTEGER v106; // r12
  int v107; // ebx
  int v108; // ebx
  int v109; // ebx
  int v110; // ebx
  __int64 v111; // rax
  LARGE_INTEGER *v112; // rbx
  struct tagTHREADINFO *v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rsi
  int v118; // ecx
  LARGE_INTEGER v119; // rbx
  int v120; // r8d
  LARGE_INTEGER *v121; // rbx
  struct tagTHREADINFO *v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  int v126; // edx
  int v127; // r8d
  __int64 v128; // rcx
  unsigned int v129; // eax
  int v130; // eax
  char v131; // r12
  char v132; // bl
  LARGE_INTEGER *v133; // r15
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r13
  int v138; // ecx
  int v139; // r8d
  LARGE_INTEGER v140; // r15
  LARGE_INTEGER *v141; // rbx
  struct tagTHREADINFO *v142; // r12
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r15
  int v147; // ecx
  LARGE_INTEGER v148; // rbx
  int v149; // r8d
  LARGE_INTEGER *v150; // rbx
  struct tagTHREADINFO *v151; // r12
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r15
  int v156; // ecx
  LARGE_INTEGER v157; // rbx
  int v158; // r8d
  LARGE_INTEGER *v159; // rbx
  struct tagTHREADINFO *v160; // r12
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r15
  int v165; // ecx
  LARGE_INTEGER v166; // rbx
  int v167; // r8d
  LARGE_INTEGER *v168; // rbx
  struct tagTHREADINFO *v169; // r12
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r15
  int v174; // ecx
  LARGE_INTEGER v175; // rbx
  int v176; // r8d
  LARGE_INTEGER *v177; // rbx
  struct tagTHREADINFO *v178; // r15
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // rsi
  int v183; // ecx
  LARGE_INTEGER v184; // rbx
  int v185; // r8d
  enum POWER_MONITOR_REQUEST_REASON v186; // ecx
  LARGE_INTEGER *v187; // rbx
  struct tagTHREADINFO *v188; // r12
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r15
  int v193; // ecx
  LARGE_INTEGER v194; // rbx
  int v195; // r8d
  LARGE_INTEGER *v196; // rbx
  struct tagTHREADINFO *v197; // r12
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r15
  int v202; // ecx
  LARGE_INTEGER v203; // rbx
  int v204; // r8d
  LARGE_INTEGER *v205; // rbx
  struct tagTHREADINFO *v206; // r12
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r15
  int v211; // ecx
  LARGE_INTEGER v212; // rbx
  int v213; // r8d
  __int64 v214; // rcx
  LARGE_INTEGER *v215; // rbx
  struct tagTHREADINFO *v216; // r15
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // rsi
  int v221; // ecx
  LARGE_INTEGER v222; // rbx
  int v223; // r8d
  LARGE_INTEGER *v224; // rbx
  struct tagTHREADINFO *v225; // r12
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r15
  int v230; // ecx
  LARGE_INTEGER v231; // rbx
  int v232; // r8d
  __int64 v233; // rcx
  int v234; // [rsp+40h] [rbp-20h]
  struct tagTHREADINFO *v235; // [rsp+40h] [rbp-20h]
  struct tagTHREADINFO *v236; // [rsp+40h] [rbp-20h]
  int v237; // [rsp+48h] [rbp-18h] BYREF
  __int64 v238; // [rsp+50h] [rbp-10h]
  char v239; // [rsp+98h] [rbp+38h] BYREF

  v239 = a2;
  v6 = 0;
  v8 = a3;
  v9 = a1;
  v10 = 0;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v235 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v103 = PsGetCurrentThreadWin32Thread(v101, v100, v102);
    if ( v103 )
    {
      v106 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v103 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        Template_xqx(
          v104,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v105,
          v106.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v106.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          1000 * v106.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v105,
          0,
          1000 * v106.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v103 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v235;
    gbValidateHandleForIL = 1;
    UserSessionSwitchLeaveCrit();
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_4:
  if ( !v9 )
  {
    if ( v8 != 20 || !a4 )
      return (unsigned int)-1073741823;
    v28 = *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v28 = *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( v28 )
    {
      v29 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
        v29 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
      if ( v29 )
      {
        v30 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
          v30 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
        if ( v30 )
        {
          v31 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4 )
            v31 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
          if ( v31 )
          {
            v32 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v32 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v32 )
            {
              v72 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v72 )
                v72[1] = KeQueryPerformanceCounter(0LL);
              v73 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v77 = PsGetCurrentThreadWin32Thread(v75, v74, v76);
              if ( v77 )
              {
                v79 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v77 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                  && (qword_1C0186D80 & 0x200000010000000LL) != 0
                  && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  LOBYTE(v78) = byte_1C0186D98 - 1;
                  Template_xqx(
                    v78,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v80,
                    v79.LowPart,
                    0,
                    (char)gullUserCritAcquireToken);
                }
                if ( v79.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                  && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                {
                  Template_xqx(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v80,
                    0,
                    1000 * v79.QuadPart / gliQpcFreq.QuadPart,
                    (char)gullUserCritAcquireToken);
                }
                *(_QWORD *)(v77 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
              }
              gptiCurrent = v73;
              gbValidateHandleForIL = 1;
              dword_1C018C250 = *((_DWORD *)a4 + 4);
              goto LABEL_103;
            }
            v33 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v33 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v33 )
            {
              v81 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v81 )
                v81[1] = KeQueryPerformanceCounter(0LL);
              v82 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v86 = PsGetCurrentThreadWin32Thread(v84, v83, v85);
              if ( v86 )
              {
                v88 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v86 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                  && (qword_1C0186D80 & 0x200000010000000LL) != 0
                  && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  LOBYTE(v87) = byte_1C0186D98 - 1;
                  Template_xqx(
                    v87,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v89,
                    v88.LowPart,
                    0,
                    (char)gullUserCritAcquireToken);
                }
                if ( v88.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                  && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                {
                  Template_xqx(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v89,
                    0,
                    1000 * v88.QuadPart / gliQpcFreq.QuadPart,
                    (char)gullUserCritAcquireToken);
                }
                *(_QWORD *)(v86 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
              }
              gptiCurrent = v82;
              gbValidateHandleForIL = 1;
              dword_1C018C248 = *((_DWORD *)a4 + 4);
              goto LABEL_103;
            }
            v34 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
              v34 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
            if ( !v34 )
            {
              v168 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v168 )
                v168[1] = KeQueryPerformanceCounter(0LL);
              v169 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v173 = PsGetCurrentThreadWin32Thread(v171, v170, v172);
              if ( v173 )
              {
                v175 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v173 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                  && (qword_1C0186D80 & 0x200000010000000LL) != 0
                  && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  LOBYTE(v174) = byte_1C0186D98 - 1;
                  Template_xqx(
                    v174,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v176,
                    v175.LowPart,
                    0,
                    (char)gullUserCritAcquireToken);
                }
                if ( v175.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                  && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                {
                  Template_xqx(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v176,
                    0,
                    1000 * v175.QuadPart / gliQpcFreq.QuadPart,
                    (char)gullUserCritAcquireToken);
                }
                *(_QWORD *)(v173 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
              }
              gptiCurrent = v169;
              gbValidateHandleForIL = 1;
              dword_1C018C258 = *((_DWORD *)a4 + 4);
              goto LABEL_103;
            }
            v35 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4 )
              v35 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)a4 + 1);
            if ( !v35 )
              goto LABEL_424;
            v35 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
              v35 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
            if ( v35 )
            {
              v36 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
                v36 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
              if ( v36 )
              {
                v37 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
                  v37 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v37 )
                {
                  v187 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v187 )
                    v187[1] = KeQueryPerformanceCounter(0LL);
                  v188 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  v192 = PsGetCurrentThreadWin32Thread(v190, v189, v191);
                  if ( v192 )
                  {
                    v194 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v192 + 8));
                    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                      && (qword_1C0186D80 & 0x200000010000000LL) != 0
                      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                    {
                      LOBYTE(v193) = byte_1C0186D98 - 1;
                      Template_xqx(
                        v193,
                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                        v195,
                        v194.LowPart,
                        0,
                        (char)gullUserCritAcquireToken);
                    }
                    if ( v194.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                    {
                      Template_xqx(
                        (_DWORD)gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v195,
                        0,
                        1000 * v194.QuadPart / gliQpcFreq.QuadPart,
                        (char)gullUserCritAcquireToken);
                    }
                    *(_QWORD *)(v192 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                  }
                  gptiCurrent = v188;
                  gbValidateHandleForIL = 1;
                  LOBYTE(v6) = *((_DWORD *)a4 + 4) != 0;
                  dword_1C018C2BC = v6;
                  goto LABEL_103;
                }
                v38 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
                  v38 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v38 )
                {
                  v196 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v196 )
                    v196[1] = KeQueryPerformanceCounter(0LL);
                  v197 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  v201 = PsGetCurrentThreadWin32Thread(v199, v198, v200);
                  if ( v201 )
                  {
                    v203 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v201 + 8));
                    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                      && (qword_1C0186D80 & 0x200000010000000LL) != 0
                      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                    {
                      LOBYTE(v202) = byte_1C0186D98 - 1;
                      Template_xqx(
                        v202,
                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                        v204,
                        v203.LowPart,
                        0,
                        (char)gullUserCritAcquireToken);
                    }
                    if ( v203.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                    {
                      Template_xqx(
                        (_DWORD)gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v204,
                        0,
                        1000 * v203.QuadPart / gliQpcFreq.QuadPart,
                        (char)gullUserCritAcquireToken);
                    }
                    *(_QWORD *)(v201 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                  }
                  gptiCurrent = v197;
                  gbValidateHandleForIL = 1;
                  if ( !*((_DWORD *)a4 + 4) )
                  {
                    dword_1C018C28C = 0;
                    goto LABEL_103;
                  }
                  dword_1C018C28C = 1;
                  v237 = 5;
                  v238 = 13LL;
                  goto LABEL_102;
                }
                v39 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
                  v39 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
                if ( v39 )
                {
                  v40 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                    v40 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                  if ( v40 )
                  {
                    v41 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                    if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                      v41 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                    if ( v41 )
                    {
                      v214 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
                      if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
                        v214 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
                      if ( v214 )
                        return (unsigned int)-1073741823;
                      if ( !*((_DWORD *)a4 + 4) )
                        return v10;
                      v215 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                      if ( v215 )
                        v215[1] = KeQueryPerformanceCounter(0LL);
                      v216 = EnterCritAvoidingDitHitTestHazard(0, 1);
                      v220 = PsGetCurrentThreadWin32Thread(v218, v217, v219);
                      if ( v220 )
                      {
                        v222 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v220 + 8));
                        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                          && (qword_1C0186D80 & 0x200000010000000LL) != 0
                          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                        {
                          LOBYTE(v221) = byte_1C0186D98 - 1;
                          Template_xqx(
                            v221,
                            (unsigned int)&AcquiredExclusiveUserCritEvent,
                            v223,
                            v222.LowPart,
                            0,
                            (char)gullUserCritAcquireToken);
                        }
                        if ( v222.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                        {
                          Template_xqx(
                            (_DWORD)gullUserCritAcquireToken,
                            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                            v223,
                            0,
                            1000 * v222.QuadPart / gliQpcFreq.QuadPart,
                            (char)gullUserCritAcquireToken);
                        }
                        *(_QWORD *)(v220 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                      }
                      gdwUpdateKeyboard |= 2u;
                      gptiCurrent = v216;
                      gbValidateHandleForIL = 1;
                    }
                    else
                    {
                      v42 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                      if ( v42 )
                        v42[1] = KeQueryPerformanceCounter(0LL);
                      v43 = EnterCritAvoidingDitHitTestHazard(0, 1);
                      v47 = PsGetCurrentThreadWin32Thread(v45, v44, v46);
                      if ( v47 )
                      {
                        v49 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v47 + 8));
                        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                          && (qword_1C0186D80 & 0x200000010000000LL) != 0
                          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                        {
                          LOBYTE(v48) = byte_1C0186D98 - 1;
                          Template_xqx(
                            v48,
                            (unsigned int)&AcquiredExclusiveUserCritEvent,
                            v50,
                            v49.LowPart,
                            0,
                            (char)gullUserCritAcquireToken);
                        }
                        if ( v49.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                        {
                          Template_xqx(
                            (_DWORD)gullUserCritAcquireToken,
                            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                            v50,
                            0,
                            1000 * v49.QuadPart / gliQpcFreq.QuadPart,
                            (char)gullUserCritAcquireToken);
                        }
                        *(_QWORD *)(v47 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                      }
                      gptiCurrent = v43;
                      gbValidateHandleForIL = 1;
                      dword_1C018C2B8 = *((_DWORD *)a4 + 4);
                    }
                  }
                  else
                  {
                    v90 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                    if ( v90 )
                      v90[1] = KeQueryPerformanceCounter(0LL);
                    v91 = EnterCritAvoidingDitHitTestHazard(0, 1);
                    v95 = PsGetCurrentThreadWin32Thread(v93, v92, v94);
                    if ( v95 )
                    {
                      v97 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v95 + 8));
                      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                        && (qword_1C0186D80 & 0x200000010000000LL) != 0
                        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                      {
                        LOBYTE(v96) = byte_1C0186D98 - 1;
                        Template_xqx(
                          v96,
                          (unsigned int)&AcquiredExclusiveUserCritEvent,
                          v98,
                          v97.LowPart,
                          0,
                          (char)gullUserCritAcquireToken);
                      }
                      if ( v97.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                      {
                        Template_xqx(
                          (_DWORD)gullUserCritAcquireToken,
                          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                          v98,
                          0,
                          1000 * v97.QuadPart / gliQpcFreq.QuadPart,
                          (char)gullUserCritAcquireToken);
                      }
                      *(_QWORD *)(v95 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                    }
                    gptiCurrent = v91;
                    gbValidateHandleForIL = 1;
                    dword_1C018C25C = *((_DWORD *)a4 + 4);
                  }
                }
                else
                {
                  v205 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
                  if ( v205 )
                    v205[1] = KeQueryPerformanceCounter(0LL);
                  v206 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  v210 = PsGetCurrentThreadWin32Thread(v208, v207, v209);
                  if ( v210 )
                  {
                    v212 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v210 + 8));
                    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                      && (qword_1C0186D80 & 0x200000010000000LL) != 0
                      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                    {
                      LOBYTE(v211) = byte_1C0186D98 - 1;
                      Template_xqx(
                        v211,
                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                        v213,
                        v212.LowPart,
                        0,
                        (char)gullUserCritAcquireToken);
                    }
                    if ( v212.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                    {
                      Template_xqx(
                        (_DWORD)gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v213,
                        0,
                        1000 * v212.QuadPart / gliQpcFreq.QuadPart,
                        (char)gullUserCritAcquireToken);
                    }
                    *(_QWORD *)(v210 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                  }
                  gptiCurrent = v206;
                  gbValidateHandleForIL = 1;
                  dword_1C018C2B4 = *((_DWORD *)a4 + 4);
                }
                goto LABEL_103;
              }
              v177 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
              if ( v177 )
                v177[1] = KeQueryPerformanceCounter(0LL);
              v178 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v182 = PsGetCurrentThreadWin32Thread(v180, v179, v181);
              if ( v182 )
              {
                v184 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v182 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                  && (qword_1C0186D80 & 0x200000010000000LL) != 0
                  && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  LOBYTE(v183) = byte_1C0186D98 - 1;
                  Template_xqx(
                    v183,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v185,
                    v184.LowPart,
                    0,
                    (char)gullUserCritAcquireToken);
                }
                if ( v184.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                  && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                {
                  Template_xqx(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v185,
                    0,
                    1000 * v184.QuadPart / gliQpcFreq.QuadPart,
                    (char)gullUserCritAcquireToken);
                }
                *(_QWORD *)(v182 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
              }
              gptiCurrent = v178;
              gbValidateHandleForIL = 1;
              if ( gbTtmEnabled || gProtocolType || dword_1C018C298 )
                goto LABEL_103;
              v186 = MonitorRequestReasonBatteryCountChange;
            }
            else
            {
LABEL_424:
              v224 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v35, a2, a3);
              if ( v224 )
                v224[1] = KeQueryPerformanceCounter(0LL);
              v225 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v229 = PsGetCurrentThreadWin32Thread(v227, v226, v228);
              if ( v229 )
              {
                v231 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v229 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                  && (qword_1C0186D80 & 0x200000010000000LL) != 0
                  && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  LOBYTE(v230) = byte_1C0186D98 - 1;
                  Template_xqx(
                    v230,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v232,
                    v231.LowPart,
                    0,
                    (char)gullUserCritAcquireToken);
                }
                if ( v231.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                  && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                {
                  Template_xqx(
                    (_DWORD)gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v232,
                    0,
                    1000 * v231.QuadPart / gliQpcFreq.QuadPart,
                    (char)gullUserCritAcquireToken);
                }
                *(_QWORD *)(v229 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
              }
              gptiCurrent = v225;
              gbValidateHandleForIL = 1;
              if ( gSqmIsOptedIn && !gProtocolType )
                SqmPowerState();
              dword_1C018C298 = *((_DWORD *)a4 + 4) == 0;
              v233 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
                v233 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
              if ( !v233 || gbTtmEnabled || gProtocolType )
                goto LABEL_103;
              v186 = MonitorRequestReasonAcDcDisplayBurst;
            }
            PowerDisplayBurst(v186);
            goto LABEL_103;
          }
          v63 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
          if ( v63 )
            v63[1] = KeQueryPerformanceCounter(0LL);
          v64 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v68 = PsGetCurrentThreadWin32Thread(v66, v65, v67);
          if ( v68 )
          {
            v70 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v68 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
              && (qword_1C0186D80 & 0x200000010000000LL) != 0
              && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              LOBYTE(v69) = byte_1C0186D98 - 1;
              Template_xqx(
                v69,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v71,
                v70.LowPart,
                0,
                (char)gullUserCritAcquireToken);
            }
            if ( v70.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
              && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            {
              Template_xqx(
                (_DWORD)gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v71,
                0,
                1000 * v70.QuadPart / gliQpcFreq.QuadPart,
                (char)gullUserCritAcquireToken);
            }
            *(_QWORD *)(v68 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
          }
          gptiCurrent = v64;
          gbValidateHandleForIL = 1;
          giDimTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
        }
        else
        {
          v159 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
          if ( v159 )
            v159[1] = KeQueryPerformanceCounter(0LL);
          v160 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v164 = PsGetCurrentThreadWin32Thread(v162, v161, v163);
          if ( v164 )
          {
            v166 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v164 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
              && (qword_1C0186D80 & 0x200000010000000LL) != 0
              && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              LOBYTE(v165) = byte_1C0186D98 - 1;
              Template_xqx(
                v165,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v167,
                v166.LowPart,
                0,
                (char)gullUserCritAcquireToken);
            }
            if ( v166.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
              && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            {
              Template_xqx(
                (_DWORD)gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v167,
                0,
                1000 * v166.QuadPart / gliQpcFreq.QuadPart,
                (char)gullUserCritAcquireToken);
            }
            *(_QWORD *)(v164 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
          }
          gptiCurrent = v160;
          gbValidateHandleForIL = 1;
          if ( gProtocolType )
            goto LABEL_103;
          giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
          if ( giPowerSessionActivityTimeOutMs )
            gPowerAdaptiveState = 0;
        }
      }
      else
      {
        v150 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        if ( v150 )
          v150[1] = KeQueryPerformanceCounter(0LL);
        v151 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v155 = PsGetCurrentThreadWin32Thread(v153, v152, v154);
        if ( v155 )
        {
          v157 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v155 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v156) = byte_1C0186D98 - 1;
            Template_xqx(
              v156,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v158,
              v157.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
          if ( v157.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            Template_xqx(
              (_DWORD)gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v158,
              0,
              1000 * v157.QuadPart / gliQpcFreq.QuadPart,
              (char)gullUserCritAcquireToken);
          }
          *(_QWORD *)(v155 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        gptiCurrent = v151;
        gbValidateHandleForIL = 1;
        if ( !gProtocolType || !dword_1C018C1FC )
          goto LABEL_103;
        giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      }
    }
    else
    {
      v141 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3);
      if ( v141 )
        v141[1] = KeQueryPerformanceCounter(0LL);
      v142 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v146 = PsGetCurrentThreadWin32Thread(v144, v143, v145);
      if ( v146 )
      {
        v148 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v146 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v147) = byte_1C0186D98 - 1;
          Template_xqx(
            v147,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v149,
            v148.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
        if ( v148.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v149,
            0,
            1000 * v148.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v146 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v142;
      gbValidateHandleForIL = 1;
      if ( gProtocolType )
        goto LABEL_103;
      giPowerOffTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_103;
  }
  v11 = v9 - 1;
  if ( !v11 )
  {
    if ( v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v51 = *a4;
    v52 = *((int *)a4 + 1);
    v234 = a4[1];
    v53 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( v53 )
      v53[1] = KeQueryPerformanceCounter(0LL);
    v54 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v58 = PsGetCurrentThreadWin32Thread(v56, v55, v57);
    if ( v58 )
    {
      v60 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v58 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v59) = byte_1C0186D98 - 1;
        Template_xqx(
          v59,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v61,
          v60.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v60.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v61,
          0,
          1000 * v60.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v58 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v54;
    gbValidateHandleForIL = 1;
    if ( !v51 || !gbBlockSendInputResets )
    {
      v62 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      CInputGlobals::UpdateLastInputTime((__int64)gpInputGlobals, v62, 4);
      if ( qword_1C018E8C8 )
        *((_WORD *)qword_1C018E8C8 + 502) = 0;
      CitpLastInputUpdate(0x20u, v62);
      if ( !v234 )
      {
        if ( dword_1C018C290 )
        {
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v52);
          goto LABEL_103;
        }
        v237 = 4;
        v238 = v52;
        goto LABEL_102;
      }
    }
LABEL_103:
    UserSessionSwitchLeaveCrit();
    return v10;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v107 = v12 - 1;
    if ( v107 )
    {
      v108 = v107 - 1;
      if ( !v108 )
      {
        if ( v8 != 32 || !a4 )
          return (unsigned int)-1073741811;
        v121 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
        if ( v121 )
          v121[1] = KeQueryPerformanceCounter(0LL);
        v122 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v124, v123, v125);
        gptiCurrent = v122;
        gbValidateHandleForIL = 1;
        v126 = *(_DWORD *)a4;
        dword_1C018C264 = *(_DWORD *)a4;
        v127 = *((_DWORD *)a4 + 1);
        dword_1C018C268 = v127;
        dword_1C018C26C = *((_DWORD *)a4 + 2);
        dword_1C018C270 = *((_DWORD *)a4 + 3);
        v128 = *((unsigned int *)a4 + 4);
        dword_1C018C274 = *((_DWORD *)a4 + 4);
        dword_1C018C278 = *((_DWORD *)a4 + 5);
        dword_1C018C27C = *((_DWORD *)a4 + 6);
        dword_1C018C280 = *((_DWORD *)a4 + 7);
        if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && v127 != -1 )
        {
          if ( qword_1C018BE90 )
          {
            LOBYTE(v128) = 1;
            v129 = qword_1C018BE90(v128, a4);
            LODWORD(v128) = dword_1C018C274;
            v10 = v129;
            v126 = dword_1C018C264;
          }
          else
          {
            v10 = -1073741637;
          }
          LOBYTE(v6) = (v10 & 0x80000000) == 0;
          gbPowerHighPrecisionBrightnessSupported = v6;
        }
        v130 = dword_1C018C240;
        dword_1C018C248 = v126;
        dword_1C018C24C = v126;
        dword_1C018C250 = v128;
        dword_1C018C254 = v128;
        if ( dword_1C018C240 == 1 )
        {
          if ( dword_1C018C260 == v126 )
            goto LABEL_103;
          v237 = 11;
          v238 = 1LL;
          QueuePowerRequest(&v237, 0LL);
          LODWORD(v128) = dword_1C018C274;
          v130 = dword_1C018C240;
        }
        if ( v130 != 2 || dword_1C018C260 == (_DWORD)v128 )
          goto LABEL_103;
        v237 = 11;
        v238 = 2LL;
        goto LABEL_102;
      }
      v109 = v108 - 1;
      if ( v109 )
      {
        v110 = v109 - 1;
        if ( v110 )
        {
          if ( v110 == 1 && v8 == 4 && a4 )
          {
            v111 = *(int *)a4;
            LOBYTE(a2) = 1;
            v237 = 15;
LABEL_178:
            v238 = v111;
LABEL_184:
            QueuePowerRequest(&v237, a2);
            return v10;
          }
        }
        else if ( v8 == 8 && a4 )
        {
          UserSessionSwitchBlock_Start();
          a2 = 0LL;
          v238 = *((int *)a4 + 1);
          if ( *a4 )
            v237 = 13;
          else
            v237 = 14;
          goto LABEL_184;
        }
        return (unsigned int)-1073741823;
      }
      v112 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
      if ( v112 )
        v112[1] = KeQueryPerformanceCounter(0LL);
      v113 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v117 = PsGetCurrentThreadWin32Thread(v115, v114, v116);
      if ( v117 )
      {
        v119 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v117 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          Template_xqx(
            v118,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v120,
            v119.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
        if ( v119.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            1000 * v119.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v120,
            0,
            1000 * v119.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v117 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v113;
      gbValidateHandleForIL = 1;
      if ( gWakeInProgress )
      {
        v238 = gWakeInProgressReason;
        gWakeInProgress = 0;
        gWakeInProgressReason = MonitorRequestReasonUnknown;
        v237 = 12;
LABEL_102:
        QueuePowerRequest(&v237, 0LL);
        goto LABEL_103;
      }
      goto LABEL_103;
    }
    if ( v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v131 = 0;
    v132 = 0;
    if ( *(_DWORD *)a4 )
    {
      if ( *(_DWORD *)a4 == 1 )
      {
        v132 = 1;
LABEL_242:
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          4);
        goto LABEL_243;
      }
      if ( *(_DWORD *)a4 != 2 )
      {
LABEL_243:
        if ( v131 )
        {
          if ( gSystemIsAoAc )
            SetInputMode(1LL);
        }
        else if ( !v132 )
        {
          return v10;
        }
        v237 = 5 - (v132 != 0);
        a2 = 0LL;
        v111 = *((int *)a4 + 1);
        goto LABEL_178;
      }
      v133 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread((unsigned int)(*(_DWORD *)a4 - 1), a2, a3);
      if ( v133 )
        v133[1] = KeQueryPerformanceCounter(0LL);
      v236 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v137 = PsGetCurrentThreadWin32Thread(v135, v134, v136);
      if ( v137 )
      {
        v140 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v137 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v138) = byte_1C0186D98 - 1;
          Template_xqx(
            v138,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v139,
            v140.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
        if ( v140.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v139,
            0,
            1000 * v140.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v137 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v236;
      gbValidateHandleForIL = 1;
      if ( gPowerTransitionsState )
        v10 = 255;
      else
        v132 = 1;
      UserSessionSwitchLeaveCrit();
    }
    else
    {
      v131 = 1;
    }
    if ( v132 )
      goto LABEL_242;
    goto LABEL_243;
  }
  if ( v8 != 4 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( a5 != 4 )
    return (unsigned int)-1073741811;
  v13 = a6;
  if ( !a6 )
    return (unsigned int)-1073741811;
  v14 = *(_DWORD *)a4;
  v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( v15 )
    v15[1] = KeQueryPerformanceCounter(0LL);
  v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v20 = PsGetCurrentThreadWin32Thread(v18, v17, v19);
  if ( v20 )
  {
    v22 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v20 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v21) = byte_1C0186D98 - 1;
      Template_xqx(
        v21,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v23,
        v22.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v22.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v23,
        0,
        1000 * v22.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v20 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v24 = dword_1C018C238;
  gptiCurrent = v16;
  gbValidateHandleForIL = 1;
  v25 = dword_1C018C238 + v14;
  dword_1C018C238 += v14;
  if ( v24 != 1 )
  {
    if ( !v24 && v25 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange();
    }
    v26 = v25 <= 0;
LABEL_22:
    v239 = 1;
    if ( !v26 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v26 = v25 <= 0;
  if ( v25 )
    goto LABEL_22;
  CitDisplayRequestChange(0);
  EtwTraceDisplayReqChange();
  if ( !gbBlockSendInputResets )
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9);
LABEL_23:
  v239 = 0;
LABEL_24:
  ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v239, 1LL, 0LL, &gSessionId, 0, 0);
  UserSessionSwitchLeaveCrit();
  if ( !v24 && v25 == 1 && dword_1C018C240 == 2 )
  {
    v237 = 4;
    v238 = 0LL;
    QueuePowerRequest(&v237, 0LL);
  }
  if ( v25 >= 0 )
    v6 = v25;
  *v13 = v6;
  return v10;
}
