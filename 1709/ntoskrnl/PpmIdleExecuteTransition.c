/*
 * XREFs of PpmIdleExecuteTransition @ 0x140096C70
 * Callers:
 *     PoIdle @ 0x1400967A0 (PoIdle.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1400574C0 (PsGetCurrentProcess.c)
 *     KeRemoveProcessorAffinityEx @ 0x14005B700 (KeRemoveProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     PpmUpdatePerformanceFeedback @ 0x140098470 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x1400987C0 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     PpmGetExitSamplingCountdown @ 0x1400B19A8 (PpmGetExitSamplingCountdown.c)
 *     KePrepareClockTimerForIdle @ 0x14010F380 (KePrepareClockTimerForIdle.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14014D6C4 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmIdleUpdateConcurrency @ 0x140152E68 (PpmIdleUpdateConcurrency.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeFlushCurrentTbImmediately @ 0x14017B290 (KeFlushCurrentTbImmediately.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401822F0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KdCallPowerHandlers @ 0x14020150C (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x1402017B0 (KdPowerTransitionEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KeUpdatePendingQosRequest @ 0x14020A080 (KeUpdatePendingQosRequest.c)
 *     PpmExitCoordinatedIdleState @ 0x14023AB14 (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14023B5B0 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleSetSynchronizationState @ 0x14023B9DC (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x14023BBF8 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x14023C450 (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x14023CBD0 (PpmUpdatePlatformIdleAccounting.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x140240898 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventCoordinatedIdleTransition @ 0x14024A678 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x14024A814 (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r14
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v10; // r15
  unsigned __int16 *v11; // r12
  unsigned int v12; // esi
  __int64 v13; // rbx
  unsigned int v14; // edi
  _BYTE *v15; // rbx
  ULONG v16; // ecx
  __int64 Prcb; // rax
  KSPIN_LOCK *v18; // rcx
  int v19; // ebp
  unsigned __int64 v20; // rdi
  unsigned __int16 v21; // bx
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned __int8 (__fastcall *v26)(__int64); // rax
  unsigned __int16 v27; // cx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  char v30; // di
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // r11
  __int64 v35; // r10
  unsigned __int64 v36; // rbx
  __int64 v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  signed __int64 v41; // rax
  __int64 v42; // rbx
  bool v43; // r14
  signed __int64 v44; // rdi
  int v45; // eax
  int v46; // edi
  int v47; // r8d
  unsigned __int16 v48; // ax
  unsigned __int64 *v49; // r9
  __int64 v50; // r10
  unsigned __int64 v51; // rdx
  int v52; // eax
  int ExitSamplingCountdown; // eax
  int v54; // ecx
  __int64 v55; // r15
  signed __int64 v56; // rdi
  __int64 v57; // rbp
  __int64 v58; // rbx
  unsigned int v59; // edi
  __int64 v60; // rsi
  __int64 v61; // rbx
  unsigned __int8 v62; // r11
  struct _KPRCB *CurrentPrcb; // rbx
  int v64; // edi
  int v65; // eax
  __int64 v66; // rdi
  __int16 v67; // r12
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  KSPIN_LOCK *v70; // rcx
  ULONG_PTR v71; // r14
  int v72; // r9d
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rbp
  unsigned __int64 v75; // rbx
  unsigned __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 (__fastcall *v78)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  int v79; // eax
  int v80; // ebp
  __int64 v81; // rbp
  __int64 v82; // rbx
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // r8
  int v86; // eax
  __int64 v87; // rbp
  unsigned __int8 v88; // dl
  __int16 v89; // bx
  char v90; // r8
  struct _KPRCB *v102; // rbx
  __int64 Number; // rax
  unsigned __int64 v104; // rcx
  unsigned __int64 v105; // rax
  unsigned __int8 v106; // al
  int v107; // eax
  struct _KPRCB *v108; // rax
  __int64 v109; // rcx
  int v110; // eax
  LARGE_INTEGER v111; // r10
  __int64 v112; // rax
  ULONG_PTR v113; // rbx
  unsigned __int64 v114; // rbx
  bool v115; // r12
  unsigned __int64 v116; // rax
  __int64 v117; // rdx
  unsigned __int8 v118; // al
  int *v119; // rcx
  unsigned int v120; // esi
  bool v121; // bp
  char v122; // r9
  unsigned int i; // ebx
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // rbx
  __int64 v127; // r15
  __int64 v128; // rdi
  unsigned __int64 v129; // rax
  __int64 v130; // rcx
  unsigned __int64 v131; // rax
  __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  __int64 v134; // rbp
  __int64 v135; // rbx
  __int64 j; // r8
  unsigned __int16 v137; // di
  unsigned __int64 v138; // rsi
  unsigned __int64 v139; // rdx
  int v140; // ebp
  __int64 v141; // rbx
  __int64 v142; // r14
  unsigned __int32 v143; // eax
  unsigned __int32 v144; // r8d
  signed __int32 v145; // ecx
  unsigned __int16 v146; // r13
  __int64 v147; // rbp
  __int64 result; // rax
  unsigned __int8 v149; // [rsp+40h] [rbp-3A8h]
  volatile unsigned __int8 DeepSleep; // [rsp+41h] [rbp-3A7h]
  char v151; // [rsp+42h] [rbp-3A6h]
  int v152; // [rsp+44h] [rbp-3A4h]
  char v153; // [rsp+48h] [rbp-3A0h]
  char v154; // [rsp+49h] [rbp-39Fh]
  char v155; // [rsp+4Ah] [rbp-39Eh]
  unsigned int BugCheckParameter2; // [rsp+4Ch] [rbp-39Ch]
  char BugCheckParameter2_4; // [rsp+50h] [rbp-398h] BYREF
  __int64 v158; // [rsp+58h] [rbp-390h]
  ULONG_PTR v159; // [rsp+60h] [rbp-388h]
  unsigned int v160; // [rsp+68h] [rbp-380h]
  unsigned int v161; // [rsp+6Ch] [rbp-37Ch]
  int v162; // [rsp+70h] [rbp-378h]
  int v163; // [rsp+74h] [rbp-374h]
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp-370h]
  unsigned int v165; // [rsp+80h] [rbp-368h]
  int v166; // [rsp+84h] [rbp-364h]
  int v167; // [rsp+88h] [rbp-360h] BYREF
  __int64 v168; // [rsp+90h] [rbp-358h]
  __int64 v169; // [rsp+98h] [rbp-350h]
  __int64 v170; // [rsp+A8h] [rbp-340h]
  _DWORD v171[2]; // [rsp+B0h] [rbp-338h] BYREF
  unsigned __int16 *v172; // [rsp+B8h] [rbp-330h]
  _QWORD v173[2]; // [rsp+C0h] [rbp-328h] BYREF
  _QWORD v174[3]; // [rsp+D0h] [rbp-318h] BYREF
  int v175; // [rsp+E8h] [rbp-300h]
  int v176; // [rsp+ECh] [rbp-2FCh]
  __int64 v177; // [rsp+F0h] [rbp-2F8h]
  _QWORD v178[3]; // [rsp+F8h] [rbp-2F0h] BYREF
  __int64 v179; // [rsp+110h] [rbp-2D8h]
  int v180; // [rsp+118h] [rbp-2D0h]
  int v181; // [rsp+11Ch] [rbp-2CCh]
  int v182; // [rsp+120h] [rbp-2C8h]
  int v183; // [rsp+124h] [rbp-2C4h]
  unsigned int v184; // [rsp+128h] [rbp-2C0h] BYREF
  __int16 v185; // [rsp+12Ch] [rbp-2BCh]
  __int16 v186; // [rsp+12Eh] [rbp-2BAh]
  __int64 v187; // [rsp+130h] [rbp-2B8h]
  __int64 v188; // [rsp+138h] [rbp-2B0h] BYREF
  int v189; // [rsp+140h] [rbp-2A8h]
  int v190; // [rsp+144h] [rbp-2A4h]
  _QWORD v191[2]; // [rsp+148h] [rbp-2A0h] BYREF
  _QWORD v192[2]; // [rsp+158h] [rbp-290h] BYREF
  __int128 v193; // [rsp+168h] [rbp-280h]
  _DWORD v194[44]; // [rsp+180h] [rbp-268h] BYREF
  _DWORD v195[44]; // [rsp+230h] [rbp-1B8h] BYREF
  _BYTE v196[176]; // [rsp+2E0h] [rbp-108h] BYREF
  int v197; // [rsp+3E0h] [rbp-8h]
  void *retaddr; // [rsp+3E8h] [rbp+0h]

  v8 = *(_QWORD *)(a1 + 23808);
  v160 = a3;
  v165 = -1;
  v167 = -1;
  BugCheckParameter4 = a1;
  v10 = 0LL;
  v168 = *(_QWORD *)(v8 + 488);
  v159 = a1;
  v177 = a4;
  BugCheckParameter2 = a2;
  PerformanceCounter.QuadPart = 0LL;
  v163 = 0;
  v166 = 0;
  DeepSleep = 0;
  v153 = 0;
  LOBYTE(v162) = 0;
  v154 = 0;
  v151 = 0;
  v158 = v8;
  v170 = v8 + 248LL * a2 + 816;
  v155 = 0;
  v169 = a1 + 23872;
  v152 = 0;
  if ( !a8 || *(_BYTE *)(v8 + 539) || (v149 = 1, *(_BYTE *)(v8 + 248LL * a2 + 816 + 245)) )
    v149 = 0;
  v161 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
      PpmIdleSetSynchronizationState(a1 + 23872, 1LL);
    v11 = (unsigned __int16 *)(v8 + 240);
    *(_QWORD *)(v8 + 240) = 1310721LL;
    memset((void *)(v8 + 248), 0, 0xA0uLL);
    v12 = *(_DWORD *)(v8 + 548);
    v13 = *(_QWORD *)(v8 + 552);
    v174[1] = 0LL;
    v174[2] = 0LL;
    v173[0] = 1LL;
    v174[0] = 65537LL;
    v14 = 0;
    v173[1] = v174;
    if ( v12 )
    {
      v15 = (_BYTE *)(v13 + 4);
      while ( 1 )
      {
        if ( *v15 != 0xFF )
        {
          v16 = *((_DWORD *)v15 - 1);
          HIDWORD(v174[0]) = (unsigned __int8)*v15;
          Prcb = KeGetPrcb(v16);
          v152 = PpmTestAndLockProcessor(Prcb, v8 + 240, v173);
          v19 = v152;
          if ( v152 < 0 )
            break;
        }
        ++v14;
        v15 += 8;
        if ( v14 >= v12 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v20 = *(_QWORD *)(v8 + 248);
      v21 = 0;
LABEL_14:
      while ( 1 )
      {
        v18 = (KSPIN_LOCK *)*v11;
        if ( !v20 )
          break;
LABEL_17:
        _BitScanForward64(&v22, v20);
        v20 &= ~(1LL << v22);
        v175 = v22;
        v23 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * v21 + (unsigned __int8)v22]);
        v178[2] = v23;
        v24 = *(_QWORD *)(v23 + 23808);
        v179 = 0LL;
        v178[0] = 0LL;
        v25 = *(_QWORD *)(v24 + 488);
        v178[1] = PopIdleTransitionTimeout;
        v26 = *(unsigned __int8 (__fastcall **)(__int64))(v24 + 472);
        BYTE4(v179) = 1;
        if ( !v26(v25) )
        {
          while ( (*(_DWORD *)(v23 + 23872) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(v178);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v24 + 472))(*(_QWORD *)(v24 + 488)) )
              goto LABEL_14;
          }
          v19 = -1073741782;
          v152 = -1073741782;
          goto LABEL_23;
        }
      }
      while ( ++v21 < (unsigned __int16)v18 )
      {
        v20 = *(_QWORD *)&v11[4 * v21 + 4];
        if ( v20 )
          goto LABEL_17;
      }
      v19 = 0;
      v152 = 0;
    }
LABEL_23:
    if ( v19 < 0 )
    {
      if ( a8 )
        PpmIdleSetSynchronizationState(v169, 0LL);
      BugCheckParameter4 = v159;
      v10 = 1LL;
      v161 = 1;
      goto LABEL_238;
    }
    BugCheckParameter4 = v159;
  }
  v11 = (unsigned __int16 *)(v8 + 240);
  v27 = 0;
  v28 = *(unsigned __int16 *)(v8 + 240);
  v172 = (unsigned __int16 *)(v8 + 240);
  if ( (_WORD)v28 )
  {
    while ( !*(_QWORD *)&v11[4 * v27 + 4] )
    {
      if ( ++v27 >= (unsigned __int16)v28 )
        goto LABEL_33;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_33:
  v29 = *(_QWORD *)(v8 + 512);
  v30 = 0;
  v169 = 2LL;
  if ( !PpmPerfQosEnabled )
  {
LABEL_45:
    v34 = v149;
    v35 = v170;
    *(_DWORD *)(BugCheckParameter4 + 23860) = BugCheckParameter2;
    *(_BYTE *)(BugCheckParameter4 + 23856) = v149;
    if ( a8 )
    {
      *(_BYTE *)(BugCheckParameter4 + 23857) = *(_BYTE *)(v35 + 242) == 0;
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 2LL);
    }
    if ( v30 || *(_BYTE *)(v8 + 6) || *(_BYTE *)(v8 + 7) )
    {
      v36 = -1LL;
      v154 = 1;
      if ( *(_BYTE *)(v8 + 6) )
      {
        v37 = KeMaximumIncrement;
        if ( *(_QWORD *)(v8 + 520) > (unsigned __int64)KeMaximumIncrement )
          v37 = *(_QWORD *)(v8 + 520);
        v36 = a7 + KeMaximumIncrement + v37;
      }
      if ( *(_BYTE *)(v8 + 7) )
      {
        v38 = *(_DWORD *)(2688LL * dword_1403661AC + PpmCurrentProfile + 144);
        if ( v36 >= a7 + (unsigned __int64)(unsigned int)(10 * v38) )
          v36 = a7 + (unsigned int)(10 * v38);
      }
      if ( v30 && v36 >= a7 + PpmPerfQosIdleHysteresis )
        v36 = a7 + PpmPerfQosIdleHysteresis;
      *(_QWORD *)(BugCheckParameter4 + 23848) = v36;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
        *(unsigned __int8 *)(BugCheckParameter4 + 209));
    }
    if ( *(_BYTE *)(v35 + 241) || v30 )
      goto LABEL_116;
    v39 = *(_QWORD *)(BugCheckParameter4 + 200);
    v40 = *(_QWORD *)(BugCheckParameter4 + 192);
    v153 = 1;
    _m_prefetchw((const void *)(v40 + 64));
    v41 = _InterlockedOr64((volatile signed __int64 *)(v40 + 64), v39);
    v42 = *(_QWORD *)(BugCheckParameter4 + 23808);
    v43 = 0;
    v163 = 0;
    v44 = v41;
    if ( v34 )
    {
      v163 = 1;
    }
    else if ( v160 == -1 )
    {
      v47 = 0;
      v48 = *(_WORD *)(v42 + 240);
      if ( v48 )
      {
        v49 = (unsigned __int64 *)(v42 + 248);
        v50 = v48;
        do
        {
          v51 = *v49++;
          v47 += (unsigned int)((0x101010101010101LL
                               * ((((v51 - ((v51 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v51 - ((v51 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v51 - ((v51 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v51 - ((v51 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          --v50;
        }
        while ( v50 );
        v11 = v172;
        BugCheckParameter4 = v159;
        LODWORD(v10) = 0;
      }
      if ( v47 != (_DWORD)KeNumberProcessors_0 - 1 )
        goto LABEL_83;
      v34 = v149;
      v163 = 2;
    }
    v52 = *(_DWORD *)(v42 + 8);
    v43 = 0;
    if ( v52 )
      *(_DWORD *)(v42 + 8) = v52 - 1;
    if ( !*(_DWORD *)(v42 + 8) )
    {
      ExitSamplingCountdown = PpmGetExitSamplingCountdown();
      *(_DWORD *)(v42 + 8) = ExitSamplingCountdown;
      v43 = ExitSamplingCountdown != 0;
    }
    if ( v43 )
    {
      *(_BYTE *)(v42 + 3) = 1;
      if ( !v34 )
        goto LABEL_83;
      *(_QWORD *)(v42 + 56) = -1LL;
    }
    if ( v34 )
    {
LABEL_84:
      v54 = ((__int64 (__fastcall *)(_QWORD))off_140353480[0])((unsigned int)v10);
      v152 = v54;
      if ( *(_DWORD *)(BugCheckParameter4 + 11800) )
      {
        v152 = -2147483631;
LABEL_86:
        if ( a8 )
          PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 0LL);
        v10 = 0LL;
        v161 = 0;
LABEL_232:
        _interlockedbittestandreset64(
          (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL),
          *(unsigned __int8 *)(BugCheckParameter4 + 209));
        v46 = v152;
        if ( (_BYTE)v162 && v152 >= 0 )
          v119 = &v167;
        else
          v119 = 0LL;
        KeResumeClockTimerFromIdle(v119);
        off_140353490();
        KeAccumulateTicks(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 11892), MEMORY[0xFFFFF78000000320], 0, 0);
        v8 = v158;
        goto LABEL_239;
      }
      if ( v54 < 0 )
        goto LABEL_86;
      v55 = v158;
      if ( *(_BYTE *)v158 == 1 )
      {
        v56 = *(_QWORD *)(BugCheckParameter4 + 200) | v44;
        v57 = PpmPlatformStates;
        v58 = *(unsigned __int8 *)(BugCheckParameter4 + 208);
        if ( PpmPlatformStates )
        {
          v194[0] = 1310721;
          memset(&v194[1], 0, 0xA4uLL);
          if ( (_WORD)v58 )
            LOWORD(v194[0]) = v58 + 1;
          *(_QWORD *)&v194[2 * v58 + 2] |= v56;
          v59 = 0;
          v60 = *(_QWORD *)(v55 + 752);
          if ( *(_DWORD *)(v60 + 4) )
          {
            while ( 1 )
            {
              if ( *(_DWORD *)(v60 + 4LL * v59 + 8) == -1 )
              {
                v61 = 384LL * *(unsigned int *)(*(_QWORD *)(v55 + 784) + 24LL * v59 + 4);
                KeAndAffinityEx((unsigned __int16 *)(v61 + v57 + 128), (unsigned __int16 *)v194, v196);
                if ( (unsigned int)KeIsEqualAffinityEx(v61 + v57 + 128, v196) )
                  break;
              }
              if ( ++v59 >= *(_DWORD *)(v60 + 4) )
                goto LABEL_98;
            }
            BugCheckParameter4 = v159;
            v152 = -1073741802;
            goto LABEL_86;
          }
LABEL_98:
          BugCheckParameter4 = v159;
        }
      }
      if ( v43 )
        *(_WORD *)(v55 + 48) |= 0x200u;
      v62 = v149;
      if ( v149 )
      {
        v155 = 1;
        _InterlockedIncrement(&PpmNonInterruptibleCount);
        CurrentPrcb = KeGetCurrentPrcb();
        v64 = KiClockTimerOwner;
        if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
        {
          off_1403535C8[0]();
          CurrentPrcb->PendingTickFlags &= ~1u;
          v62 = v149;
        }
        if ( CurrentPrcb->Number == v64 )
          ++dword_140370CE8;
        if ( CurrentPrcb->ClockOwner )
          CurrentPrcb->ClockOwner = 0;
      }
      if ( *(_BYTE *)(v55 + 540) )
      {
        LOBYTE(v65) = v162;
        if ( v43 )
        {
          v65 = (unsigned __int8)v162;
          if ( !v62 )
            v65 = 1;
          v162 = v65;
        }
        v8 = v55;
        KePrepareClockTimerForIdle(a5, *(_QWORD *)(v55 + 520), (unsigned __int8)v65);
      }
      else
      {
        v8 = v55;
      }
LABEL_116:
      v66 = *(_QWORD *)(BugCheckParameter4 + 24192);
      v67 = v197;
      if ( v66 )
      {
        _disable();
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(*(_QWORD *)(BugCheckParameter4 + 24192));
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)v66, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v66);
        }
        v68 = *(_QWORD *)(v66 + 16);
        v69 = *(unsigned int *)(v66 + 12);
        if ( a6 > v68 )
        {
          *(_QWORD *)(v66 + 16) = a6;
          *(_QWORD *)(v66 + 24) += a6 - v68;
          *(_QWORD *)(v66 + 8 * v69 + 32) += a6 - v68;
        }
        *(_DWORD *)(v66 + 12) = v69 - 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v66, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v66, 0LL);
        if ( (v67 & 0x200) != 0 )
          _enable();
        v70 = *(KSPIN_LOCK **)(BugCheckParameter4 + 24200);
        if ( v70 )
          PpmIdleUpdateConcurrency(v70);
      }
      *(_DWORD *)(v8 + 16) = BugCheckParameter2;
      v71 = BugCheckParameter4 + 23880;
      v72 = 0;
      v73 = __rdtsc();
      if ( (*(_QWORD *)(v159 + 25248) & 0x8000000000LL) != 0 )
        v74 = __readmsr(0xDB2u);
      else
        v74 = 0LL;
      v75 = a6 - *(_QWORD *)(v71 + 40);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 56), v75);
      if ( (*(_QWORD *)(v159 + 25248) & 0x8000000000LL) != 0 )
      {
        *(_QWORD *)(v71 + 128) += PpmConvertTime(v75, v73 - *(_QWORD *)(v71 + 8), v74 - *(_QWORD *)(v71 + 120));
        v72 = 0;
      }
      v76 = *(_QWORD *)(v71 + 8);
      *(_QWORD *)(v71 + 40) = a6;
      if ( v73 > v76 )
        *(_QWORD *)(v71 + 16) += v73 - v76;
      *(_QWORD *)(v71 + 8) = v73;
      BugCheckParameter4 = v159;
      if ( (*(_QWORD *)(v159 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v71 + 120) = v74;
      LOBYTE(v72) = 1;
      PpmUpdatePerformanceFeedback(BugCheckParameter4, 0, 0, v72, 0LL);
      if ( PopSnapEnergyCounters )
        PopSnapEnergyCounters(*(unsigned int *)(BugCheckParameter4 + 36), 0LL, 0LL);
      v77 = v158;
      _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 23840), a6);
      v78 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v158 + 416);
      if ( v78 )
      {
        v79 = v78(v168, BugCheckParameter2, v160, *(unsigned int *)(v158 + 796), *(_QWORD *)(v158 + 808));
        v77 = v158;
        v80 = v79;
        v152 = v79;
      }
      else
      {
        v80 = v152;
      }
      if ( v80 >= 0 )
      {
        v81 = *(_QWORD *)(v77 + 808);
        LODWORD(v82) = *(_DWORD *)(v77 + 796);
        v151 = 1;
        if ( v160 != -1 )
        {
          v83 = PpmPlatformStates + 384LL * v160;
          PpmEventEnterPlatformIdleState();
          if ( !qword_140389C80 && v160 == dword_140389CC0 )
            _InterlockedCompareExchange64(&qword_140389C80, MEMORY[0xFFFFF78000000008], 0LL);
          if ( a5 )
            ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
          if ( *(_BYTE *)(v83 + 120) )
          {
            LOBYTE(v84) = 1;
            KdPowerTransitionEx(2147483652LL, v84);
            KdCallPowerHandlers(4LL);
          }
          BugCheckParameter4 = v159;
        }
        if ( (_DWORD)v82 )
        {
          if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
          {
            v188 = v81;
            v189 = 4 * v82;
            v190 = 0;
            EtwTraceKernelEvent((unsigned int)&v188, 1, 1073774592, 4671, 1538);
          }
          do
          {
            v82 = (unsigned int)(v82 - 1);
            v85 = 384LL * *(unsigned int *)(v81 + 4 * v82) + PpmPlatformStates;
            *(_QWORD *)(v85 + 328) = a6;
            v86 = *(_DWORD *)(v85 + 320);
            if ( !*(_DWORD *)(PpmPlatformStates + 4) )
              v86 ^= ((unsigned __int16)v86 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
            *(_DWORD *)(v85 + 320) = v86 & 0xF8FFFFFF | 0x4000000;
          }
          while ( (_DWORD)v82 );
        }
        v87 = v158;
        if ( v160 != -1 )
          *(_WORD *)(v158 + 48) |= 0x10u;
        v88 = *(_BYTE *)(v87 + 541);
        v89 = *(_WORD *)(v87 + 48);
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v187 = *(_QWORD *)(v87 + 512);
          v184 = BugCheckParameter2;
          v186 = v88;
          v191[0] = &v184;
          v185 = v89;
          v191[1] = 16LL;
          EtwTraceKernelEvent((unsigned int)v191, 1, 1073774592, 4665, 1538);
        }
        if ( a8 )
          PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, (unsigned __int8)(v149 + 3));
        if ( v153 )
        {
          DeepSleep = 0;
          if ( *(_BYTE *)(v170 + 240) >= 2u && (HvlEnlightenments & 4) == 0 )
          {
            v90 = byte_140356719;
            _R9D = 1;
            if ( byte_140356719 == -1 )
            {
              _RAX = 1LL;
              __asm { cpuid }
              v90 = 0;
              v180 = _RAX;
              v181 = _RBX;
              v182 = _RCX;
              v183 = _RDX;
              if ( (int)_RCX < 0 )
              {
                _RAX = 1073741825LL;
                __asm { cpuid }
                v180 = _RAX;
                v181 = _RBX;
                v90 = (_DWORD)_RAX == 1986945624;
                v182 = _RCX;
                v183 = _RDX;
              }
              byte_140356719 = v90;
            }
            if ( !v90 )
            {
              v102 = KeGetCurrentPrcb();
              if ( v102->CpuVendor == 1 )
              {
                DeepSleep = 0;
              }
              else
              {
                Number = v102->Number;
                v102->DeepSleep = 1;
                _InterlockedOr64(
                  (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                            + 3582696
                                            + 0x140000000LL),
                  1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
                if ( !v102->DeepSleep )
                {
                  _InterlockedAnd64(
                    (volatile signed __int64 *)(8LL
                                              * ((unsigned int)KiProcessorIndexToNumberMappingTable[v102->Number] >> 6)
                                              + 3582696
                                              + 0x140000000LL),
                    ~(1LL << (KiProcessorIndexToNumberMappingTable[v102->Number] & 0x3F)));
                  if ( KiFlushPcid )
                  {
                    v193 = 2uLL;
                    __asm { invpcid r9d, [rsp+3E8h+var_280] }
                    if ( !PsGetCurrentProcess()->AddressPolicy )
                      KiSetUserTbFlushPending();
                  }
                  else
                  {
                    v104 = __readcr4();
                    if ( (v104 & 0x20080) != 0 )
                    {
                      __writecr4(v104 ^ 0x80);
                      __writecr4(v104);
                    }
                    else
                    {
                      v105 = __readcr3();
                      __writecr3(v105);
                    }
                  }
                }
                DeepSleep = v102->DeepSleep;
              }
            }
          }
        }
        if ( (*(_BYTE *)(BugCheckParameter4 + 249) & 1) != 0 )
        {
          v106 = *(_BYTE *)(BugCheckParameter4 + 250);
          if ( v106 )
          {
            *(_BYTE *)(BugCheckParameter4 + 248) |= 1u;
            v166 = v106;
          }
        }
        v107 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, _QWORD))(v87 + 424))(
                 v168,
                 v177,
                 BugCheckParameter2,
                 v160,
                 v166,
                 *(_DWORD *)(v87 + 796),
                 *(_QWORD *)(v87 + 808));
        *(_BYTE *)(BugCheckParameter4 + 248) &= ~1u;
        v152 = v107;
        if ( DeepSleep && *(_BYTE *)(BugCheckParameter4 + 23450) )
        {
          v108 = KeGetCurrentPrcb();
          v109 = v108->Number;
          v108->DeepSleep = 0;
          _InterlockedAnd64(
            &qword_14036AAE8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v109] >> 6],
            ~(1LL << (KiProcessorIndexToNumberMappingTable[v109] & 0x3F)));
          KeFlushCurrentTbImmediately();
        }
        v110 = *(_DWORD *)(v87 + 64);
        v80 = v152;
        if ( v110 < 0 )
        {
          if ( v152 >= 0 )
            v80 = v110;
          v152 = v80;
        }
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v192[1] = 8LL;
          v171[0] = BugCheckParameter2;
          v171[1] = v80;
          v192[0] = v171;
          EtwTraceKernelEvent((unsigned int)v192, 1, 1073774592, 4666, 1538);
        }
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 23840), 0LL);
      v111 = PerformanceCounter;
      if ( *(_BYTE *)(v71 + 137) )
      {
        _disable();
        KxAcquireSpinLock((PKSPIN_LOCK)v71);
        v112 = 2LL;
        v113 = v71 + 24;
        do
        {
          if ( *(_QWORD *)v113 && *(_BYTE *)(*(_QWORD *)v113 + 34LL) )
          {
            PpmPerfFeedbackCounterUpdate();
            v112 = v169;
          }
          v113 += 8LL;
          v169 = --v112;
        }
        while ( v112 );
        KxReleaseSpinLock((PKSPIN_LOCK)v71);
        if ( (v67 & 0x200) != 0 )
          _enable();
        v111 = PerformanceCounter;
        BugCheckParameter4 = v159;
      }
      v114 = __rdtsc();
      if ( (*(_QWORD *)(BugCheckParameter4 + 25248) & 0x8000000000LL) != 0 )
        v18 = (KSPIN_LOCK *)__readmsr(0xDB2u);
      else
        v18 = 0LL;
      *(LARGE_INTEGER *)(v71 + 40) = v111;
      *(_QWORD *)(v71 + 8) = v114;
      if ( (*(_QWORD *)(BugCheckParameter4 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v71 + 120) = v18;
      if ( !v66 )
      {
LABEL_226:
        *(_QWORD *)(BugCheckParameter4 + 23824) = PerformanceCounter.QuadPart - a6;
        if ( a8 )
        {
          v118 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 0LL);
          if ( v80 >= 0 && v118 != 8 && v149 )
            KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v118, BugCheckParameter4);
          *(_BYTE *)(BugCheckParameter4 + 23857) = 0;
        }
        v10 = 3LL;
        v11 = v172;
        if ( !v153 )
        {
          v8 = v158;
LABEL_238:
          v46 = v152;
          goto LABEL_239;
        }
        goto LABEL_232;
      }
      _disable();
      v115 = (v67 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v66);
      }
      else
      {
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v66, 0LL) )
        {
LABEL_217:
          v116 = *(_QWORD *)(v66 + 16);
          v117 = *(unsigned int *)(v66 + 12);
          if ( v111.QuadPart > v116 )
          {
            *(LARGE_INTEGER *)(v66 + 16) = v111;
            *(_QWORD *)(v66 + 24) += v111.QuadPart - v116;
            *(_QWORD *)(v66 + 8 * v117 + 32) += v111.QuadPart - v116;
          }
          *(_DWORD *)(v66 + 12) = v117 + 1;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v66, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v66, 0LL);
          if ( v115 )
            _enable();
          v18 = *(KSPIN_LOCK **)(BugCheckParameter4 + 24200);
          if ( v18 )
            PpmIdleUpdateConcurrency(v18);
          goto LABEL_226;
        }
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v66);
      }
      v111 = PerformanceCounter;
      goto LABEL_217;
    }
LABEL_83:
    LODWORD(v10) = 1;
    goto LABEL_84;
  }
  if ( PpmPerfVmQosSupported )
  {
    v31 = *(_DWORD *)(BugCheckParameter4 + 236);
    goto LABEL_43;
  }
  if ( *(_DWORD *)(BugCheckParameter4 + 24304) == 2 )
    goto LABEL_45;
  if ( (*(_DWORD *)(BugCheckParameter4 + 24312) & 4) != 0 )
  {
LABEL_42:
    *(_DWORD *)(BugCheckParameter4 + 24304) = 2;
    LOBYTE(v28) = 1;
    PpmPerfArbitratorApplyProcessorState(BugCheckParameter4, v28, 0LL);
    v31 = *(_DWORD *)(BugCheckParameter4 + 236) & 0xFFFFFFFC | 2;
    *(_DWORD *)(BugCheckParameter4 + 236) = v31;
LABEL_43:
    if ( (v31 & 0xC) != 0 )
    {
      *(_DWORD *)(BugCheckParameter4 + 236) = v31 & 0xFFFFFFF3;
      KeUpdatePendingQosRequest(BugCheckParameter4);
    }
    goto LABEL_45;
  }
  v28 = __rdtsc();
  v32 = v28 - *(_QWORD *)(BugCheckParameter4 + 24288);
  if ( v29 >= (unsigned __int64)PpmPerfQosIdleHysteresis >> 1 )
  {
    v33 = *(_QWORD *)(BugCheckParameter4 + 24296);
    if ( v32 >= v33 || *(_BYTE *)(BugCheckParameter4 + 24227) )
    {
      *(_QWORD *)(BugCheckParameter4 + 24288) = v28;
      *(_BYTE *)(BugCheckParameter4 + 24227) = v32 >= 2 * v33;
      goto LABEL_42;
    }
  }
  v45 = *(_DWORD *)(BugCheckParameter4 + 236);
  v30 = 1;
  if ( (v45 & 0xC) != 0 )
    goto LABEL_45;
  *(_DWORD *)(BugCheckParameter4 + 236) = v45 & 0xFFFFFFF3 | 8;
  KeUpdatePendingQosRequest(BugCheckParameter4);
  v46 = -1073741802;
  v161 = 0;
  v152 = -1073741802;
  if ( a8 )
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 0LL);
LABEL_239:
  LOBYTE(v18) = 1;
  ((void (__fastcall *)(KSPIN_LOCK *))off_1403536E8[0])(v18);
  if ( v154 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
    *(_QWORD *)(BugCheckParameter4 + 23848) = -1LL;
  }
  v120 = 0;
  v121 = (_DWORD)v10 != 3;
  if ( PpmPlatformStates )
  {
    v122 = v151;
    if ( !v151 )
    {
      for ( i = 0; i < *(_DWORD *)(v8 + 796); ++i )
      {
        v124 = *(unsigned int *)(*(_QWORD *)(v8 + 808) + 4LL * i);
        v125 = PpmPlatformStates + 384 * v124;
        if ( (*(_DWORD *)(v125 + 320) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v125 + 320) = *(_DWORD *)(v125 + 320) & 0xFE000FFF | ((*(_DWORD *)(v125 + 320) & 0xFFF | 0x2000) << 12);
        if ( (_DWORD)v10 != 3 )
          ++*(_DWORD *)(1008 * v124 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
      }
    }
    LODWORD(v126) = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      v127 = v46;
      while ( 1 )
      {
        v126 = (unsigned int)(v126 - 1);
        v128 = 384 * v126 + PpmPlatformStates + 64;
        v129 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v159 + 36)];
        if ( ((*(_QWORD *)(v128 + 8 * (v129 >> 6) + 72) >> (v129 & 0x3F)) & 1) != 0
          && (unsigned __int8)PpmExitCoordinatedIdleState(v128 + 256, &BugCheckParameter2_4) )
        {
          v130 = v120++;
          *(_DWORD *)(*(_QWORD *)(v158 + 808) + 4 * v130) = v126;
          if ( v120 == 1 )
          {
            if ( *(_BYTE *)(v128 + 57) )
            {
              v165 = v126;
              if ( v151 )
              {
                if ( *(_BYTE *)(v128 + 56) )
                {
                  KdCallPowerHandlers(1LL);
                  KdPowerTransitionEx(2147483649LL, 1LL);
                }
                if ( (PopSimulate & 0x100) != 0 && v127 >= 0 )
                {
                  if ( !v121 )
                    goto LABEL_264;
                  if ( a5 && (_DWORD)v126 == PpmDripsStateIndex )
                    KeBugCheckEx(0xA0u, 0x257uLL, (unsigned int)v126, 0LL, 0LL);
                }
              }
            }
          }
          if ( !v121 )
          {
LABEL_264:
            v131 = *(_QWORD *)(v128 + 264);
            v132 = 1008LL * (unsigned int)v126 + *(_QWORD *)(PpmPlatformStates + 48) + 24LL;
            if ( PerformanceCounter.QuadPart >= v131 )
            {
              v133 = PerformanceCounter.QuadPart - v131;
              *(_QWORD *)(v132 + 32) += PerformanceCounter.QuadPart - v131;
            }
            else
            {
              v133 = 0LL;
            }
            if ( v127 < 0 && BugCheckParameter2_4 )
            {
              ++*(_DWORD *)(v132 + 4);
            }
            else
            {
              ++*(_DWORD *)(v132 + 8);
              PpmUpdatePlatformIdleAccounting(v132, v133);
            }
          }
        }
        if ( !(_DWORD)v126 )
        {
          v122 = v151;
          v10 = v161;
          break;
        }
      }
    }
    v134 = v158;
    if ( v122 )
      PpmEventCoordinatedIdleTransition(0LL, v120, *(_QWORD *)(v158 + 808));
  }
  else
  {
    v134 = v158;
  }
  *(_DWORD *)(v134 + 796) = v120;
  if ( (_DWORD)v10 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v134 + 456))(
      v168,
      BugCheckParameter2,
      v165,
      v120,
      *(_QWORD *)(v134 + 808));
  }
  else if ( !*(_BYTE *)v134 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v134 + 464))(v168, (unsigned int)v10);
  }
  LODWORD(v135) = *(_DWORD *)(v134 + 796);
  for ( j = *(_QWORD *)(v134 + 808);
        (_DWORD)v135;
        *(_DWORD *)(384LL * *(unsigned int *)(j + 4 * v135) + PpmPlatformStates + 320) = 0 )
  {
    v135 = (unsigned int)(v135 - 1);
  }
  if ( v155 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v195[0] = 1310721;
  memset(&v195[1], 0, 0xA4uLL);
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  v137 = 0;
  v138 = *((_QWORD *)v11 + 1);
  while ( v138 )
  {
LABEL_288:
    _BitScanForward64(&v139, v138);
    v138 &= ~(1LL << v139);
    v176 = v139;
    v140 = KiProcessorNumberToIndexMappingTable[64 * v137 + (unsigned __int8)v139];
    v141 = KeGetPrcb(v140);
    v142 = *(_QWORD *)(v141 + 23808);
    _m_prefetchw((const void *)(v141 + 23872));
    v143 = *(_DWORD *)(v141 + 23872);
    do
    {
      v144 = v143;
      v145 = v143 ^ (v143 ^ (v143 - 1)) & 0xFFFFFF;
      if ( (v145 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v143) == 5 )
        {
          v145 = v145 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v143) == 7 )
        {
          v145 = v145 & 0xFFFFFF | 0x6000000;
        }
      }
      v143 = _InterlockedCompareExchange((volatile signed __int32 *)(v141 + 23872), v145, v143);
    }
    while ( v143 != v144 );
    if ( HIBYTE(v145) == 6 )
      KeAddProcessorAffinityEx(v195, v140);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v142
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v10] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v10] & 0x3F)));
    KeRemoveProcessorAffinityEx(v11, v140);
  }
  while ( ++v137 < *v11 )
  {
    v138 = *(_QWORD *)&v11[4 * v137 + 4];
    if ( v138 )
      goto LABEL_288;
  }
  v146 = 0;
  if ( LOWORD(v195[0]) )
  {
    while ( !*(_QWORD *)&v195[2 * v146 + 2] )
    {
      if ( ++v146 >= LOWORD(v195[0]) )
        goto LABEL_303;
    }
    HalRequestIpi(0LL, v195);
  }
LABEL_303:
  v147 = v158;
  if ( *(_BYTE *)(v158 + 3) )
    PpmIdleCompleteExitLatencyTrace(v159, v152, v149, PerformanceCounter.LowPart, v167, v163, BugCheckParameter2, v165);
  result = v161;
  *(_DWORD *)(v147 + 68) = v161;
  *(_DWORD *)(v147 + 64) = v152;
  return result;
}
