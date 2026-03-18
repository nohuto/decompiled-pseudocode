/*
 * XREFs of UserPowerInfoCallout @ 0x1C0076738
 * Callers:
 *     W32CalloutDispatch @ 0x1C0048FA0 (W32CalloutDispatch.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0011690 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0022F64 (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceDisplayReqChange @ 0x1C0076EA8 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C0076ED0 (CitDisplayRequestChange.c)
 *     QueuePowerRequest @ 0x1C00771C0 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0078018 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0078290 (SqmPowerState.c)
 *     SetPendingInput @ 0x1C00A5E00 (SetPendingInput.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A5E48 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC88C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5, int *a6)
{
  int v6; // edi
  int v8; // r12d
  int v9; // r15d
  unsigned int v10; // r14d
  int v11; // r15d
  int v12; // r15d
  int *v13; // r15
  int v14; // r12d
  LARGE_INTEGER *v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rsi
  int v22; // esi
  int v23; // ebx
  bool v24; // cc
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
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
  __int64 v42; // rcx
  __int64 v43; // rcx
  LARGE_INTEGER *v44; // rbx
  struct tagTHREADINFO *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  char v55; // r12
  char v56; // r13
  __int64 v57; // r15
  LARGE_INTEGER *v58; // rbx
  struct tagTHREADINFO *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rsi
  __int64 v65; // rbx
  LARGE_INTEGER *v66; // rbx
  struct tagTHREADINFO *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // r15
  LARGE_INTEGER *v73; // rbx
  struct tagTHREADINFO *v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // r15
  LARGE_INTEGER *v80; // rbx
  struct tagTHREADINFO *v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // r15
  LARGE_INTEGER *v87; // rbx
  struct tagTHREADINFO *v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 *v93; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // r13
  __int64 *DomainLockRef; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // r15d
  int v107; // r15d
  int v108; // r15d
  int v109; // r15d
  __int64 v110; // rax
  LARGE_INTEGER *v111; // rbx
  struct tagTHREADINFO *v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // rsi
  __int64 *v118; // rbx
  LARGE_INTEGER *v119; // rbx
  struct tagTHREADINFO *v120; // rbx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 *v125; // r15
  __int64 *v126; // rbx
  __int64 v127; // rcx
  char v128; // r13
  char v129; // r15
  LARGE_INTEGER *v130; // rbx
  struct tagTHREADINFO *v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 *v136; // r12
  __int64 *v137; // rbx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 *v142; // rbx
  __int64 *v143; // rbx
  LARGE_INTEGER *v144; // rbx
  struct tagTHREADINFO *v145; // rbx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 *v150; // r15
  __int64 *v151; // rbx
  LARGE_INTEGER *v152; // rbx
  struct tagTHREADINFO *v153; // rbx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 *v158; // r15
  __int64 *v159; // rbx
  LARGE_INTEGER *v160; // rbx
  struct tagTHREADINFO *v161; // rbx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 *v166; // r15
  __int64 *v167; // rbx
  __int64 *v168; // rbx
  __int64 *v169; // rbx
  __int64 *v170; // rbx
  LARGE_INTEGER *v171; // rbx
  struct tagTHREADINFO *v172; // rbx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 *v177; // r15
  __int64 *v178; // rbx
  LARGE_INTEGER *v179; // rbx
  struct tagTHREADINFO *v180; // rbx
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 *v185; // rsi
  __int64 *v186; // rbx
  enum POWER_MONITOR_REQUEST_REASON v187; // ecx
  LARGE_INTEGER *v188; // rbx
  struct tagTHREADINFO *v189; // rbx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 *v194; // r15
  __int64 *v195; // rbx
  LARGE_INTEGER *v196; // rbx
  struct tagTHREADINFO *v197; // rbx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 *v202; // r15
  __int64 *v203; // rbx
  LARGE_INTEGER *v204; // rbx
  struct tagTHREADINFO *v205; // rbx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 *v210; // r15
  __int64 *v211; // rbx
  __int64 *v212; // rbx
  __int64 *v213; // rbx
  __int64 v214; // rcx
  LARGE_INTEGER *v215; // rbx
  struct tagTHREADINFO *v216; // rbx
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 *v221; // rsi
  __int64 *v222; // rbx
  __int64 v223; // rcx
  LARGE_INTEGER *v224; // rbx
  struct tagTHREADINFO *v225; // rbx
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 *v230; // r15
  __int64 *v231; // rbx
  LARGE_INTEGER *v232; // rbx
  struct tagTHREADINFO *v233; // rbx
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 *v238; // r15
  __int64 *v239; // rbx
  __int64 v240; // [rsp+48h] [rbp-99h] BYREF
  __int64 v241; // [rsp+50h] [rbp-91h]
  tagObjLock *v242; // [rsp+58h] [rbp-89h] BYREF
  tagObjLock *v243; // [rsp+60h] [rbp-81h] BYREF
  tagObjLock *v244; // [rsp+68h] [rbp-79h] BYREF
  tagObjLock *v245; // [rsp+70h] [rbp-71h] BYREF
  tagObjLock *v246; // [rsp+78h] [rbp-69h] BYREF
  tagObjLock *v247; // [rsp+80h] [rbp-61h] BYREF
  tagObjLock *v248; // [rsp+88h] [rbp-59h] BYREF
  tagObjLock *v249; // [rsp+90h] [rbp-51h] BYREF
  tagObjLock *v250; // [rsp+98h] [rbp-49h] BYREF
  tagObjLock *v251; // [rsp+A0h] [rbp-41h] BYREF
  tagObjLock *v252; // [rsp+A8h] [rbp-39h] BYREF
  tagObjLock *v253; // [rsp+B0h] [rbp-31h] BYREF
  tagObjLock *v254; // [rsp+B8h] [rbp-29h] BYREF
  tagObjLock *v255; // [rsp+C0h] [rbp-21h] BYREF
  tagObjLock *v256; // [rsp+C8h] [rbp-19h] BYREF
  tagObjLock *v257; // [rsp+D0h] [rbp-11h] BYREF
  tagObjLock *v258; // [rsp+D8h] [rbp-9h] BYREF
  tagObjLock *v259; // [rsp+E0h] [rbp-1h] BYREF
  tagObjLock *v260; // [rsp+E8h] [rbp+7h] BYREF
  tagObjLock *v261; // [rsp+F0h] [rbp+Fh] BYREF
  tagObjLock *v262; // [rsp+F8h] [rbp+17h] BYREF
  tagObjLock *v263; // [rsp+100h] [rbp+1Fh] BYREF
  char v264; // [rsp+140h] [rbp+5Fh] BYREF

  v264 = a2;
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
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v95 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v97, v96, v98, v99);
    gptiCurrent = v95;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v242);
    v100 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v100[2];
        v100[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v100);
        RIMLockExclusive((__int64)DomainLockRef);
        v100 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v242);
    UserSessionSwitchLeaveCrit(v103, v102, v104, v105);
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_4:
  if ( !v9 )
  {
    if ( v8 != 20 || !a4 )
      return (unsigned int)-1073741823;
    v30 = *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v30 = *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( v30 )
    {
      v31 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
        v31 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
      if ( v31 )
      {
        v32 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
          v32 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
        if ( v32 )
        {
          v33 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4 )
            v33 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
          if ( v33 )
          {
            v34 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v34 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v34 )
            {
              v73 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
              if ( v73 )
                v73[1] = KeQueryPerformanceCounter(0LL);
              v74 = EnterCritAvoidingDitHitTestHazard(0, 1);
              EtwTraceAcquiredExclusiveUserCrit(v76, v75, v77, v78);
              gptiCurrent = v74;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v252);
              v79 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                v169 = GetDomainLockRef(8);
                do
                {
                  gpducstulHead = v79[2];
                  v79[2] = 0LL;
                  tagObjLock::UnLock((tagObjLock *)v169);
                  HMUnlockObject(*v79);
                  RIMLockExclusive((__int64)v169);
                  v79 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
              }
              tagObjLock::UnLock(v252);
              dword_1C0190F80 = a4[4];
              goto LABEL_90;
            }
            v35 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v35 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( !v35 )
            {
              v80 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
              if ( v80 )
                v80[1] = KeQueryPerformanceCounter(0LL);
              v81 = EnterCritAvoidingDitHitTestHazard(0, 1);
              EtwTraceAcquiredExclusiveUserCrit(v83, v82, v84, v85);
              gptiCurrent = v81;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v253);
              v86 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                v170 = GetDomainLockRef(8);
                do
                {
                  gpducstulHead = v86[2];
                  v86[2] = 0LL;
                  tagObjLock::UnLock((tagObjLock *)v170);
                  HMUnlockObject(*v86);
                  RIMLockExclusive((__int64)v170);
                  v86 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
              }
              tagObjLock::UnLock(v253);
              dword_1C0190F78 = a4[4];
              goto LABEL_90;
            }
            v36 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
              v36 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
            if ( !v36 )
            {
              v171 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
              if ( v171 )
                v171[1] = KeQueryPerformanceCounter(0LL);
              v172 = EnterCritAvoidingDitHitTestHazard(0, 1);
              EtwTraceAcquiredExclusiveUserCrit(v174, v173, v175, v176);
              gptiCurrent = v172;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v254);
              v177 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                v178 = GetDomainLockRef(8);
                do
                {
                  gpducstulHead = v177[2];
                  v177[2] = 0LL;
                  tagObjLock::UnLock((tagObjLock *)v178);
                  HMUnlockObject(*v177);
                  RIMLockExclusive((__int64)v178);
                  v177 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
              }
              tagObjLock::UnLock(v254);
              dword_1C0190F88 = a4[4];
              goto LABEL_90;
            }
            v37 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4 )
              v37 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)a4 + 1);
            if ( !v37 )
              goto LABEL_289;
            v37 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
              v37 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
            if ( v37 )
            {
              v38 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
                v38 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
              if ( v38 )
              {
                v39 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
                  v39 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v39 )
                {
                  v188 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
                  if ( v188 )
                    v188[1] = KeQueryPerformanceCounter(0LL);
                  v189 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  EtwTraceAcquiredExclusiveUserCrit(v191, v190, v192, v193);
                  gptiCurrent = v189;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v256);
                  v194 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    v195 = GetDomainLockRef(8);
                    do
                    {
                      gpducstulHead = v194[2];
                      v194[2] = 0LL;
                      tagObjLock::UnLock((tagObjLock *)v195);
                      HMUnlockObject(*v194);
                      RIMLockExclusive((__int64)v195);
                      v194 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                  }
                  tagObjLock::UnLock(v256);
                  LOBYTE(v6) = a4[4] != 0;
                  dword_1C0190FEC = v6;
                  goto LABEL_90;
                }
                v40 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
                  v40 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
                if ( !v40 )
                {
                  v196 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
                  if ( v196 )
                    v196[1] = KeQueryPerformanceCounter(0LL);
                  v197 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  EtwTraceAcquiredExclusiveUserCrit(v199, v198, v200, v201);
                  gptiCurrent = v197;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v257);
                  v202 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    v203 = GetDomainLockRef(8);
                    do
                    {
                      gpducstulHead = v202[2];
                      v202[2] = 0LL;
                      tagObjLock::UnLock((tagObjLock *)v203);
                      HMUnlockObject(*v202);
                      RIMLockExclusive((__int64)v203);
                      v202 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                  }
                  tagObjLock::UnLock(v257);
                  if ( !a4[4] )
                  {
                    dword_1C0190FBC = 0;
                    goto LABEL_90;
                  }
                  dword_1C0190FBC = 1;
                  LODWORD(v240) = 5;
                  v241 = 13LL;
                  goto LABEL_89;
                }
                v41 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
                if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
                  v41 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
                if ( v41 )
                {
                  v42 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                    v42 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                  if ( v42 )
                  {
                    v43 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)a4;
                    if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                      v43 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
                    if ( v43 )
                    {
                      v214 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
                      if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
                        v214 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
                      if ( v214 )
                      {
                        v223 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)a4;
                        if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4 )
                          v223 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)a4 + 1);
                        if ( v223 )
                          return (unsigned int)-1073741823;
                        v224 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
                        if ( v224 )
                          v224[1] = KeQueryPerformanceCounter(0LL);
                        v225 = EnterCritAvoidingDitHitTestHazard(0, 1);
                        EtwTraceAcquiredExclusiveUserCrit(v227, v226, v228, v229);
                        gptiCurrent = v225;
                        gbValidateHandleForIL = 1;
                        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v262);
                        v230 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          v231 = GetDomainLockRef(8);
                          do
                          {
                            gpducstulHead = v230[2];
                            v230[2] = 0LL;
                            tagObjLock::UnLock((tagObjLock *)v231);
                            HMUnlockObject(*v230);
                            RIMLockExclusive((__int64)v231);
                            v230 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                        }
                        tagObjLock::UnLock(v262);
                        LOBYTE(v6) = a4[4] != 0;
                        dword_1C0190FF0 = v6;
                      }
                      else
                      {
                        if ( !a4[4] )
                          return v10;
                        v215 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
                        if ( v215 )
                          v215[1] = KeQueryPerformanceCounter(0LL);
                        v216 = EnterCritAvoidingDitHitTestHazard(0, 1);
                        EtwTraceAcquiredExclusiveUserCrit(v218, v217, v219, v220);
                        gptiCurrent = v216;
                        gbValidateHandleForIL = 1;
                        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v261);
                        v221 = (__int64 *)gpducstulHead;
                        if ( gpducstulHead )
                        {
                          v222 = GetDomainLockRef(8);
                          do
                          {
                            gpducstulHead = v221[2];
                            v221[2] = 0LL;
                            tagObjLock::UnLock((tagObjLock *)v222);
                            HMUnlockObject(*v221);
                            RIMLockExclusive((__int64)v222);
                            v221 = (__int64 *)gpducstulHead;
                          }
                          while ( gpducstulHead );
                        }
                        tagObjLock::UnLock(v261);
                        gdwUpdateKeyboard |= 2u;
                      }
                    }
                    else
                    {
                      v44 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
                      if ( v44 )
                        v44[1] = KeQueryPerformanceCounter(0LL);
                      v45 = EnterCritAvoidingDitHitTestHazard(0, 1);
                      EtwTraceAcquiredExclusiveUserCrit(v47, v46, v48, v49);
                      gptiCurrent = v45;
                      gbValidateHandleForIL = 1;
                      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v260);
                      v50 = (__int64 *)gpducstulHead;
                      if ( gpducstulHead )
                      {
                        v213 = GetDomainLockRef(8);
                        do
                        {
                          gpducstulHead = v50[2];
                          v50[2] = 0LL;
                          tagObjLock::UnLock((tagObjLock *)v213);
                          HMUnlockObject(*v50);
                          RIMLockExclusive((__int64)v213);
                          v50 = (__int64 *)gpducstulHead;
                        }
                        while ( gpducstulHead );
                      }
                      tagObjLock::UnLock(v260);
                      dword_1C0190FE8 = a4[4];
                    }
                  }
                  else
                  {
                    v87 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
                    if ( v87 )
                      v87[1] = KeQueryPerformanceCounter(0LL);
                    v88 = EnterCritAvoidingDitHitTestHazard(0, 1);
                    EtwTraceAcquiredExclusiveUserCrit(v90, v89, v91, v92);
                    gptiCurrent = v88;
                    gbValidateHandleForIL = 1;
                    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v259);
                    v93 = (__int64 *)gpducstulHead;
                    if ( gpducstulHead )
                    {
                      v212 = GetDomainLockRef(8);
                      do
                      {
                        gpducstulHead = v93[2];
                        v93[2] = 0LL;
                        tagObjLock::UnLock((tagObjLock *)v212);
                        HMUnlockObject(*v93);
                        RIMLockExclusive((__int64)v212);
                        v93 = (__int64 *)gpducstulHead;
                      }
                      while ( gpducstulHead );
                    }
                    tagObjLock::UnLock(v259);
                    dword_1C0190F8C = a4[4];
                  }
                }
                else
                {
                  v204 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
                  if ( v204 )
                    v204[1] = KeQueryPerformanceCounter(0LL);
                  v205 = EnterCritAvoidingDitHitTestHazard(0, 1);
                  EtwTraceAcquiredExclusiveUserCrit(v207, v206, v208, v209);
                  gptiCurrent = v205;
                  gbValidateHandleForIL = 1;
                  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v258);
                  v210 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    v211 = GetDomainLockRef(8);
                    do
                    {
                      gpducstulHead = v210[2];
                      v210[2] = 0LL;
                      tagObjLock::UnLock((tagObjLock *)v211);
                      HMUnlockObject(*v210);
                      RIMLockExclusive((__int64)v211);
                      v210 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                  }
                  tagObjLock::UnLock(v258);
                  dword_1C0190FE4 = a4[4];
                }
                goto LABEL_90;
              }
              v179 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
              if ( v179 )
                v179[1] = KeQueryPerformanceCounter(0LL);
              v180 = EnterCritAvoidingDitHitTestHazard(0, 1);
              EtwTraceAcquiredExclusiveUserCrit(v182, v181, v183, v184);
              gptiCurrent = v180;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v255);
              v185 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                v186 = GetDomainLockRef(8);
                do
                {
                  gpducstulHead = v185[2];
                  v185[2] = 0LL;
                  tagObjLock::UnLock((tagObjLock *)v186);
                  HMUnlockObject(*v185);
                  RIMLockExclusive((__int64)v186);
                  v185 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
              }
              tagObjLock::UnLock(v255);
              if ( gbTtmEnabled || gProtocolType || dword_1C0190FC8 )
                goto LABEL_90;
              v187 = MonitorRequestReasonBatteryCountChange;
            }
            else
            {
LABEL_289:
              v232 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v37, a2, a3, a4);
              if ( v232 )
                v232[1] = KeQueryPerformanceCounter(0LL);
              v233 = EnterCritAvoidingDitHitTestHazard(0, 1);
              EtwTraceAcquiredExclusiveUserCrit(v235, v234, v236, v237);
              gptiCurrent = v233;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v263);
              v238 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                v239 = GetDomainLockRef(8);
                do
                {
                  gpducstulHead = v238[2];
                  v238[2] = 0LL;
                  tagObjLock::UnLock((tagObjLock *)v239);
                  HMUnlockObject(*v238);
                  RIMLockExclusive((__int64)v239);
                  v238 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
              }
              tagObjLock::UnLock(v263);
              if ( gSqmIsOptedIn && !gProtocolType )
                SqmPowerState();
              dword_1C0190FC8 = a4[4] == 0;
              v52 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
                v52 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
              if ( !v52 || gbTtmEnabled || gProtocolType )
                goto LABEL_90;
              v187 = MonitorRequestReasonAcDcDisplayBurst;
            }
            PowerDisplayBurst(v187);
            goto LABEL_90;
          }
          v66 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
          if ( v66 )
            v66[1] = KeQueryPerformanceCounter(0LL);
          v67 = EnterCritAvoidingDitHitTestHazard(0, 1);
          EtwTraceAcquiredExclusiveUserCrit(v69, v68, v70, v71);
          gptiCurrent = v67;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v251);
          v72 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            v168 = GetDomainLockRef(8);
            do
            {
              gpducstulHead = v72[2];
              v72[2] = 0LL;
              tagObjLock::UnLock((tagObjLock *)v168);
              HMUnlockObject(*v72);
              RIMLockExclusive((__int64)v168);
              v72 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
          }
          tagObjLock::UnLock(v251);
          giDimTimeOutMs = 1000 * a4[4];
        }
        else
        {
          v160 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
          if ( v160 )
            v160[1] = KeQueryPerformanceCounter(0LL);
          v161 = EnterCritAvoidingDitHitTestHazard(0, 1);
          EtwTraceAcquiredExclusiveUserCrit(v163, v162, v164, v165);
          gptiCurrent = v161;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v250);
          v166 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            v167 = GetDomainLockRef(8);
            do
            {
              gpducstulHead = v166[2];
              v166[2] = 0LL;
              tagObjLock::UnLock((tagObjLock *)v167);
              HMUnlockObject(*v166);
              RIMLockExclusive((__int64)v167);
              v166 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
          }
          tagObjLock::UnLock(v250);
          if ( gProtocolType )
            goto LABEL_90;
          giPowerSessionActivityTimeOutMs = 1000 * a4[4];
          if ( giPowerSessionActivityTimeOutMs )
            gPowerAdaptiveState = 0;
        }
      }
      else
      {
        v152 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
        if ( v152 )
          v152[1] = KeQueryPerformanceCounter(0LL);
        v153 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v155, v154, v156, v157);
        gptiCurrent = v153;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v249);
        v158 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          v159 = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v158[2];
            v158[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)v159);
            HMUnlockObject(*v158);
            RIMLockExclusive((__int64)v159);
            v158 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        tagObjLock::UnLock(v249);
        if ( !gProtocolType || !dword_1C0190F2C )
          goto LABEL_90;
        giPowerSessionActivityTimeOutMs = 1000 * a4[4];
      }
    }
    else
    {
      v144 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL, a2, a3, a4);
      if ( v144 )
        v144[1] = KeQueryPerformanceCounter(0LL);
      v145 = EnterCritAvoidingDitHitTestHazard(0, 1);
      EtwTraceAcquiredExclusiveUserCrit(v147, v146, v148, v149);
      gptiCurrent = v145;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v248);
      v150 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        v151 = GetDomainLockRef(8);
        do
        {
          gpducstulHead = v150[2];
          v150[2] = 0LL;
          tagObjLock::UnLock((tagObjLock *)v151);
          HMUnlockObject(*v150);
          RIMLockExclusive((__int64)v151);
          v150 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v248);
      if ( gProtocolType )
        goto LABEL_90;
      giPowerOffTimeOutMs = 1000 * a4[4];
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_90;
  }
  v11 = v9 - 1;
  if ( !v11 )
  {
    if ( v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v55 = *(_BYTE *)a4;
    v56 = *((_BYTE *)a4 + 1);
    v57 = a4[1];
    v58 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
    if ( v58 )
      v58[1] = KeQueryPerformanceCounter(0LL);
    v59 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v61, v60, v62, v63);
    gptiCurrent = v59;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v247);
    v64 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      v143 = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v64[2];
        v64[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)v143);
        HMUnlockObject(*v64);
        RIMLockExclusive((__int64)v143);
        v64 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v247);
    if ( !v55 || !gbBlockSendInputResets )
    {
      v65 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      CInputGlobals::UpdateLastInputTime((__int64)gpInputGlobals, v65, 4);
      CitpLastInputUpdate(0x20u, v65);
      if ( !v56 )
      {
        if ( dword_1C0190FC0 )
        {
          LOBYTE(v51) = *(_BYTE *)gpbIgnoreSleepInput;
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v57);
          goto LABEL_90;
        }
        LODWORD(v240) = 4;
        v241 = v57;
        goto LABEL_89;
      }
    }
LABEL_90:
    UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
    return v10;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v106 = v12 - 1;
    if ( v106 )
    {
      v107 = v106 - 1;
      if ( !v107 )
      {
        if ( v8 != 32 || !a4 )
          return (unsigned int)-1073741811;
        v119 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
        if ( v119 )
          v119[1] = KeQueryPerformanceCounter(0LL);
        v120 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v122, v121, v123, v124);
        gptiCurrent = v120;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v244);
        v125 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          v126 = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v125[2];
            v125[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)v126);
            HMUnlockObject(*v125);
            RIMLockExclusive((__int64)v126);
            v125 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        tagObjLock::UnLock(v244);
        dword_1C0190F94 = *a4;
        v127 = (unsigned int)a4[1];
        dword_1C0190F98 = a4[1];
        dword_1C0190F9C = a4[2];
        dword_1C0190FA0 = a4[3];
        dword_1C0190FA4 = a4[4];
        dword_1C0190FA8 = a4[5];
        dword_1C0190FAC = a4[6];
        dword_1C0190FB0 = a4[7];
        if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v127 != -1 )
        {
          if ( qword_1C0190B10 )
          {
            LOBYTE(v127) = 1;
            v10 = qword_1C0190B10(v127, a4);
          }
          else
          {
            v10 = -1073741637;
          }
          LOBYTE(v6) = (v10 & 0x80000000) == 0;
          gbPowerHighPrecisionBrightnessSupported = v6;
        }
        v52 = (unsigned int)dword_1C0190F94;
        dword_1C0190F78 = dword_1C0190F94;
        dword_1C0190F7C = dword_1C0190F94;
        dword_1C0190F80 = dword_1C0190FA4;
        dword_1C0190F84 = dword_1C0190FA4;
        if ( dword_1C0190F70 == 1 )
        {
          if ( dword_1C0190F90 == dword_1C0190F94 )
            goto LABEL_90;
          LODWORD(v240) = 11;
          v241 = 1LL;
          QueuePowerRequest(&v240, 0LL);
        }
        if ( dword_1C0190F70 != 2 || dword_1C0190F90 == dword_1C0190FA4 )
          goto LABEL_90;
        LODWORD(v240) = 11;
        v241 = 2LL;
        goto LABEL_89;
      }
      v108 = v107 - 1;
      if ( v108 )
      {
        v109 = v108 - 1;
        if ( v109 )
        {
          if ( v109 == 1 && v8 == 4 && a4 )
          {
            v110 = *a4;
            LOBYTE(a2) = 1;
            LODWORD(v240) = 15;
LABEL_133:
            v241 = v110;
LABEL_139:
            QueuePowerRequest(&v240, a2);
            return v10;
          }
        }
        else if ( v8 == 8 && a4 )
        {
          UserSessionSwitchBlock_Start();
          a2 = 0LL;
          v241 = a4[1];
          if ( *(_BYTE *)a4 )
            LODWORD(v240) = 13;
          else
            LODWORD(v240) = 14;
          goto LABEL_139;
        }
        return (unsigned int)-1073741823;
      }
      v111 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
      if ( v111 )
        v111[1] = KeQueryPerformanceCounter(0LL);
      v112 = EnterCritAvoidingDitHitTestHazard(0, 1);
      EtwTraceAcquiredExclusiveUserCrit(v114, v113, v115, v116);
      gptiCurrent = v112;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v243);
      v117 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        v118 = GetDomainLockRef(8);
        do
        {
          gpducstulHead = v117[2];
          v117[2] = 0LL;
          tagObjLock::UnLock((tagObjLock *)v118);
          HMUnlockObject(*v117);
          RIMLockExclusive((__int64)v118);
          v117 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v243);
      if ( gWakeInProgress )
      {
        v241 = gWakeInProgressReason;
        gWakeInProgress = 0;
        gWakeInProgressReason = MonitorRequestReasonUnknown;
        LODWORD(v240) = 12;
LABEL_89:
        QueuePowerRequest(&v240, 0LL);
        goto LABEL_90;
      }
      goto LABEL_90;
    }
    if ( v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v128 = 0;
    v129 = 0;
    if ( *a4 )
    {
      if ( *a4 == 1 )
      {
        v129 = 1;
LABEL_184:
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          4);
        goto LABEL_185;
      }
      if ( *a4 != 2 )
      {
LABEL_185:
        if ( v128 )
        {
          if ( gSystemIsAoAc )
            SetInputMode(1LL);
        }
        else if ( !v129 )
        {
          return v10;
        }
        LODWORD(v240) = 5 - (v129 != 0);
        a2 = 0LL;
        v110 = a4[1];
        goto LABEL_133;
      }
      v130 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread((unsigned int)(*a4 - 1), a2, a3, a4);
      if ( v130 )
        v130[1] = KeQueryPerformanceCounter(0LL);
      v131 = EnterCritAvoidingDitHitTestHazard(0, 1);
      EtwTraceAcquiredExclusiveUserCrit(v133, v132, v134, v135);
      gptiCurrent = v131;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v245);
      v136 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        v137 = GetDomainLockRef(8);
        do
        {
          gpducstulHead = v136[2];
          v136[2] = 0LL;
          tagObjLock::UnLock((tagObjLock *)v137);
          HMUnlockObject(*v136);
          RIMLockExclusive((__int64)v137);
          v136 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v245);
      if ( gPowerTransitionsState )
        v10 = 255;
      else
        v129 = 1;
      UserSessionSwitchLeaveCrit(v139, v138, v140, v141);
    }
    else
    {
      v128 = 1;
    }
    if ( v129 )
      goto LABEL_184;
    goto LABEL_185;
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
  v14 = *a4;
  v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( v15 )
    v15[1] = KeQueryPerformanceCounter(0LL);
  v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v18, v17, v19, v20);
  gptiCurrent = v16;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v246);
  v21 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    v142 = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v21[2];
      v21[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)v142);
      HMUnlockObject(*v21);
      RIMLockExclusive((__int64)v142);
      v21 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v246);
  v22 = dword_1C0190F68;
  v23 = dword_1C0190F68 + v14;
  dword_1C0190F68 += v14;
  if ( v22 != 1 )
  {
    if ( !v22 && v23 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange();
    }
    v24 = v23 <= 0;
LABEL_19:
    v264 = 1;
    if ( !v24 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v24 = v23 <= 0;
  if ( v23 )
    goto LABEL_19;
  CitDisplayRequestChange(0);
  EtwTraceDisplayReqChange();
  if ( !gbBlockSendInputResets )
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9);
LABEL_20:
  v264 = 0;
LABEL_21:
  ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v264, 1LL, 0LL, &gSessionId, 0, 0);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  if ( !v22 && v23 == 1 && dword_1C0190F70 == 2 )
  {
    LODWORD(v240) = 4;
    v241 = 0LL;
    QueuePowerRequest(&v240, 0LL);
  }
  if ( v23 >= 0 )
    v6 = v23;
  *v13 = v6;
  return v10;
}
