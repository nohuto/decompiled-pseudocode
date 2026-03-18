/*
 * XREFs of PpmIdleSelectStates @ 0x14013A6A0
 * Callers:
 *     PoIdle @ 0x1400967A0 (PoIdle.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x14005CAE0 (KeSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KiFindNextTimerDueTime @ 0x14009A4F0 (KiFindNextTimerDueTime.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     PoCopyDeepIdleMask @ 0x1400DE1E4 (PoCopyDeepIdleMask.c)
 *     PoAllProcessorsDeepIdle @ 0x14010F5D4 (PoAllProcessorsDeepIdle.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14010F698 (KiGetNextTimerExpirationDueTime.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x14013B330 (PpmCheckPreConditionsForDeepSleep.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PpmEstimateIdleDuration @ 0x14023A918 (PpmEstimateIdleDuration.c)
 *     PpmGetPlatformIdleDurationHint @ 0x14023AC10 (PpmGetPlatformIdleDurationHint.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x14023B290 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x14023B8E0 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x14023B9DC (PpmIdleSetSynchronizationState.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x14023BC8C (PpmIdleUpdateSelectionStatistics.c)
 *     PpmUnlockProcessors @ 0x14023C714 (PpmUnlockProcessors.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14028649C (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdleSelectStates(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int8 *a4,
        unsigned int *a5,
        int *a6,
        __int64 a7,
        bool *a8)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // r15
  LARGE_INTEGER PerformanceCounter; // r11
  __int64 v16; // r13
  LARGE_INTEGER *v17; // r12
  LONGLONG v18; // rdx
  unsigned __int64 *v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 NextTimerDueTime; // rdi
  __int64 v23; // r14
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rsi
  char v26; // cl
  char v27; // r15
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int j; // eax
  unsigned __int64 v34; // rdi
  ULONG v35; // eax
  __int16 v36; // ax
  __int64 v37; // rsi
  int v38; // edi
  __int64 (__fastcall *v39)(_QWORD, __int64); // rax
  __int64 v40; // r14
  unsigned int v41; // ebx
  unsigned int *v42; // r12
  int v43; // eax
  unsigned __int8 v44; // r15
  char v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // r10
  unsigned int v49; // edi
  __int64 v50; // r9
  unsigned int v51; // r11d
  __int64 v52; // rax
  __int64 v53; // r12
  unsigned __int64 v54; // r14
  bool v55; // zf
  unsigned __int64 v56; // r15
  __int64 v57; // rcx
  int v58; // eax
  int v59; // esi
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rdi
  unsigned __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v63; // r9
  unsigned __int64 v64; // rbx
  unsigned int v65; // edx
  unsigned int v66; // ecx
  unsigned int k; // eax
  unsigned __int64 v68; // rdi
  ULONG v69; // eax
  __int64 v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  bool v74; // al
  int v75; // r14d
  _QWORD *v76; // rcx
  __int64 result; // rax
  unsigned int *v78; // rax
  unsigned int v79; // eax
  unsigned int (__fastcall *v80)(_QWORD, _QWORD); // rax
  unsigned int (__fastcall *v81)(_QWORD, _QWORD, __int64); // rax
  char v82; // bl
  __int64 *v83; // r8
  __int64 v84; // r10
  __int64 v85; // rcx
  unsigned __int16 v86; // dx
  __int64 v87; // r9
  unsigned __int64 v88; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v90; // rcx
  char v91; // bl
  __int64 *v92; // rdx
  __int64 v93; // r10
  __int64 v94; // rcx
  __int64 v95; // r9
  unsigned __int64 v96; // rbx
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // r8
  __int64 i; // rcx
  unsigned __int64 v102; // rax
  int v103; // eax
  __int64 v104; // r15
  __int64 v105; // r12
  int v106; // r9d
  unsigned int v107; // r14d
  _DWORD *v108; // r8
  __int64 v109; // rdx
  __int64 v110; // rsi
  unsigned __int8 v111; // cl
  int v112; // eax
  unsigned int v113; // r8d
  __int64 v114; // rax
  __int64 v115; // rdi
  unsigned int (__fastcall *v116)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v117; // rdx
  int v118; // eax
  int v119; // eax
  _DWORD *v120; // rax
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rdx
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // r10
  void *v128; // rax
  unsigned int v129; // ecx
  unsigned __int8 v130; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v131; // [rsp+40h] [rbp-C0h]
  char v132; // [rsp+41h] [rbp-BFh]
  __int16 v133; // [rsp+44h] [rbp-BCh]
  unsigned int v134; // [rsp+44h] [rbp-BCh]
  unsigned int v135; // [rsp+48h] [rbp-B8h] BYREF
  int v136; // [rsp+4Ch] [rbp-B4h] BYREF
  int v137; // [rsp+50h] [rbp-B0h]
  unsigned int v138; // [rsp+54h] [rbp-ACh]
  unsigned int v139; // [rsp+58h] [rbp-A8h]
  int v140; // [rsp+5Ch] [rbp-A4h]
  int v141; // [rsp+60h] [rbp-A0h] BYREF
  void *v142; // [rsp+68h] [rbp-98h]
  __int64 v143; // [rsp+70h] [rbp-90h]
  unsigned int *v144; // [rsp+78h] [rbp-88h]
  int v145; // [rsp+80h] [rbp-80h] BYREF
  int v146; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v147; // [rsp+88h] [rbp-78h]
  unsigned __int64 v148; // [rsp+90h] [rbp-70h] BYREF
  __int64 v149; // [rsp+98h] [rbp-68h]
  __int64 v150; // [rsp+A0h] [rbp-60h]
  unsigned __int64 PlatformIdleDurationHint; // [rsp+A8h] [rbp-58h]
  ULONG v152; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v153; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned __int64 *v154; // [rsp+B8h] [rbp-48h]
  bool *v155; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v156; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v157; // [rsp+D0h] [rbp-30h]
  __int64 v158; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v159; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v160; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v161; // [rsp+F0h] [rbp-10h]
  unsigned int *v162; // [rsp+F8h] [rbp-8h]
  int *v163; // [rsp+100h] [rbp+0h]
  unsigned __int8 *v164; // [rsp+108h] [rbp+8h]
  __int64 v165; // [rsp+110h] [rbp+10h]
  unsigned __int16 *v166[2]; // [rsp+118h] [rbp+18h] BYREF
  __int16 v167; // [rsp+128h] [rbp+28h]
  unsigned __int16 *v168[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v169; // [rsp+140h] [rbp+40h]
  void *v170; // [rsp+148h] [rbp+48h] BYREF
  int v171; // [rsp+150h] [rbp+50h]
  int v172; // [rsp+154h] [rbp+54h]
  unsigned int *v173; // [rsp+158h] [rbp+58h] BYREF
  int v174; // [rsp+160h] [rbp+60h]
  int v175; // [rsp+164h] [rbp+64h]
  _QWORD v176[22]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v177[22]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v178[176]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v162 = a5;
  v163 = a6;
  v165 = a7;
  v155 = a8;
  v143 = *(_QWORD *)(a1 + 23808);
  v150 = a1;
  v9 = *(_QWORD *)(a1 + 23816);
  v149 = PpmPlatformStates;
  v10 = *(_QWORD *)(a1 + 23808);
  v161 = v9;
  v147 = PopFxSystemLatencyHint;
  v11 = 0LL;
  v164 = a4;
  v154 = a3;
  PlatformIdleDurationHint = a2;
  v130 = 0;
  LOBYTE(v137) = 1;
  LOBYTE(v140) = 0;
  v132 = 0;
  v157 = 0LL;
  v135 = 0;
  v142 = 0LL;
  v139 = 0;
  v144 = 0LL;
  v138 = 0;
  v136 = 0;
  v148 = 0LL;
  v156 = 0LL;
  v141 = 0;
  while ( 1 )
  {
    v12 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v13 = MEMORY[0xFFFFF78000000350];
      v14 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v12 )
        break;
    }
    _mm_pause();
  }
  v16 = v150;
  v17 = (LARGE_INTEGER *)PlatformIdleDurationHint;
  if ( PerformanceCounter.QuadPart > v13 )
  {
    v18 = PerformanceCounter.QuadPart - v13 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v18 <<= MEMORY[0xFFFFF78000000369];
    v11 = ((unsigned __int64)v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
  }
  v19 = v154;
  *v154 = v14 + v11;
  *(LARGE_INTEGER *)(v10 + 496) = PerformanceCounter;
  *(_QWORD *)(v10 + 504) = *(_QWORD *)(v16 + 23832) + *(_QWORD *)(v16 + 24008);
  *(_BYTE *)(v10 + 538) = *(_BYTE *)(v16 + 24226);
  *(_BYTE *)(v10 + 536) = *(_BYTE *)(v16 + 23864);
  *(_BYTE *)(v10 + 537) = *(_BYTE *)(v16 + 23865);
  *(_BYTE *)(v10 + 539) = 1;
  if ( *(_BYTE *)(v16 + 33) && PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v10 + 540) = 1;
    *(_WORD *)(v10 + 48) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v10 + 540) = 0;
  }
  if ( *(_BYTE *)(v10 + 1) )
  {
    *(_WORD *)(v10 + 48) |= 0x100u;
    v20 = *(_DWORD *)(v10 + 24);
  }
  else
  {
    v20 = -1;
  }
  *(_DWORD *)(v10 + 528) = v20;
  v21 = v143;
  *v17 = PerformanceCounter;
  NextTimerDueTime = 0LL;
  *(_QWORD *)(v21 + 240) = 1310721LL;
  memset((void *)(v21 + 248), 0, 0xA0uLL);
  v23 = *(_QWORD *)(v16 + 23808);
  v24 = *v19;
  v158 = v23;
  if ( !KiSerializeTimerExpiration || *(_BYTE *)(v16 + 33) )
    PlatformIdleDurationHint = 0LL;
  else
    PlatformIdleDurationHint = PpmGetPlatformIdleDurationHint();
  v25 = -1LL;
  v133 = 0;
  v26 = *(_BYTE *)(*(_QWORD *)(v16 + 23808) + 540LL);
  if ( *(_BYTE *)(v16 + 33) )
    v133 = 8;
  v27 = 2;
  v28 = KiClockTimerNextTickTime;
  v145 = 2;
  if ( *(_BYTE *)(v16 + 33) )
  {
    if ( v26 )
    {
      if ( !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
      {
        KiGetNextTimerExpirationDueTime(v16, 1, v24, 0, &v160, &v145);
        if ( v24 + (unsigned int)KiLastRequestedTimeIncrement < v160 )
        {
          v27 = v145;
          v28 = v160;
        }
      }
    }
  }
  else
  {
    if ( *(_QWORD *)(v16 + 16) )
    {
      v27 = 1;
    }
    else if ( PoSkipTickMode != 2 || KiSerializeTimerExpiration )
    {
      v27 = 4;
      NextTimerDueTime = KiFindNextTimerDueTime(v16, v24, 0);
      if ( KiGroupSchedulingEnabled )
      {
        v99 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v16 + 36)];
        v29 = v99 & 0x3F;
        if ( (((unsigned __int64)qword_140358548[v99 >> 6] >> (v99 & 0x3F)) & 1) != 0
          && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < NextTimerDueTime )
        {
          NextTimerDueTime = KiGenerationEndTick * KeMaximumIncrement;
          v27 = 5;
        }
      }
      if ( *(_BYTE *)(v16 + 33) )
      {
        v100 = -1LL;
        LOBYTE(v29) = 0;
        for ( i = 2LL; i <= 3; ++i )
        {
          if ( qword_140371250[3 * i] < v100 )
          {
            v29 = (unsigned __int8)v29;
            v100 = qword_140371250[3 * i];
            if ( i == 3 )
              v29 = 1LL;
          }
        }
        v16 = v150;
        v23 = v158;
        if ( v100 < NextTimerDueTime )
        {
          v27 = 6;
          NextTimerDueTime = v100;
          if ( (_BYTE)v29 )
            v27 = 7;
        }
        if ( *(_BYTE *)(v150 + 33) )
        {
          v102 = ((__int64 (__fastcall *)(__int64, __int64))off_1403536A8[0])(i, v29);
          if ( v102 )
          {
            if ( NextTimerDueTime > v102 )
            {
              NextTimerDueTime = v102;
              v27 = 9;
              if ( v24 > v102 )
                NextTimerDueTime = v24;
            }
          }
        }
      }
    }
    if ( v28 <= NextTimerDueTime )
      v28 = NextTimerDueTime;
  }
  if ( v28 == -1LL )
  {
    v30 = -1LL;
  }
  else if ( v28 <= v24 )
  {
    v30 = 0LL;
  }
  else
  {
    v30 = v28 - v24;
  }
  v31 = *(_DWORD *)(v16 + 11684);
  v32 = 0;
  for ( j = v31; j; j >>= 4 )
    v32 += KeMaximumIncrement;
  v34 = v32;
  if ( v31 )
  {
    v35 = KeMaximumIncrement / (v31 + 1);
    if ( !v35 )
      v35 = 1;
    v25 = v35;
  }
  if ( v30 <= v25 )
  {
    v25 = v30;
    v34 = v30;
  }
  else
  {
    if ( v30 < v32 )
      v34 = v30;
    v133 |= 1u;
  }
  if ( !PpmIdleDurationExpirationTimeout )
    goto LABEL_38;
  if ( !*(_BYTE *)(v16 + 33) )
    goto LABEL_38;
  LODWORD(v176[0]) = 1310721;
  v82 = 0;
  memset((char *)v176 + 4, 0, 0xA4uLL);
  if ( !KeNumberNodes )
    goto LABEL_38;
  v83 = KeNodeBlock;
  v84 = (unsigned __int16)KeNumberNodes;
  do
  {
    v85 = *v83;
    v86 = *(_WORD *)(*v83 + 144);
    v87 = *(_QWORD *)(*v83 + 72);
    if ( LOWORD(v176[0]) <= v86 )
      LOWORD(v176[0]) = v86 + 1;
    v176[v86 + 1] |= v87;
    if ( *(_QWORD *)(v85 + 72) )
      v82 = 1;
    ++v83;
    --v84;
  }
  while ( v84 );
  if ( !v82 )
    goto LABEL_38;
  v88 = 0LL;
  v167 = 0;
  v166[1] = (unsigned __int16 *)v176[1];
  v166[0] = (unsigned __int16 *)v176;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v152, v166) )
  {
    Prcb = KeGetPrcb(v152);
    v90 = *(_QWORD *)(Prcb + 23848);
    if ( v90 > v88 && v90 != -1LL )
      v88 = *(_QWORD *)(Prcb + 23848);
  }
  if ( v88 )
  {
    v36 = v133;
    if ( v34 + v24 > v88 )
    {
      v36 = v133 | 0x2000;
      v34 = v88 > v24 ? (unsigned int)(v88 - v24) : 1LL;
      if ( v34 < v25 )
        v25 = v34;
    }
  }
  else
  {
LABEL_38:
    v36 = v133;
  }
  if ( v25 < PlatformIdleDurationHint )
  {
    v25 = PlatformIdleDurationHint;
    v34 = PlatformIdleDurationHint;
    v36 |= 0x1000u;
  }
  *(_WORD *)(v23 + 48) |= v36;
  *(_QWORD *)(v23 + 512) = v25;
  v37 = v143;
  *(_QWORD *)(v23 + 520) = v34;
  v38 = -1;
  *(_BYTE *)(v23 + 541) = v27;
  v134 = -1;
  v39 = *(__int64 (__fastcall **)(_QWORD, __int64))(v37 + 432);
  if ( v39 )
  {
    v38 = v39(*(_QWORD *)(v37 + 488), v37 + 496);
    v134 = v38;
  }
  if ( *(_BYTE *)(v16 + 23869) )
  {
    v38 = 0;
    v134 = 0;
  }
  v40 = v149;
  if ( v149 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v37 + 576));
    KeAddProcessorAffinityEx((_WORD *)(v37 + 576), *(_DWORD *)(v16 + 36));
    v103 = *(_DWORD *)v40;
    v104 = v37 + 792;
    v105 = *(_QWORD *)(v40 + 48);
    v142 = *(void **)(v37 + 752);
    memset(v142, 0, 4 * v103 + 8);
    v41 = v135;
    v106 = 0;
    v107 = 0;
    v108 = v142;
    if ( *(_DWORD *)(v37 + 776) )
    {
      do
      {
        v109 = *(_QWORD *)(v37 + 784) + 24LL * v107;
        if ( *(_BYTE *)(v109 + 1) )
        {
          v110 = *(unsigned int *)(v109 + 4);
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v110 < PpmDripsStateIndex
            || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v16, v109, v108) )
          {
            v112 = (unsigned __int8)v137;
            if ( v130 == 1 )
              v112 = 1;
            v111 = 0;
          }
          else
          {
            v111 = 1;
            v112 = (unsigned __int8)v137;
            if ( !v130 )
              v112 = 1;
          }
          v130 = v111;
          v137 = v112;
          if ( (_BYTE)v112 )
          {
            LOBYTE(v137) = 0;
            PpmEstimateIdleDuration(v16, v111, *v154, 0, (__int64)&v148, (__int64)&v156, (__int64)&v141, (__int64)&v136);
            v106 = 0;
          }
          v113 = v147;
          *(_DWORD *)(v104 + 4) = v106;
          v135 = -1;
          v114 = PpmIdleCheckCoordinatedStateEligibility(v16, v38, v113, v148, v110, v110, (__int64)&v135, v104);
          v41 = v135;
          v115 = v114;
          if ( !*(_BYTE *)(v149 + 12) && !v114 )
          {
            v116 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v149 + 16);
            if ( v116 )
              v115 = v116(*(_QWORD *)(v143 + 488), v135, (unsigned int)v110);
          }
          PpmIdleUpdateSelectionStatistics(v115, 1008 * v110 + v105 + 72);
          v117 = v149 + 384 * v110;
          if ( v115 != 0xFFFFFFFFLL )
            v157 = *(_QWORD *)(v117 + 64);
          if ( !v115 )
          {
            v120 = v142;
            v75 = -1;
            *v155 = 1;
            *v120 = v110;
            if ( *(_BYTE *)(v117 + 121) )
              v75 = v110;
            v37 = v143;
            if ( (unsigned int)KeSubtractAffinityEx((char *)(v143 + 240), (char *)(v117 + 128), v178) )
              PpmUnlockProcessors(v37 + 240, v178);
            v42 = v144;
            LODWORD(v48) = 0;
            v44 = v130;
            v72 = (unsigned int)v144;
            goto LABEL_102;
          }
          if ( v115 == 2147483651LL )
          {
            v132 = 1;
          }
          else
          {
            v118 = (unsigned __int8)v140;
            if ( v115 == 2147483656LL )
              v118 = 1;
            v140 = v118;
          }
          PpmIdleRollbackCoordinatedSelection(v104, 0LL);
          v106 = 0;
          v108 = v142;
          v37 = v143;
          *((_DWORD *)v142 + v139 + 2) = v115;
          v38 = v134;
        }
        else
        {
          v108[v139 + 2] = -2;
        }
        ++v107;
        v119 = ++v139;
      }
      while ( v107 < *(_DWORD *)(v37 + 776) );
      v139 = v119;
    }
    *(_DWORD *)(v104 + 4) = 0;
    *v108 = -1;
    PpmUnlockProcessors(v37 + 240, v37 + 240);
  }
  else
  {
    v41 = v135;
  }
  v42 = *(unsigned int **)(v37 + 744);
  v43 = *(_DWORD *)(v37 + 28);
  v44 = 0;
  v144 = v42;
  v45 = 1;
  memset(v42, 0, 4 * v43 + 8);
  v48 = 0LL;
  v49 = 0;
  v157 = *(_QWORD *)(v37 + 40);
  v137 = 0;
  if ( !*(_DWORD *)(v37 + 760) )
  {
    v72 = 0LL;
    goto LABEL_101;
  }
  v50 = 2147483658LL;
  v51 = 0x80000000;
  while ( 1 )
  {
    v52 = *(_QWORD *)(v37 + 768);
    v53 = v49;
    v158 = v49;
    v41 = *(_DWORD *)(v52 + 24LL * v49 + 4);
    v135 = v41;
    if ( !v149
      && v41 == *(_DWORD *)(v37 + 28) - 1
      && *(_BYTE *)(v37 + 540)
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v16, v46, v47) )
    {
      v131 = 1;
      v47 = 1LL;
      if ( !v44 )
        v45 = 1;
    }
    else
    {
      if ( v44 == 1 )
        v45 = 1;
      LOBYTE(v47) = 0;
      v131 = 0;
    }
    if ( v45 )
    {
      v54 = -1LL;
      v55 = *(_BYTE *)(v16 + 33) == 0;
      LOBYTE(v150) = 0;
      v56 = *v154;
      v57 = *(unsigned __int8 *)(*(_QWORD *)(v16 + 23808) + 540LL);
      v58 = v48;
      v136 = v48;
      if ( !v55 )
      {
        v58 = 8;
        v136 = 8;
      }
      if ( (_BYTE)v47 )
        v136 = v58 | 4;
      v59 = 2;
      v55 = *(_BYTE *)(v16 + 33) == 0;
      v60 = KiClockTimerNextTickTime;
      v146 = 2;
      if ( v55 )
      {
        v61 = v48;
        if ( *(_QWORD *)(v16 + 16) )
        {
          v59 = 1;
        }
        else if ( PoSkipTickMode != 2 || KiSerializeTimerExpiration )
        {
          v59 = 4;
          if ( (_BYTE)v47 )
            NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v57);
          else
            NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v16, v56, 0);
          v61 = NextWakeTimeForDeepSleep;
          if ( KiGroupSchedulingEnabled )
          {
            v121 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v16 + 36)];
            if ( (((unsigned __int64)qword_140358548[v121 >> 6] >> (v121 & 0x3F)) & 1) != 0
              && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v61 )
            {
              v61 = KiGenerationEndTick * KeMaximumIncrement;
              v59 = 5;
            }
          }
          v48 = 0LL;
          if ( *(_BYTE *)(v16 + 33) )
          {
            v122 = -1LL;
            LOBYTE(v63) = 0;
            v123 = v131 + 2LL;
            do
            {
              if ( qword_140371250[3 * v123] < v122 )
              {
                v63 = (unsigned __int8)v63;
                v122 = qword_140371250[3 * v123];
                if ( v123 == 3 )
                  v63 = 1LL;
              }
              ++v123;
            }
            while ( v123 <= 3 );
            v53 = v158;
            v48 = 0LL;
            v47 = v131;
            if ( v122 < v61 )
            {
              v59 = 6;
              v61 = v122;
              if ( (_BYTE)v63 )
                v59 = 7;
            }
            if ( *(_BYTE *)(v16 + 33) )
            {
              v124 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64))off_1403536A8[0])(
                       v123,
                       v122,
                       v131,
                       v63);
              v47 = v131;
              if ( v124 )
              {
                if ( v61 > v124 )
                {
                  v61 = v124;
                  v59 = 9;
                  if ( v56 > v124 )
                    v61 = v56;
                }
              }
              v48 = 0LL;
            }
          }
          else
          {
            v47 = v131;
          }
        }
        v159 = v61;
        if ( v60 <= v61 )
          v60 = v61;
      }
      else if ( (_BYTE)v57 )
      {
        if ( !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
        {
          KiGetNextTimerExpirationDueTime(v16, 1, v56, v47, &v159, &v146);
          v48 = 0LL;
          v47 = v131;
          if ( v56 + (unsigned int)KiLastRequestedTimeIncrement < v159 )
          {
            v59 = v146;
            v60 = v159;
          }
        }
      }
      if ( v60 == -1LL )
      {
        v64 = -1LL;
      }
      else if ( v60 <= v56 )
      {
        v64 = v48;
      }
      else
      {
        v64 = v60 - v56;
      }
      v65 = *(_DWORD *)(v16 + 11684);
      v66 = v48;
      v141 = v59;
      for ( k = v65; k; k >>= 4 )
        v66 += KeMaximumIncrement;
      v68 = v66;
      if ( !(_BYTE)v47 && v65 )
      {
        v69 = KeMaximumIncrement / (v65 + 1);
        if ( !v69 )
          v69 = 1;
        v54 = v69;
      }
      if ( v64 <= v54 )
      {
        v54 = v64;
        v68 = v64;
      }
      else
      {
        if ( v64 < v66 )
          v68 = v64;
        v136 |= 1u;
      }
      if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(v16 + 33) )
      {
        LODWORD(v177[0]) = 1310721;
        v91 = 0;
        memset((char *)v177 + 4, 0, 0xA4uLL);
        if ( KeNumberNodes )
        {
          v92 = KeNodeBlock;
          v93 = (unsigned __int16)KeNumberNodes;
          do
          {
            v94 = *v92;
            v47 = *(unsigned __int16 *)(*v92 + 144);
            v95 = *(_QWORD *)(*v92 + 72);
            if ( LOWORD(v177[0]) <= (unsigned __int16)v47 )
              LOWORD(v177[0]) = v47 + 1;
            v177[(unsigned __int16)v47 + 1] |= v95;
            if ( *(_QWORD *)(v94 + 72) )
              v91 = 1;
            ++v92;
            --v93;
          }
          while ( v93 );
          if ( v91 )
          {
            v96 = 0LL;
            v169 = 0;
            v168[1] = (unsigned __int16 *)v177[1];
            v168[0] = (unsigned __int16 *)v177;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v153, v168) )
            {
              v97 = KeGetPrcb(v153);
              v98 = *(_QWORD *)(v97 + 23848);
              if ( v98 > v96 && v98 != -1LL )
                v96 = *(_QWORD *)(v97 + 23848);
            }
            if ( v96 && v68 + v56 > v96 )
            {
              v136 |= 0x2000u;
              v68 = v96 > v56 ? (unsigned int)(v96 - v56) : 1LL;
              if ( v68 < v54 )
                v54 = v68;
            }
          }
        }
        v48 = 0LL;
      }
      v41 = v135;
      v51 = 0x80000000;
      v37 = v143;
      v50 = 2147483658LL;
      v156 = v68;
      v49 = v137;
      v148 = v54;
      v45 = v150;
    }
    if ( !v41 )
    {
      v46 = v48;
      goto LABEL_93;
    }
    v47 = *(_QWORD *)(v16 + 23808);
    v70 = 248LL * v41;
    if ( *(_BYTE *)(v70 + v47 + 1063) )
    {
      v46 = v50;
      goto LABEL_93;
    }
    if ( v41 > v134 && v134 != -1 )
    {
      v46 = 2147483656LL;
      goto LABEL_93;
    }
    if ( !*(_BYTE *)(v70 + v47 + 1058) && *(_BYTE *)(v47 + 539) )
    {
      v46 = 2147483655LL;
      goto LABEL_93;
    }
    if ( *(_DWORD *)(v70 + v47 + 1016) )
    {
      if ( *(_QWORD *)(v70 + v47 + 1048) )
      {
        v125 = (__int64 *)(v70 + v47 + 1024);
        v126 = *v125;
        v55 = *v125 == (_QWORD)v125;
        v79 = v51;
        if ( !v55 )
          v79 = *(_DWORD *)(v126 + 16);
      }
      else
      {
        v79 = v51;
      }
    }
    else
    {
      v79 = v48;
    }
    v41 = v135;
    if ( v79 )
    {
      v46 = v79 | 0x100000000LL;
    }
    else
    {
      if ( *(_DWORD *)(v70 + v47 + 1000) > v147 )
      {
        v41 = v135;
        v46 = 2147483650LL;
        goto LABEL_93;
      }
      if ( *(unsigned int *)(v70 + v47 + 1004) > v148 )
      {
        v41 = v135;
        v46 = 2147483651LL;
        goto LABEL_93;
      }
      v80 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(v47 + 448);
      v46 = v80 ? v80(*(_QWORD *)(v47 + 488), v135) : v48;
    }
    if ( !v46 )
    {
      v81 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v37 + 440);
      if ( v81 )
        v46 = v81(*(_QWORD *)(v37 + 488), v41, 0xFFFFFFFFLL);
    }
LABEL_93:
    v71 = v161 + 1000LL * v41;
    if ( !v46 )
    {
      v47 = 0LL;
LABEL_95:
      ++*(_QWORD *)(v71 + 8LL * (unsigned int)v47 + 80);
      goto LABEL_96;
    }
    if ( (v46 & 0x80000000) == 0 )
    {
      if ( (v46 & 0x100000000LL) != 0 )
      {
        v127 = *(_QWORD *)(v71 + 200);
        v47 = 2LL;
        if ( v127 )
          ++*(_QWORD *)(((unsigned __int64)(((unsigned int)v46 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v127 + 32) + 24);
      }
      else
      {
        v47 = 1LL;
      }
      goto LABEL_95;
    }
    if ( (unsigned int)v46 <= 0x8000000C )
    {
      v47 = (unsigned int)(v46 - 2147483646);
      goto LABEL_95;
    }
LABEL_96:
    if ( !v46 )
      break;
    if ( v46 == 2147483651LL )
    {
      v132 = 1;
    }
    else if ( v46 == 2147483656LL )
    {
      LOBYTE(v140) = 1;
    }
    v78 = v144;
    ++v49;
    v44 = v131;
    v48 = 0LL;
    v137 = v49;
    v51 = 0x80000000;
    v50 = 2147483658LL;
    v144[v53 + 2] = v46;
    if ( v49 >= *(_DWORD *)(v37 + 760) )
    {
      v44 = v131;
      v42 = v78;
      v72 = 0LL;
      goto LABEL_101;
    }
  }
  v42 = v144;
  v72 = v49;
  v73 = 248LL * v41;
  *v144 = v41;
  v138 = v49;
  v74 = !*(_BYTE *)(v73 + v37 + 1058) || v149 && (!*(_BYTE *)(v73 + v37 + 1061) || v41);
  LODWORD(v48) = 0;
  v44 = v131;
  *v155 = v74;
LABEL_101:
  v75 = -1;
LABEL_102:
  if ( *v155 )
  {
    LOBYTE(v72) = 1;
    PpmIdleSetSynchronizationState(v16 + 23872, v72);
    LODWORD(v72) = v138;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v128 = v142;
    if ( v142 )
    {
      v129 = v139;
      *((_DWORD *)v142 + 1) = v139;
      v170 = v128;
      v172 = v48;
      v171 = 4 * v129 + 8;
      EtwTraceKernelEvent((__int64)&v170, 1u, 0x40200000u, 0x123Eu, 0x602u);
      LODWORD(v72) = v138;
      LODWORD(v48) = 0;
    }
    if ( v42 )
    {
      v42[1] = v72;
      v174 = 4 * v72 + 8;
      v173 = v42;
      v175 = v48;
      EtwTraceKernelEvent((__int64)&v173, 1u, 0x40200000u, 0x123Du, 0x602u);
    }
  }
  *(_WORD *)(v37 + 48) |= v136;
  v76 = (_QWORD *)v165;
  *(_BYTE *)(v37 + 7) = v140;
  *(_BYTE *)(v37 + 6) = v132;
  *(_QWORD *)(v37 + 520) = v156;
  *(_QWORD *)(v37 + 512) = v148;
  *(_BYTE *)(v37 + 541) = v141;
  *v162 = v41;
  *v163 = v75;
  *v164 = v44;
  result = v157;
  *v76 = v157;
  return result;
}
