/*
 * XREFs of PpmIdleSelectStates @ 0x14015F520
 * Callers:
 *     PoIdle @ 0x14010B740 (PoIdle.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140005890 (PoCopyDeepIdleMask.c)
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140035180 (KiGetNextTimerExpirationDueTime.c)
 *     KeSubtractAffinityEx @ 0x1400361C0 (KeSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PoAllProcessorsDeepIdle @ 0x14003AF40 (PoAllProcessorsDeepIdle.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiFindNextTimerDueTime @ 0x14010F360 (KiFindNextTimerDueTime.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x14015BFB4 (PpmCheckPreConditionsForDeepSleep.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmEstimateIdleDuration @ 0x140271D48 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140272768 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140272EDC (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x140272FD8 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x140273278 (PpmIdleUpdateSelectionStatistics.c)
 *     PpmUnlockProcessors @ 0x140273CF8 (PpmUnlockProcessors.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x1402BAB9C (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdleSelectStates(
        __int64 a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        unsigned __int8 *a4,
        unsigned int *a5,
        int *a6,
        __int64 a7,
        bool *a8)
{
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  LARGE_INTEGER PerformanceCounter; // r11
  LARGE_INTEGER *v15; // r12
  __int64 v16; // r13
  LONGLONG v17; // rdx
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // eax
  char v22; // al
  unsigned __int16 *v23; // r13
  unsigned __int64 NextTimerDueTime; // rdi
  char v25; // al
  unsigned __int64 v26; // r10
  __int64 v27; // r15
  __int64 v28; // rcx
  char v29; // dl
  unsigned __int64 v30; // r14
  __int16 v31; // r12
  unsigned __int64 v32; // rbx
  int v33; // esi
  __int64 v34; // rdx
  unsigned int v35; // edx
  char v36; // bl
  unsigned int v37; // ecx
  unsigned int j; // eax
  ULONG v39; // eax
  char v40; // al
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(_QWORD, __int64); // rax
  __int64 v43; // r14
  unsigned int v44; // ebx
  unsigned int *v45; // r13
  int v46; // eax
  unsigned __int8 v47; // r12
  char v48; // r15
  __int64 v49; // rdx
  unsigned __int64 v50; // r10
  unsigned int v51; // r14d
  __int64 v52; // r9
  unsigned int v53; // r11d
  __int64 v54; // rax
  unsigned __int16 *v55; // r13
  unsigned __int64 v56; // r15
  bool v57; // zf
  unsigned __int64 v58; // r12
  __int64 v59; // rcx
  int v60; // eax
  int v61; // esi
  __int64 v62; // r14
  unsigned __int64 v63; // rbx
  unsigned __int64 v64; // rdi
  unsigned __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v66; // r9
  unsigned __int64 v67; // rdi
  unsigned int v68; // ecx
  unsigned int v69; // edx
  unsigned int k; // eax
  ULONG v71; // eax
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // r9
  unsigned int v75; // r8d
  __int64 v76; // rdx
  __int64 v77; // rcx
  bool v78; // al
  bool *v79; // r15
  int v80; // r14d
  _QWORD *v81; // rcx
  __int64 result; // rax
  unsigned int *v83; // rax
  unsigned int v84; // eax
  unsigned int (__fastcall *v85)(_QWORD, _QWORD); // rax
  unsigned int (__fastcall *v86)(_QWORD, _QWORD, __int64); // rax
  __int64 *v87; // rdx
  __int64 v88; // r10
  __int64 v89; // rcx
  unsigned __int16 v90; // r8
  __int64 v91; // r9
  char v92; // bl
  __int64 *v93; // rdx
  __int64 v94; // r10
  __int64 v95; // rcx
  unsigned __int16 v96; // r8
  __int64 v97; // r9
  unsigned __int64 v98; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rbx
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  signed __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // r8
  __int64 i; // rcx
  unsigned __int64 v109; // rax
  int v110; // eax
  __int64 v111; // r15
  __int64 v112; // r12
  unsigned int v113; // r14d
  _DWORD *v114; // rdx
  unsigned int v115; // r9d
  __int64 v116; // rax
  __int64 v117; // rsi
  int v118; // ebx
  unsigned __int8 v119; // cl
  int v120; // eax
  int v121; // r9d
  unsigned int v122; // r8d
  int v123; // edx
  __int64 v124; // rax
  __int64 v125; // rdi
  unsigned int (__fastcall *v126)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v127; // rdx
  int v128; // eax
  _DWORD *v129; // rax
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned __int64 v133; // r8
  char v134; // al
  unsigned __int64 v135; // rax
  __int64 *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r10
  void *v139; // rax
  unsigned int v140; // ecx
  unsigned __int8 v141; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v142; // [rsp+40h] [rbp-C0h]
  char v143; // [rsp+41h] [rbp-BFh]
  unsigned int v144; // [rsp+44h] [rbp-BCh] BYREF
  int v145; // [rsp+48h] [rbp-B8h] BYREF
  int v146; // [rsp+4Ch] [rbp-B4h]
  unsigned int v147; // [rsp+50h] [rbp-B0h]
  __int64 v148; // [rsp+58h] [rbp-A8h]
  unsigned int v149; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER *v150; // [rsp+68h] [rbp-98h]
  int v151; // [rsp+70h] [rbp-90h] BYREF
  int v152; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v153; // [rsp+78h] [rbp-88h]
  int v154; // [rsp+80h] [rbp-80h] BYREF
  __int64 v155; // [rsp+88h] [rbp-78h]
  unsigned int *v156; // [rsp+90h] [rbp-70h]
  void *v157; // [rsp+98h] [rbp-68h]
  int v158; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v159; // [rsp+A4h] [rbp-5Ch]
  __int64 v160; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v161; // [rsp+B0h] [rbp-50h] BYREF
  bool *v162; // [rsp+B8h] [rbp-48h]
  ULONG v163; // [rsp+C0h] [rbp-40h] BYREF
  ULONG v164; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned __int64 *v165; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v166; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v167; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v168; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v169; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v170; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v171; // [rsp+F8h] [rbp-8h]
  unsigned int *v172; // [rsp+100h] [rbp+0h]
  int *v173; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v174; // [rsp+110h] [rbp+10h]
  __int64 v175; // [rsp+118h] [rbp+18h]
  unsigned __int16 *v176[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v177; // [rsp+130h] [rbp+30h]
  unsigned __int16 *v178[2]; // [rsp+138h] [rbp+38h] BYREF
  __int16 v179; // [rsp+148h] [rbp+48h]
  __int64 v180; // [rsp+150h] [rbp+50h]
  void *v181; // [rsp+158h] [rbp+58h] BYREF
  int v182; // [rsp+160h] [rbp+60h]
  int v183; // [rsp+164h] [rbp+64h]
  unsigned int *v184; // [rsp+168h] [rbp+68h] BYREF
  int v185; // [rsp+170h] [rbp+70h]
  int v186; // [rsp+174h] [rbp+74h]
  _QWORD v187[22]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v188[22]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v189[176]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v148 = a1;
  v172 = a5;
  v8 = *(_QWORD *)(a1 + 23808);
  v173 = a6;
  v175 = a7;
  v162 = a8;
  v171 = *(_QWORD *)(a1 + 23816);
  v160 = PpmPlatformStates;
  v9 = *(_QWORD *)(a1 + 23808);
  v150 = a2;
  v155 = v8;
  v10 = 0LL;
  v174 = a4;
  v165 = a3;
  v141 = 0;
  LOBYTE(v146) = 1;
  LOBYTE(v152) = 0;
  v143 = 0;
  v167 = 0LL;
  v144 = 0;
  v157 = 0LL;
  v149 = 0;
  v156 = 0LL;
  v147 = 0;
  v145 = 0;
  v161 = 0LL;
  v166 = 0LL;
  v154 = 0;
  v159 = PopFxSystemLatencyHint;
  while ( 1 )
  {
    v11 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v12 = MEMORY[0xFFFFF78000000350];
      v13 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v11 )
        break;
    }
    _mm_pause();
  }
  v15 = v150;
  v16 = v155;
  if ( PerformanceCounter.QuadPart > v12 )
  {
    v17 = PerformanceCounter.QuadPart - v12 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v17 <<= MEMORY[0xFFFFF78000000369];
    v10 = ((unsigned __int64)v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v180 = v10;
  }
  v18 = v165;
  v19 = v13 + v10;
  v20 = v148;
  *v165 = v19;
  *(LARGE_INTEGER *)(v9 + 496) = PerformanceCounter;
  *(_QWORD *)(v9 + 504) = *(_QWORD *)(v20 + 23832) + *(_QWORD *)(v20 + 24008);
  *(_BYTE *)(v9 + 538) = *(_BYTE *)(v20 + 24226);
  *(_BYTE *)(v9 + 536) = *(_BYTE *)(v20 + 23864);
  *(_BYTE *)(v9 + 537) = *(_BYTE *)(v20 + 23865);
  *(_BYTE *)(v9 + 539) = 1;
  if ( *(_BYTE *)(v20 + 33) && PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v9 + 540) = 1;
    *(_WORD *)(v9 + 48) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v9 + 540) = 0;
  }
  if ( *(_BYTE *)(v9 + 1) )
  {
    *(_WORD *)(v9 + 48) |= 0x100u;
    v21 = *(_DWORD *)(v9 + 28);
  }
  else
  {
    v21 = -1;
  }
  *(_DWORD *)(v9 + 528) = v21;
  if ( PpmIdleRespectIdleStateMax )
  {
    v22 = BYTE6(PpmCurrentProfile[336 * dword_1403AAA2C + 18]);
    *(_BYTE *)(v9 + 542) = v22;
    if ( v22 )
      *(_WORD *)(v9 + 48) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v9 + 542) = 0;
  }
  v23 = (unsigned __int16 *)(v16 + 240);
  *v15 = PerformanceCounter;
  v168 = v23;
  NextTimerDueTime = 0LL;
  *(_QWORD *)v23 = 1310721LL;
  memset(v23 + 4, 0, 0xA0uLL);
  v25 = *(_BYTE *)(v20 + 33);
  v26 = *v18;
  v27 = *(_QWORD *)(v20 + 23808);
  v150 = (LARGE_INTEGER *)*v18;
  if ( !v25 && KiSerializeTimerExpiration )
  {
    v153 = 0LL;
    _m_prefetchw(&PpmPlatformIdleHint);
    v104 = PpmPlatformIdleHint;
    if ( (_WORD)PpmPlatformIdleHint )
    {
      while ( 1 )
      {
        v105 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v104 ^ (unsigned __int16)(v104 ^ (v104 - 1)), v104);
        if ( v104 == v105 )
          break;
        v104 = v105;
        _mm_pause();
        if ( !(_WORD)v105 )
          goto LABEL_180;
      }
      v153 = v104 >> 16;
    }
LABEL_180:
    v28 = *(_QWORD *)(v20 + 23808);
    v25 = *(_BYTE *)(v20 + 33);
  }
  else
  {
    v153 = 0LL;
    v28 = v27;
  }
  v29 = *(_BYTE *)(v28 + 540);
  v30 = -1LL;
  v31 = 0;
  if ( v25 )
    v31 = 8;
  v32 = KiClockTimerNextTickTime;
  v151 = 2;
  if ( *(_BYTE *)(v20 + 33) )
  {
    if ( v29 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      KiGetNextTimerExpirationDueTime(v20, 1u, v26, 0, &v170, &v151);
      v26 = (unsigned __int64)v150;
      if ( (unsigned __int64)v150 + (unsigned int)KiLastRequestedTimeIncrement < v170 )
        v32 = v170;
      else
        v151 = 2;
    }
  }
  else
  {
    if ( *(_QWORD *)(v20 + 16) )
    {
      v33 = 1;
    }
    else if ( PoSkipTickMode != 2 || KiSerializeTimerExpiration )
    {
      v33 = 4;
      NextTimerDueTime = KiFindNextTimerDueTime(v148, v26, 0);
      if ( KiGroupSchedulingEnabled )
      {
        v106 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v148 + 36)];
        v34 = v106 & 0x3F;
        if ( (((unsigned __int64)qword_14039BB08[v106 >> 6] >> (v106 & 0x3F)) & 1) != 0
          && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < NextTimerDueTime )
        {
          NextTimerDueTime = KiGenerationEndTick * KeMaximumIncrement;
          v33 = 5;
        }
      }
      if ( !*(_BYTE *)(v148 + 33) )
        goto LABEL_25;
      v107 = -1LL;
      LOBYTE(v34) = 0;
      for ( i = 2LL; i <= 3; ++i )
      {
        if ( qword_1403B44B0[3 * i] < v107 )
        {
          v34 = (unsigned __int8)v34;
          v107 = qword_1403B44B0[3 * i];
          if ( i == 3 )
            v34 = 1LL;
        }
      }
      v23 = v168;
      if ( v107 < NextTimerDueTime )
      {
        v33 = 6;
        NextTimerDueTime = v107;
        if ( (_BYTE)v34 )
          v33 = 7;
      }
      if ( *(_BYTE *)(v148 + 33) && (v109 = ((__int64 (__fastcall *)(__int64, __int64))off_140398A48[0])(i, v34)) != 0 )
      {
        v26 = (unsigned __int64)v150;
        if ( NextTimerDueTime > v109 )
        {
          NextTimerDueTime = v109;
          v33 = 9;
          if ( (unsigned __int64)v150 > v109 )
            NextTimerDueTime = (unsigned __int64)v150;
        }
      }
      else
      {
LABEL_25:
        v26 = (unsigned __int64)v150;
      }
    }
    else
    {
      v33 = 2;
    }
    v151 = v33;
    v20 = v148;
    if ( v32 <= NextTimerDueTime )
      v32 = NextTimerDueTime;
    NextTimerDueTime = 0LL;
  }
  if ( v32 == -1LL )
  {
    NextTimerDueTime = -1LL;
  }
  else if ( v32 > v26 )
  {
    NextTimerDueTime = v32 - v26;
  }
  v35 = *(_DWORD *)(v20 + 11684);
  v36 = 0;
  v37 = 0;
  for ( j = v35; j; j >>= 4 )
    v37 += KeMaximumIncrement;
  if ( v35 )
  {
    v39 = KeMaximumIncrement / (v35 + 1);
    if ( !v39 )
      v39 = 1;
    v30 = v39;
  }
  if ( NextTimerDueTime <= v30 )
  {
    v30 = NextTimerDueTime;
  }
  else
  {
    v31 |= 1u;
    if ( NextTimerDueTime >= v37 )
      NextTimerDueTime = v37;
  }
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( *(_BYTE *)(v20 + 33) )
    {
      LODWORD(v187[0]) = 1310721;
      memset((char *)v187 + 4, 0, 0xA4uLL);
      if ( KeNumberNodes )
      {
        v87 = KeNodeBlock;
        v88 = (unsigned __int16)KeNumberNodes;
        do
        {
          v89 = *v87;
          v90 = *(_WORD *)(*v87 + 144);
          v91 = *(_QWORD *)(*v87 + 72);
          if ( LOWORD(v187[0]) <= v90 )
            LOWORD(v187[0]) = v90 + 1;
          v187[v90 + 1] |= v91;
          if ( *(_QWORD *)(v89 + 72) )
            v36 = 1;
          ++v87;
          --v88;
        }
        while ( v88 );
        if ( v36 )
        {
          v98 = 0LL;
          v177 = 0;
          v176[1] = (unsigned __int16 *)v187[1];
          v176[0] = (unsigned __int16 *)v187;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v163, v176) )
          {
            Prcb = KeGetPrcb(v163);
            v100 = *(_QWORD *)(Prcb + 23848);
            if ( v100 > v98 && v100 != -1LL )
              v98 = *(_QWORD *)(Prcb + 23848);
          }
          if ( v98 && (unsigned __int64)v150 + NextTimerDueTime > v98 )
          {
            v31 |= 0x2000u;
            NextTimerDueTime = v98 > (unsigned __int64)v150 ? (unsigned int)(v98 - (_DWORD)v150) : 1LL;
            if ( NextTimerDueTime < v30 )
              v30 = NextTimerDueTime;
          }
        }
      }
    }
  }
  if ( v30 < v153 )
  {
    v30 = v153;
    NextTimerDueTime = v153;
    v31 |= 0x1000u;
  }
  *(_WORD *)(v27 + 48) |= v31;
  v40 = v151;
  *(_QWORD *)(v27 + 520) = NextTimerDueTime;
  v41 = v155;
  *(_BYTE *)(v27 + 541) = v40;
  *(_QWORD *)(v27 + 512) = v30;
  LODWORD(v153) = -1;
  v42 = *(__int64 (__fastcall **)(_QWORD, __int64))(v41 + 432);
  if ( v42 )
    LODWORD(v153) = v42(*(_QWORD *)(v41 + 488), v41 + 496);
  if ( *(_BYTE *)(v20 + 23869) )
    LODWORD(v153) = 0;
  v43 = v160;
  if ( v160 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v41 + 576));
    KeAddProcessorAffinityEx((_WORD *)(v41 + 576), *(_DWORD *)(v20 + 36));
    v110 = *(_DWORD *)v43;
    v111 = v41 + 792;
    v112 = *(_QWORD *)(v43 + 48);
    v157 = *(void **)(v41 + 752);
    memset(v157, 0, 4 * v110 + 8);
    v44 = v144;
    v113 = 0;
    v114 = v157;
    if ( *(_DWORD *)(v41 + 776) )
    {
      v115 = 0;
      do
      {
        if ( PpmIdleVetoBias || (v116 = *(_QWORD *)(v41 + 784), !*(_BYTE *)(v116 + 24LL * v113 + 1)) )
        {
          v114[v115 + 2] = -2;
        }
        else
        {
          v117 = *(unsigned int *)(v116 + 24LL * v113 + 4);
          v118 = v148;
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v117 < PpmDripsStateIndex
            || !PpmCheckPreConditionsForDeepSleep(v148) )
          {
            v120 = (unsigned __int8)v146;
            if ( v141 == 1 )
              v120 = 1;
            v119 = 0;
          }
          else
          {
            v119 = 1;
            v120 = (unsigned __int8)v146;
            if ( !v141 )
              v120 = 1;
          }
          v141 = v119;
          v146 = v120;
          if ( (_BYTE)v120 )
          {
            LOBYTE(v146) = 0;
            PpmEstimateIdleDuration(
              v118,
              v119,
              *v165,
              0,
              (__int64)&v161,
              (__int64)&v166,
              (__int64)&v154,
              (__int64)&v145);
          }
          v121 = v161;
          v122 = v159;
          v123 = v153;
          *(_DWORD *)(v111 + 4) = 0;
          v144 = -1;
          v124 = PpmIdleCheckCoordinatedStateEligibility(v118, v123, v122, v121, v117, v117, (__int64)&v144, v111);
          v44 = v144;
          v125 = v124;
          if ( !*(_BYTE *)(v160 + 12) && !v124 )
          {
            v126 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v160 + 16);
            if ( v126 )
              v125 = v126(*(_QWORD *)(v155 + 488), v144, (unsigned int)v117);
          }
          PpmIdleUpdateSelectionStatistics(v125, 1008 * v117 + v112 + 72);
          v127 = v160 + 384 * v117;
          if ( v125 != 0xFFFFFFFFLL )
            v167 = *(_QWORD *)(v127 + 64);
          if ( !v125 )
          {
            v129 = v157;
            v79 = v162;
            v80 = -1;
            *v162 = 1;
            *v129 = v117;
            if ( *(_BYTE *)(v127 + 121) )
              v80 = v117;
            if ( (unsigned int)KeSubtractAffinityEx(v23, (unsigned __int16 *)(v127 + 128), v189) )
              PpmUnlockProcessors(v23, v189);
            v45 = v156;
            LODWORD(v50) = 0;
            v20 = v148;
            v76 = (unsigned int)v156;
            v41 = v155;
            v47 = v141;
            goto LABEL_105;
          }
          if ( v125 == 2147483651LL )
          {
            v143 = 1;
          }
          else
          {
            v128 = (unsigned __int8)v152;
            if ( v125 == 2147483656LL )
              v128 = 1;
            v152 = v128;
          }
          PpmIdleRollbackCoordinatedSelection(v111, 0LL);
          v115 = v149;
          v114 = v157;
          *((_DWORD *)v157 + v149 + 2) = v125;
          v41 = v155;
        }
        ++v115;
        ++v113;
        v149 = v115;
      }
      while ( v113 < *(_DWORD *)(v41 + 776) );
      v20 = v148;
      v149 = v115;
    }
    *(_DWORD *)(v111 + 4) = 0;
    *v114 = -1;
    PpmUnlockProcessors(v23, v23);
  }
  else
  {
    v44 = v144;
  }
  v45 = *(unsigned int **)(v41 + 744);
  v46 = *(_DWORD *)(v41 + 32);
  v47 = 0;
  v156 = v45;
  v48 = 1;
  memset(v45, 0, 4 * v46 + 8);
  v50 = 0LL;
  v51 = 0;
  v167 = *(_QWORD *)(v41 + 40);
  v146 = 0;
  if ( !*(_DWORD *)(v41 + 760) )
  {
LABEL_303:
    v79 = v162;
    v76 = 0LL;
    goto LABEL_104;
  }
  v52 = 2147483658LL;
  v53 = 0x80000000;
  while ( 1 )
  {
    v54 = *(_QWORD *)(v41 + 768);
    v55 = (unsigned __int16 *)v51;
    v168 = (unsigned __int16 *)v51;
    v44 = *(_DWORD *)(v54 + 24LL * v51 + 4);
    v144 = v44;
    if ( !v160 && v44 == *(_DWORD *)(v41 + 32) - 1 && *(_BYTE *)(v41 + 540) && PpmCheckPreConditionsForDeepSleep(v20) )
    {
      v142 = 1;
      v49 = 1LL;
      if ( !v47 )
        v48 = 1;
    }
    else
    {
      if ( v47 == 1 )
        v48 = 1;
      LOBYTE(v49) = 0;
      v142 = 0;
    }
    if ( v48 )
    {
      v56 = -1LL;
      v57 = *(_BYTE *)(v20 + 33) == 0;
      LOBYTE(v150) = 0;
      v58 = *v165;
      v59 = *(unsigned __int8 *)(*(_QWORD *)(v20 + 23808) + 540LL);
      v60 = v50;
      v145 = v50;
      if ( !v57 )
      {
        v60 = 8;
        v145 = 8;
      }
      if ( (_BYTE)v49 )
        v145 = v60 | 4;
      v61 = 2;
      v62 = v148;
      v63 = KiClockTimerNextTickTime;
      v158 = 2;
      if ( *(_BYTE *)(v148 + 33) )
      {
        if ( (_BYTE)v59 )
        {
          if ( !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
          {
            KiGetNextTimerExpirationDueTime(v148, 1u, v58, v49, &v169, &v158);
            if ( v58 + (unsigned int)KiLastRequestedTimeIncrement < v169 )
            {
              v61 = v158;
              v63 = v169;
            }
          }
        }
      }
      else
      {
        v64 = v50;
        if ( *(_QWORD *)(v148 + 16) )
        {
          v61 = 1;
        }
        else if ( PoSkipTickMode != 2 || KiSerializeTimerExpiration )
        {
          v61 = 4;
          if ( (_BYTE)v49 )
            NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v59, v49);
          else
            NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v148, v58, 0);
          v64 = NextWakeTimeForDeepSleep;
          if ( KiGroupSchedulingEnabled )
          {
            v130 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v62 + 36)];
            if ( (((unsigned __int64)qword_14039BB08[v130 >> 6] >> (v130 & 0x3F)) & 1) != 0
              && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v64 )
            {
              v64 = KiGenerationEndTick * KeMaximumIncrement;
              v61 = 5;
            }
          }
          if ( *(_BYTE *)(v62 + 33) )
          {
            v131 = -1LL;
            v132 = v142 + 2LL;
            LOBYTE(v66) = 0;
            do
            {
              v133 = qword_1403B44B0[3 * v132];
              if ( v133 < v131 )
              {
                v66 = (unsigned __int8)v66;
                v131 = qword_1403B44B0[3 * v132];
                if ( v132 == 3 )
                  v66 = 1LL;
              }
              ++v132;
            }
            while ( v132 <= 3 );
            v55 = v168;
            v134 = *(_BYTE *)(v148 + 33);
            if ( v131 < v64 )
            {
              v64 = v131;
              v61 = 6;
              if ( (_BYTE)v66 )
              {
                v61 = 7;
                v134 = *(_BYTE *)(v148 + 33);
              }
            }
            if ( v134 )
            {
              v135 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, unsigned __int64, __int64))off_140398A48[0])(
                       *(unsigned __int8 *)(v148 + 33),
                       v131,
                       v133,
                       v66);
              if ( v135 )
              {
                if ( v64 > v135 )
                {
                  v64 = v135;
                  v61 = 9;
                  if ( v58 > v135 )
                    v64 = v58;
                }
              }
            }
          }
        }
        v169 = v64;
        if ( v63 <= v64 )
          v63 = v64;
      }
      if ( v63 == -1LL )
      {
        v67 = -1LL;
        v50 = 0LL;
      }
      else
      {
        v50 = 0LL;
        v67 = 0LL;
        if ( v63 > v58 )
          v67 = v63 - v58;
      }
      v154 = v61;
      v68 = 0;
      v20 = v148;
      v69 = *(_DWORD *)(v148 + 11684);
      for ( k = v69; k; k >>= 4 )
        v68 += KeMaximumIncrement;
      if ( !v142 && v69 )
      {
        v71 = KeMaximumIncrement / (v69 + 1);
        if ( !v71 )
          v71 = 1;
        v56 = v71;
      }
      if ( v67 <= v56 )
      {
        v56 = v67;
      }
      else
      {
        v145 |= 1u;
        if ( v67 >= v68 )
          v67 = v68;
      }
      if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(v148 + 33) )
      {
        LODWORD(v188[0]) = 1310721;
        v92 = 0;
        memset((char *)v188 + 4, 0, 0xA4uLL);
        if ( KeNumberNodes )
        {
          v93 = KeNodeBlock;
          v94 = (unsigned __int16)KeNumberNodes;
          do
          {
            v95 = *v93;
            v96 = *(_WORD *)(*v93 + 144);
            v97 = *(_QWORD *)(*v93 + 72);
            if ( LOWORD(v188[0]) <= v96 )
              LOWORD(v188[0]) = v96 + 1;
            v188[v96 + 1] |= v97;
            if ( *(_QWORD *)(v95 + 72) )
              v92 = 1;
            ++v93;
            --v94;
          }
          while ( v94 );
          if ( v92 )
          {
            v101 = 0LL;
            v179 = 0;
            v178[1] = (unsigned __int16 *)v188[1];
            v178[0] = (unsigned __int16 *)v188;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v164, v178) )
            {
              v102 = KeGetPrcb(v164);
              v103 = *(_QWORD *)(v102 + 23848);
              if ( v103 > v101 && v103 != -1LL )
                v101 = *(_QWORD *)(v102 + 23848);
            }
            if ( v101 && v67 + v58 > v101 )
            {
              v145 |= 0x2000u;
              v67 = v101 > v58 ? (unsigned int)(v101 - v58) : 1LL;
              if ( v67 < v56 )
                v56 = v67;
            }
          }
        }
        v50 = 0LL;
      }
      v44 = v144;
      v53 = 0x80000000;
      v51 = v146;
      v52 = 2147483658LL;
      v166 = v67;
      v41 = v155;
      v161 = v56;
      v48 = (char)v150;
    }
    if ( !v44 )
    {
      v49 = v50;
      goto LABEL_96;
    }
    v72 = *(_QWORD *)(v20 + 23808);
    if ( *(_DWORD *)(v72 + 36) == 3 && PpmIdleVetoBias )
    {
      v49 = 4294967294LL;
      goto LABEL_96;
    }
    v73 = 248LL * v44;
    if ( *(_BYTE *)(v73 + v72 + 1063) )
    {
      v49 = v52;
      goto LABEL_96;
    }
    if ( v44 > (unsigned int)v153 && (_DWORD)v153 != -1 )
    {
      v49 = 2147483656LL;
      goto LABEL_96;
    }
    if ( !*(_BYTE *)(v73 + v72 + 1058) && *(_BYTE *)(v72 + 539) )
    {
      v49 = 2147483655LL;
      goto LABEL_96;
    }
    if ( *(_DWORD *)(v73 + v72 + 1016) )
    {
      if ( *(_QWORD *)(v73 + v72 + 1048) )
      {
        v136 = (__int64 *)(v73 + v72 + 1024);
        v137 = *v136;
        v57 = *v136 == (_QWORD)v136;
        v84 = v53;
        if ( !v57 )
          v84 = *(_DWORD *)(v137 + 16);
      }
      else
      {
        v84 = v53;
      }
    }
    else
    {
      v84 = v50;
    }
    v44 = v144;
    if ( v84 )
    {
      v49 = v84 | 0x100000000LL;
    }
    else
    {
      if ( *(_DWORD *)(v73 + v72 + 1000) > v159 )
      {
        v44 = v144;
        v49 = 2147483650LL;
        goto LABEL_96;
      }
      if ( *(unsigned int *)(v73 + v72 + 1004) > v161 )
      {
        v44 = v144;
        v49 = 2147483651LL;
        goto LABEL_96;
      }
      v85 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(v72 + 448);
      v49 = v85 ? v85(*(_QWORD *)(v72 + 488), v144) : v50;
    }
    if ( !v49 )
    {
      v86 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v41 + 440);
      if ( v86 )
        v49 = v86(*(_QWORD *)(v41 + 488), v44, 0xFFFFFFFFLL);
    }
LABEL_96:
    v74 = v171 + 1000LL * v44;
    if ( !v49 )
    {
      v75 = 0;
LABEL_98:
      ++*(_QWORD *)(v74 + 8LL * v75 + 80);
      goto LABEL_99;
    }
    if ( (v49 & 0x80000000) == 0 )
    {
      if ( (v49 & 0x100000000LL) != 0 )
      {
        v138 = *(_QWORD *)(v74 + 200);
        v75 = 2;
        if ( v138 )
          ++*(_QWORD *)(((unsigned __int64)(((unsigned int)v49 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v138 + 32) + 24);
      }
      else
      {
        v75 = 1;
      }
      goto LABEL_98;
    }
    if ( (unsigned int)v49 <= 0x8000000C )
    {
      v75 = v49 - 2147483646;
      goto LABEL_98;
    }
LABEL_99:
    if ( !v49 )
      break;
    if ( v49 == 2147483651LL )
    {
      v143 = 1;
    }
    else if ( v49 == 2147483656LL )
    {
      LOBYTE(v152) = 1;
    }
    v83 = v156;
    ++v51;
    v47 = v142;
    v50 = 0LL;
    v146 = v51;
    v53 = 0x80000000;
    v52 = 2147483658LL;
    v156[(_QWORD)v55 + 2] = v49;
    if ( v51 >= *(_DWORD *)(v41 + 760) )
    {
      v47 = v142;
      v45 = v83;
      goto LABEL_303;
    }
  }
  v45 = v156;
  v76 = v51;
  v77 = 248LL * v44;
  *v156 = v44;
  v147 = v51;
  v78 = !*(_BYTE *)(v77 + v41 + 1058) || v160 && (!*(_BYTE *)(v77 + v41 + 1061) || v44);
  v79 = v162;
  LODWORD(v50) = 0;
  v47 = v142;
  *v162 = v78;
LABEL_104:
  v80 = -1;
LABEL_105:
  if ( *v79 )
  {
    LOBYTE(v76) = 1;
    PpmIdleSetSynchronizationState(v20 + 23872, v76);
    LODWORD(v76) = v147;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v139 = v157;
    if ( v157 )
    {
      v140 = v149;
      *((_DWORD *)v157 + 1) = v149;
      v181 = v139;
      v183 = v50;
      v182 = 4 * v140 + 8;
      EtwTraceKernelEvent((int)&v181, 1, 0x40200000u, 4670, 1538);
      LODWORD(v76) = v147;
      LODWORD(v50) = 0;
    }
    if ( v45 )
    {
      v45[1] = v76;
      v185 = 4 * v76 + 8;
      v184 = v45;
      v186 = v50;
      EtwTraceKernelEvent((int)&v184, 1, 0x40200000u, 4669, 1538);
    }
  }
  *(_WORD *)(v41 + 48) |= v145;
  v81 = (_QWORD *)v175;
  *(_BYTE *)(v41 + 7) = v152;
  *(_BYTE *)(v41 + 6) = v143;
  *(_QWORD *)(v41 + 520) = v166;
  *(_QWORD *)(v41 + 512) = v161;
  *(_BYTE *)(v41 + 541) = v154;
  *v172 = v44;
  *v173 = v80;
  *v174 = v47;
  result = v167;
  *v81 = v167;
  return result;
}
