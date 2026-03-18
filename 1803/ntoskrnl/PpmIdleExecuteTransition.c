/*
 * XREFs of PpmIdleExecuteTransition @ 0x14010BC10
 * Callers:
 *     PoIdle @ 0x14010B740 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeAndAffinityEx @ 0x140035310 (KeAndAffinityEx.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     KePrepareClockTimerForIdle @ 0x1400396A0 (KePrepareClockTimerForIdle.c)
 *     PpmGetExitSamplingCountdown @ 0x140073838 (PpmGetExitSamplingCountdown.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     PpmExitCoordinatedIdle @ 0x14010D150 (PpmExitCoordinatedIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x14010D1C0 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x14010D530 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x14010DC30 (KeResumeClockTimerFromIdle.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14016BADC (PpmPerfArbitratorApplyProcessorState.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401ABF40 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KdCallPowerHandlers @ 0x14023E5EC (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x14023E890 (KdPowerTransitionEx.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KeUpdatePendingQosRequest @ 0x140247D04 (KeUpdatePendingQosRequest.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140272AA4 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleSetSynchronizationState @ 0x140272FD8 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x14027314C (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateConcurrency @ 0x1402731E0 (PpmIdleUpdateConcurrency.c)
 *     PpmTestAndLockProcessor @ 0x140273A34 (PpmTestAndLockProcessor.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x140277EF8 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventEnterPlatformIdleState @ 0x140280784 (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  ULONG_PTR v8; // rbp
  char v9; // r15
  ULONG_PTR v10; // r13
  int v11; // r12d
  unsigned __int16 *v12; // r14
  unsigned int v13; // esi
  __int64 v14; // rbx
  unsigned int v15; // edi
  _BYTE *v16; // rbx
  ULONG v17; // ecx
  __int64 Prcb; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned __int16 v21; // bx
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned __int8 (__fastcall *v26)(__int64); // rax
  unsigned int v27; // edi
  unsigned __int64 v28; // rdx
  char v29; // bp
  char v30; // si
  bool v31; // di
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  unsigned __int8 v37; // bp
  unsigned int v38; // edi
  ULONG_PTR v39; // r10
  ULONG_PTR v40; // rsi
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  signed __int64 v46; // rax
  __int64 v47; // rbx
  char v48; // r15
  signed __int64 v49; // rdi
  int v50; // r8d
  unsigned __int16 v51; // ax
  unsigned __int64 *v52; // r9
  __int64 v53; // r10
  unsigned __int64 v54; // rdx
  int v55; // eax
  int v56; // eax
  int ExitSamplingCountdown; // eax
  char v58; // r9
  signed __int64 v59; // rdi
  __int64 v60; // rbp
  __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  int v66; // edi
  char v67; // al
  KSPIN_LOCK *v68; // rax
  KSPIN_LOCK *v69; // rcx
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rbx
  unsigned __int64 v73; // rcx
  __int64 (__fastcall *v74)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  ULONG_PTR v75; // rsi
  __int64 v76; // rsi
  __int64 v77; // rbx
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rdx
  int v81; // eax
  __int16 v82; // cx
  unsigned __int8 v83; // bl
  char v84; // r8
  struct _KPRCB *v96; // rbx
  __int64 Number; // rax
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rax
  unsigned __int8 v100; // al
  int v101; // eax
  struct _KPRCB *v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rcx
  unsigned __int64 v105; // rax
  __int64 v106; // rsi
  bool v107; // si
  __int64 v108; // rax
  ULONG_PTR v109; // rbx
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // rcx
  unsigned __int8 v112; // al
  int *v113; // rcx
  ULONG_PTR v114; // rbx
  unsigned int v115; // eax
  __int64 v116; // r8
  __int64 v117; // r8
  unsigned __int16 v118; // di
  unsigned __int64 v119; // rsi
  unsigned int v120; // ecx
  unsigned __int64 v121; // rdx
  int v122; // ebp
  __int64 v123; // rbx
  __int64 v124; // r15
  unsigned __int32 v125; // eax
  unsigned __int32 v126; // r8d
  signed __int32 v127; // ecx
  unsigned __int16 v128; // r15
  __int64 result; // rax
  unsigned __int8 v130; // [rsp+40h] [rbp-398h]
  volatile unsigned __int8 DeepSleep; // [rsp+41h] [rbp-397h]
  char v132; // [rsp+42h] [rbp-396h]
  char v133; // [rsp+43h] [rbp-395h]
  unsigned __int8 v134; // [rsp+44h] [rbp-394h]
  char v135; // [rsp+45h] [rbp-393h]
  int v136; // [rsp+48h] [rbp-390h]
  ULONG_PTR BugCheckParameter2_4; // [rsp+50h] [rbp-388h]
  bool v139; // [rsp+58h] [rbp-380h]
  int v140; // [rsp+5Ch] [rbp-37Ch]
  unsigned int v141; // [rsp+60h] [rbp-378h]
  int v142; // [rsp+64h] [rbp-374h]
  unsigned int v143; // [rsp+64h] [rbp-374h]
  __int64 QuadPart; // [rsp+70h] [rbp-368h]
  int v146; // [rsp+78h] [rbp-360h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+80h] [rbp-358h]
  __int64 v148; // [rsp+88h] [rbp-350h]
  ULONG_PTR v149; // [rsp+90h] [rbp-348h]
  _DWORD v150[2]; // [rsp+98h] [rbp-340h] BYREF
  ULONG_PTR v151; // [rsp+A0h] [rbp-338h]
  __int64 v152; // [rsp+A8h] [rbp-330h]
  ULONG_PTR v153; // [rsp+B0h] [rbp-328h]
  _QWORD v154[2]; // [rsp+B8h] [rbp-320h] BYREF
  _QWORD v155[3]; // [rsp+C8h] [rbp-310h] BYREF
  int v156; // [rsp+E0h] [rbp-2F8h]
  int v157; // [rsp+E4h] [rbp-2F4h]
  __int64 v158; // [rsp+E8h] [rbp-2F0h]
  _QWORD v159[3]; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v160; // [rsp+108h] [rbp-2D0h]
  int v161; // [rsp+110h] [rbp-2C8h]
  int v162; // [rsp+114h] [rbp-2C4h]
  int v163; // [rsp+118h] [rbp-2C0h]
  int v164; // [rsp+11Ch] [rbp-2BCh]
  unsigned int v165; // [rsp+120h] [rbp-2B8h] BYREF
  __int16 v166; // [rsp+124h] [rbp-2B4h]
  __int16 v167; // [rsp+126h] [rbp-2B2h]
  __int64 v168; // [rsp+128h] [rbp-2B0h]
  __int64 v169; // [rsp+130h] [rbp-2A8h] BYREF
  int v170; // [rsp+138h] [rbp-2A0h]
  int v171; // [rsp+13Ch] [rbp-29Ch]
  _QWORD v172[2]; // [rsp+140h] [rbp-298h] BYREF
  _QWORD v173[2]; // [rsp+150h] [rbp-288h] BYREF
  __int128 v174; // [rsp+160h] [rbp-278h]
  _DWORD v175[44]; // [rsp+170h] [rbp-268h] BYREF
  _DWORD v176[44]; // [rsp+220h] [rbp-1B8h] BYREF
  _BYTE v177[176]; // [rsp+2D0h] [rbp-108h] BYREF
  int v178; // [rsp+3D0h] [rbp-8h]

  v8 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v9 = 0;
  v10 = BugCheckParameter4;
  v153 = BugCheckParameter4;
  v158 = a4;
  v11 = 0;
  v148 = *(_QWORD *)(v8 + 488);
  v151 = v8 + 792;
  LODWORD(SpinLock) = 0;
  QuadPart = 0LL;
  v140 = 0;
  v142 = 0;
  DeepSleep = 0;
  v132 = 0;
  v139 = 0;
  v133 = 0;
  v134 = 0;
  v146 = -1;
  BugCheckParameter2_4 = v8;
  v149 = v8 + 248LL * a2 + 816;
  v135 = 0;
  v136 = 0;
  if ( !a8 || *(_BYTE *)(v8 + 539) || (v130 = 1, *(_BYTE *)(v8 + 248LL * a2 + 816 + 245)) )
    v130 = 0;
  v141 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 1LL);
    v12 = (unsigned __int16 *)(v8 + 240);
    *(_QWORD *)(v8 + 240) = 1310721LL;
    memset((void *)(v8 + 248), 0, 0xA0uLL);
    v13 = *(_DWORD *)(v8 + 548);
    v14 = *(_QWORD *)(v8 + 552);
    v155[1] = 0LL;
    v155[2] = 0LL;
    v154[0] = 1LL;
    v155[0] = 65537LL;
    v15 = 0;
    v154[1] = v155;
    if ( v13 )
    {
      v16 = (_BYTE *)(v14 + 4);
      while ( 1 )
      {
        if ( *v16 != 0xFF )
        {
          v17 = *((_DWORD *)v16 - 1);
          HIDWORD(v155[0]) = (unsigned __int8)*v16;
          Prcb = KeGetPrcb(v17);
          v136 = PpmTestAndLockProcessor(Prcb, v8 + 240, v154);
          v11 = v136;
          if ( v136 < 0 )
            break;
        }
        ++v15;
        v16 += 8;
        if ( v15 >= v13 )
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
        v19 = v12 ? *v12 : (unsigned int)v21 + 1;
        if ( !v20 )
          break;
LABEL_20:
        _BitScanForward64(&v22, v20);
        v20 &= ~(1LL << v22);
        v156 = v22;
        v23 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * v21 + (unsigned __int8)v22]);
        v159[2] = v23;
        v24 = *(_QWORD *)(v23 + 23808);
        v160 = 0LL;
        v159[0] = 0LL;
        v25 = *(_QWORD *)(v24 + 488);
        v159[1] = PopIdleTransitionTimeout;
        v26 = *(unsigned __int8 (__fastcall **)(__int64))(v24 + 472);
        BYTE4(v160) = 1;
        if ( !v26(v25) )
        {
          while ( (*(_DWORD *)(v23 + 23872) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(v159);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v24 + 472))(*(_QWORD *)(v24 + 488)) )
              goto LABEL_14;
          }
          v11 = -1073741782;
          goto LABEL_26;
        }
      }
      while ( ++v21 < (unsigned int)v19 )
      {
        v20 = *(_QWORD *)&v12[4 * v21 + 4];
        if ( v20 )
          goto LABEL_20;
      }
      v11 = 0;
LABEL_26:
      v136 = v11;
      v8 = BugCheckParameter2_4;
    }
    if ( v11 < 0 )
    {
      if ( a8 )
        PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
      v27 = 1;
      v141 = 1;
      goto LABEL_225;
    }
  }
  v12 = (unsigned __int16 *)(v8 + 240);
  v19 = 0LL;
  v28 = *(unsigned __int16 *)(v8 + 240);
  if ( (_WORD)v28 )
  {
    while ( !*(_QWORD *)&v12[4 * (unsigned __int16)v19 + 4] )
    {
      LOWORD(v19) = v19 + 1;
      if ( (unsigned __int16)v19 >= (unsigned __int16)v28 )
        goto LABEL_36;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_36:
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  v152 = 2LL;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(v10 + 24304) != 2 )
  {
    v32 = *(_QWORD *)(v10 + 24184);
    if ( v32 && *(_BYTE *)(v32 + 121) )
    {
      v30 = 1;
      _disable();
      v31 = (v178 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v32 + 128));
    }
    if ( (*(_DWORD *)(v10 + 24312) & 4) == 0 )
    {
      v28 = __rdtsc();
      v19 = v28 - *(_QWORD *)(v10 + 24288);
      v33 = *(_QWORD *)(v10 + 24296);
      if ( v19 < v33 && !*(_BYTE *)(v10 + 24227) )
      {
        v34 = *(_DWORD *)(v10 + 236);
        v9 = 1;
        if ( (v34 & 0xC) == 0 )
        {
          v29 = 1;
          v35 = v34 & 0xFFFFFFF3 | 8;
LABEL_51:
          *(_DWORD *)(v10 + 236) = v35;
          KeUpdatePendingQosRequest(v10);
          goto LABEL_52;
        }
        goto LABEL_52;
      }
      *(_QWORD *)(v10 + 24288) = v28;
      *(_BYTE *)(v10 + 24227) = v19 >= 2 * v33;
    }
    *(_DWORD *)(v10 + 24304) = 2;
    LOBYTE(v28) = 1;
    PpmPerfArbitratorApplyProcessorState(v10, v28, 0LL);
    *(_DWORD *)(v10 + 236) = *(_DWORD *)(v10 + 236) & 0xFFFFFFFC | 2;
  }
  v36 = *(_DWORD *)(v10 + 236);
  if ( (v36 & 0xC) != 0 )
  {
    v35 = v36 & 0xFFFFFFF3;
    goto LABEL_51;
  }
LABEL_52:
  if ( v30 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v32 + 128));
    if ( v31 )
      _enable();
  }
  if ( v29 )
  {
    v11 = -1073741802;
    v27 = 0;
    v141 = 0;
    v136 = -1073741802;
    if ( a8 )
      PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
    goto LABEL_225;
  }
  v37 = v130;
  v38 = a2;
  v39 = v149;
  *(_BYTE *)(v10 + 23856) = v130;
  *(_DWORD *)(v10 + 23860) = a2;
  if ( a8 )
  {
    LOBYTE(v28) = 2;
    *(_BYTE *)(v10 + 23857) = *(_BYTE *)(v39 + 242) == 0;
    PpmIdleSetSynchronizationState(v10 + 23872, v28);
  }
  v40 = BugCheckParameter2_4;
  if ( v9 || *(_BYTE *)(BugCheckParameter2_4 + 6) || *(_BYTE *)(BugCheckParameter2_4 + 7) )
  {
    v41 = -1LL;
    v133 = 1;
    if ( *(_BYTE *)(BugCheckParameter2_4 + 6) )
    {
      v42 = *(_QWORD *)(BugCheckParameter2_4 + 520);
      if ( v42 <= KeMaximumIncrement )
        v42 = KeMaximumIncrement;
      v41 = a7 + KeMaximumIncrement + v42;
    }
    if ( *(_BYTE *)(BugCheckParameter2_4 + 7) )
    {
      v43 = PpmCurrentProfile[336 * dword_1403AAA2C + 18];
      if ( v41 >= a7 + (unsigned __int64)(unsigned int)(10 * v43) )
        v41 = a7 + (unsigned int)(10 * v43);
    }
    if ( v9 && v41 >= a7 + PpmPerfQosIdleHysteresis )
      v41 = a7 + PpmPerfQosIdleHysteresis;
    *(_QWORD *)(v10 + 23848) = v41;
    _interlockedbittestandset64(
      (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 72LL),
      *(unsigned __int8 *)(v10 + 209));
  }
  if ( *(_BYTE *)(v39 + 241) || v9 )
    goto LABEL_125;
  v44 = *(_QWORD *)(v10 + 200);
  v45 = *(_QWORD *)(v10 + 192);
  v132 = 1;
  _m_prefetchw((const void *)(v45 + 64));
  v46 = _InterlockedOr64((volatile signed __int64 *)(v45 + 64), v44);
  v47 = *(_QWORD *)(v10 + 23808);
  v48 = 0;
  v140 = 0;
  v49 = v46;
  if ( v130 )
  {
    v140 = 1;
  }
  else if ( a3 == -1 )
  {
    v50 = 0;
    v51 = *(_WORD *)(v47 + 240);
    if ( v51 )
    {
      v52 = (unsigned __int64 *)(v47 + 248);
      v53 = v51;
      do
      {
        v54 = *v52++;
        v50 += (unsigned int)((0x101010101010101LL
                             * ((((v54 - ((v54 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v54 - ((v54 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v54 - ((v54 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v54 - ((v54 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v53;
      }
      while ( v53 );
      v10 = v153;
      v40 = BugCheckParameter2_4;
      v37 = v130;
    }
    if ( v50 != (_DWORD)KeNumberProcessors_0 - 1 )
      goto LABEL_93;
    v140 = 2;
  }
  v55 = *(_DWORD *)(v47 + 12);
  v48 = 0;
  if ( !v55 || (v56 = v55 - 1, (*(_DWORD *)(v47 + 12) = v56) == 0) )
  {
    ExitSamplingCountdown = PpmGetExitSamplingCountdown();
    v48 = 0;
    *(_DWORD *)(v47 + 12) = ExitSamplingCountdown;
    if ( ExitSamplingCountdown )
      v48 = v58;
  }
  if ( !v48 )
  {
LABEL_92:
    if ( v37 )
      goto LABEL_94;
    goto LABEL_93;
  }
  *(_BYTE *)(v47 + 3) = 1;
  if ( v37 )
  {
    *(_QWORD *)(v47 + 56) = -1LL;
    goto LABEL_92;
  }
LABEL_93:
  LODWORD(SpinLock) = 1;
LABEL_94:
  v11 = ((__int64 (__fastcall *)(_QWORD))off_140398820[0])((unsigned int)SpinLock);
  v136 = v11;
  if ( !*(_DWORD *)(v10 + 11800) )
  {
    if ( v11 < 0 )
      goto LABEL_97;
    if ( *(_BYTE *)v40 == 1 )
    {
      v59 = *(_QWORD *)(v10 + 200) | v49;
      v60 = PpmPlatformStates;
      v61 = *(unsigned __int8 *)(v10 + 208);
      if ( PpmPlatformStates )
      {
        v175[0] = 1310721;
        memset(&v175[1], 0, 0xA4uLL);
        if ( (_WORD)v61 )
          LOWORD(v175[0]) = v61 + 1;
        *(_QWORD *)&v175[2 * v61 + 2] |= v59;
        v62 = 0LL;
        v63 = *(_QWORD *)(v40 + 752);
        if ( *(_DWORD *)(v63 + 4) )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v63 + 4 * v62 + 8) == -1 )
            {
              v64 = 384LL * *(unsigned int *)(*(_QWORD *)(BugCheckParameter2_4 + 784) + 24 * v62 + 4);
              KeAndAffinityEx((unsigned __int16 *)(v64 + v60 + 128), (unsigned __int16 *)v175, v177);
              if ( (unsigned int)KeIsEqualAffinityEx(v64 + v60 + 128, v177) )
                break;
            }
            v62 = (unsigned int)(v62 + 1);
            if ( (unsigned int)v62 >= *(_DWORD *)(v63 + 4) )
              goto LABEL_109;
          }
          v11 = -1073741802;
          goto LABEL_96;
        }
LABEL_109:
        v40 = BugCheckParameter2_4;
      }
      v37 = v130;
    }
    if ( v48 )
      *(_WORD *)(v40 + 48) |= 0x200u;
    if ( v37 )
    {
      v135 = 1;
      _InterlockedIncrement(&PpmNonInterruptibleCount);
      CurrentPrcb = KeGetCurrentPrcb();
      v66 = KiClockTimerOwner;
      if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
      {
        off_140398968[0]();
        CurrentPrcb->PendingTickFlags &= ~1u;
      }
      if ( CurrentPrcb->Number == v66 )
        ++dword_1403B3DC8;
      if ( CurrentPrcb->ClockOwner )
        CurrentPrcb->ClockOwner = 0;
    }
    if ( *(_BYTE *)(v40 + 540) )
    {
      v67 = 0;
      if ( v48 )
      {
        v67 = v37 == 0;
        v139 = v37 == 0;
      }
      KePrepareClockTimerForIdle(a5, *(_QWORD *)(v40 + 520), v67);
    }
    v38 = a2;
LABEL_125:
    v68 = *(KSPIN_LOCK **)(v10 + 24192);
    SpinLock = v68;
    if ( v68 )
    {
      PpmIdleUpdateConcurrency(v68);
      v69 = *(KSPIN_LOCK **)(v10 + 24200);
      if ( v69 )
        PpmIdleUpdateConcurrency(v69);
    }
    *(_DWORD *)(v40 + 20) = v38;
    v70 = __rdtsc();
    if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
      v71 = __readmsr(0xDB2u);
    else
      v71 = 0LL;
    v72 = a6 - *(_QWORD *)(v10 + 23920);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 23936), v72);
    if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
      *(_QWORD *)(v10 + 24008) += PpmConvertTime(v72, v70 - *(_QWORD *)(v10 + 23888), v71 - *(_QWORD *)(v10 + 24000));
    v73 = *(_QWORD *)(v10 + 23888);
    *(_QWORD *)(v10 + 23920) = a6;
    if ( v70 > v73 )
      *(_QWORD *)(v10 + 23896) += v70 - v73;
    *(_QWORD *)(v10 + 23888) = v70;
    if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
      *(_QWORD *)(v10 + 24000) = v71;
    LOBYTE(a4) = 1;
    PpmUpdatePerformanceFeedback(v10, 0, 0, a4, 0LL);
    if ( PopSnapEnergyCounters )
      PopSnapEnergyCounters(*(unsigned int *)(v10 + 36), 0LL, 0LL);
    _InterlockedExchange64((volatile __int64 *)(v10 + 23840), a6);
    v74 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(BugCheckParameter2_4 + 416);
    if ( v74 )
    {
      v75 = BugCheckParameter2_4 + 792;
      v11 = v74(v148, a2, a3, *(unsigned int *)(BugCheckParameter2_4 + 796), *(_QWORD *)(BugCheckParameter2_4 + 808));
      v136 = v11;
    }
    else
    {
      v75 = v151;
    }
    if ( v11 >= 0 )
    {
      v76 = *(_QWORD *)(v75 + 16);
      v134 = 1;
      LODWORD(v77) = *(_DWORD *)(v151 + 4);
      if ( a3 != -1 )
      {
        v78 = PpmPlatformStates + 384LL * a3;
        PpmEventEnterPlatformIdleState(a3);
        if ( !qword_1403CDAC0 && a3 == dword_1403CDB00 )
          _InterlockedCompareExchange64(&qword_1403CDAC0, MEMORY[0xFFFFF78000000008], 0LL);
        if ( a5 )
        {
          *(_BYTE *)(PpmPlatformStates + 56) = 1;
          ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
        }
        if ( *(_BYTE *)(v78 + 120) )
        {
          LOBYTE(v79) = 1;
          KdPowerTransitionEx(2147483652LL, v79);
          KdCallPowerHandlers(4LL);
        }
      }
      if ( (_DWORD)v77 )
      {
        if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v169 = v76;
          v170 = 4 * v77;
          v171 = 0;
          EtwTraceKernelEvent((int)&v169, 1, 0x40008000u, 4671, 1538);
        }
        do
        {
          v77 = (unsigned int)(v77 - 1);
          v80 = PpmPlatformStates + 384LL * *(unsigned int *)(v76 + 4 * v77);
          *(_QWORD *)(v80 + 328) = a6;
          v81 = *(_DWORD *)(v80 + 320);
          if ( !*(_DWORD *)(PpmPlatformStates + 4) )
            v81 ^= ((unsigned __int16)v81 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
          *(_DWORD *)(v80 + 320) = v81 & 0xF8FFFFFF | 0x4000000;
        }
        while ( (_DWORD)v77 );
      }
      if ( a3 != -1 )
        *(_WORD *)(BugCheckParameter2_4 + 48) |= 0x10u;
      v82 = *(_WORD *)(BugCheckParameter2_4 + 48);
      v83 = *(_BYTE *)(BugCheckParameter2_4 + 541);
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v168 = *(_QWORD *)(BugCheckParameter2_4 + 512);
        v165 = a2;
        v172[0] = &v165;
        v166 = v82;
        v167 = v83;
        v172[1] = 16LL;
        EtwTraceKernelEvent((int)v172, 1, 0x40008000u, 4665, 1538);
      }
      if ( a8 )
        PpmIdleSetSynchronizationState(v10 + 23872, (unsigned __int8)(v130 + 3));
      if ( v132 )
      {
        DeepSleep = 0;
        if ( *(_BYTE *)(v149 + 240) >= 2u && (HvlEnlightenments & 4) == 0 )
        {
          v84 = byte_14039B800;
          _R9D = 1;
          if ( byte_14039B800 == -1 )
          {
            _RAX = 1LL;
            __asm { cpuid }
            v84 = 0;
            v161 = _RAX;
            v162 = _RBX;
            v163 = _RCX;
            v164 = _RDX;
            if ( (int)_RCX < 0 )
            {
              _RAX = 1073741825LL;
              __asm { cpuid }
              v161 = _RAX;
              v162 = _RBX;
              v84 = (_DWORD)_RAX == 1986945624;
              v163 = _RCX;
              v164 = _RDX;
            }
            byte_14039B800 = v84;
          }
          if ( !v84 )
          {
            v96 = KeGetCurrentPrcb();
            if ( v96->CpuVendor == 1 )
            {
              DeepSleep = 0;
            }
            else
            {
              Number = v96->Number;
              v96->DeepSleep = 1;
              _InterlockedOr64(
                (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                          + 3857352
                                          + 0x140000000LL),
                1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
              if ( !v96->DeepSleep )
              {
                _InterlockedAnd64(
                  (volatile signed __int64 *)(8LL
                                            * ((unsigned int)KiProcessorIndexToNumberMappingTable[v96->Number] >> 6)
                                            + 3857352
                                            + 0x140000000LL),
                  ~(1LL << (KiProcessorIndexToNumberMappingTable[v96->Number] & 0x3F)));
                if ( KiFlushPcid )
                {
                  v174 = 2uLL;
                  __asm { invpcid r9d, [rsp+3D8h+var_278] }
                  if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                    KiSetUserTbFlushPending();
                }
                else
                {
                  v98 = __readcr4();
                  if ( (v98 & 0x20080) != 0 )
                  {
                    __writecr4(v98 ^ 0x80);
                    __writecr4(v98);
                  }
                  else
                  {
                    v99 = __readcr3();
                    __writecr3(v99);
                  }
                }
              }
              DeepSleep = v96->DeepSleep;
            }
          }
        }
      }
      if ( (*(_BYTE *)(v10 + 249) & 1) != 0 )
      {
        v100 = *(_BYTE *)(v10 + 250);
        if ( v100 )
        {
          *(_BYTE *)(v10 + 248) |= 1u;
          v142 = v100;
        }
      }
      v101 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, _QWORD))(BugCheckParameter2_4
                                                                                              + 424))(
               v148,
               v158,
               a2,
               a3,
               v142,
               *(_DWORD *)(BugCheckParameter2_4 + 796),
               *(_QWORD *)(BugCheckParameter2_4 + 808));
      *(_BYTE *)(v10 + 248) &= ~1u;
      v11 = v101;
      v136 = v101;
      if ( DeepSleep && *(_BYTE *)(v10 + 23450) )
      {
        v102 = KeGetCurrentPrcb();
        v103 = v102->Number;
        v102->DeepSleep = 0;
        _InterlockedAnd64(
          &qword_1403ADBC8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v103] >> 6],
          ~(1LL << (KiProcessorIndexToNumberMappingTable[v103] & 0x3F)));
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
      if ( *(int *)(BugCheckParameter2_4 + 64) < 0 )
      {
        if ( v11 >= 0 )
          v11 = *(_DWORD *)(BugCheckParameter2_4 + 64);
        v136 = v11;
      }
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v173[1] = 8LL;
        v150[0] = a2;
        v150[1] = v11;
        v173[0] = v150;
        EtwTraceKernelEvent((int)v173, 1, 0x40008000u, 4666, 1538);
      }
    }
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    _InterlockedExchange64((volatile __int64 *)(v10 + 23840), 0LL);
    v106 = QuadPart;
    if ( *(_BYTE *)(v10 + 24017) )
    {
      _disable();
      v107 = (v178 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v10 + 23880));
      v108 = 2LL;
      v109 = v10 + 23904;
      do
      {
        if ( *(_QWORD *)v109 && *(_BYTE *)(*(_QWORD *)v109 + 34LL) )
        {
          PpmPerfFeedbackCounterUpdate();
          v108 = v152;
        }
        v109 += 8LL;
        v152 = --v108;
      }
      while ( v108 );
      KxReleaseSpinLock((PKSPIN_LOCK)(v10 + 23880));
      if ( v107 )
        _enable();
      v106 = QuadPart;
    }
    v110 = __rdtsc();
    if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
      v111 = __readmsr(0xDB2u);
    else
      v111 = 0LL;
    *(_QWORD *)(v10 + 23920) = v106;
    *(_QWORD *)(v10 + 23888) = v110;
    if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
      *(_QWORD *)(v10 + 24000) = v111;
    v19 = (unsigned __int64)SpinLock;
    if ( SpinLock )
    {
      PpmIdleUpdateConcurrency(SpinLock);
      v19 = *(_QWORD *)(v10 + 24200);
      if ( v19 )
        PpmIdleUpdateConcurrency((PKSPIN_LOCK)v19);
    }
    *(_QWORD *)(v10 + 23824) = v106 - a6;
    if ( a8 )
    {
      v112 = PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
      if ( v11 >= 0 && v112 != 8 && v130 )
        KeBugCheckEx(0xA0u, 0x702uLL, a2, v112, v10);
      *(_BYTE *)(v10 + 23857) = 0;
    }
    v27 = 3;
    if ( !v132 )
      goto LABEL_225;
    goto LABEL_220;
  }
  v11 = -2147483631;
LABEL_96:
  v136 = v11;
LABEL_97:
  if ( a8 )
    PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
  v27 = 0;
  v141 = 0;
LABEL_220:
  _interlockedbittestandreset64(
    (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 64LL),
    *(unsigned __int8 *)(v10 + 209));
  if ( v139 && v11 >= 0 )
    v113 = &v146;
  else
    v113 = 0LL;
  KeResumeClockTimerFromIdle(v113);
  off_140398830();
  KeAccumulateTicks(v10, *(_DWORD *)(v10 + 11892), MEMORY[0xFFFFF78000000320], 0, 0);
LABEL_225:
  LOBYTE(v19) = 1;
  ((void (__fastcall *)(unsigned __int64))off_140398A88[0])(v19);
  if ( v133 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 72LL),
      *(unsigned __int8 *)(v10 + 209));
    *(_QWORD *)(v10 + 23848) = -1LL;
  }
  v114 = v151;
  v115 = PpmExitCoordinatedIdle(v10, v151, v134, v11, v27 != 3, QuadPart, a5);
  v143 = v115;
  if ( v27 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(BugCheckParameter2_4 + 456))(
      v148,
      a2,
      v115,
      *(unsigned int *)(v114 + 4),
      *(_QWORD *)(v114 + 16));
  }
  else if ( !*(_BYTE *)BugCheckParameter2_4 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2_4 + 464))(v148, v27);
  }
  v116 = *(_QWORD *)(v114 + 16);
  for ( LODWORD(v114) = *(_DWORD *)(v114 + 4);
        (_DWORD)v114;
        *(_DWORD *)(384LL * *(unsigned int *)(v116 + 4 * v114) + PpmPlatformStates + 320) = 0 )
  {
    v114 = (unsigned int)(v114 - 1);
  }
  if ( v135 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v176[0] = 1310721;
  memset(&v176[1], 0, 0xA4uLL);
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  v118 = 0;
  v119 = *((_QWORD *)v12 + 1);
  while ( 1 )
  {
    v120 = v12 ? *v12 : v118 + 1;
    if ( !v119 )
      break;
LABEL_242:
    _BitScanForward64(&v121, v119);
    v119 &= ~(1LL << v121);
    v157 = v121;
    v122 = KiProcessorNumberToIndexMappingTable[64 * v118 + (unsigned __int8)v121];
    v123 = KeGetPrcb(v122);
    v124 = *(_QWORD *)(v123 + 23808);
    _m_prefetchw((const void *)(v123 + 23872));
    v125 = *(_DWORD *)(v123 + 23872);
    do
    {
      v126 = v125;
      v127 = v125 ^ (v125 ^ (v125 - 1)) & 0xFFFFFF;
      if ( (v127 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v125) == 5 )
        {
          v127 = v127 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v125) == 7 )
        {
          v127 = v127 & 0xFFFFFF | 0x6000000;
        }
      }
      v125 = _InterlockedCompareExchange((volatile signed __int32 *)(v123 + 23872), v127, v125);
    }
    while ( v125 != v126 );
    if ( HIBYTE(v127) == 6 )
      KeAddProcessorAffinityEx(v176, v122);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v124
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v10] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v10] & 0x3F)));
    KeRemoveProcessorAffinityEx(v12, v122);
  }
  while ( ++v118 < v120 )
  {
    v119 = *(_QWORD *)&v12[4 * v118 + 4];
    if ( v119 )
      goto LABEL_242;
  }
  v128 = 0;
  if ( LOWORD(v176[0]) )
  {
    while ( !*(_QWORD *)&v176[2 * v128 + 2] )
    {
      if ( ++v128 >= LOWORD(v176[0]) )
        goto LABEL_257;
    }
    HalRequestIpi(0LL, v176, v117);
  }
LABEL_257:
  if ( *(_BYTE *)(BugCheckParameter2_4 + 3) )
    PpmIdleCompleteExitLatencyTrace(v153, v136, v130, QuadPart, v146, v140, a2, v143);
  result = v141;
  *(_DWORD *)(BugCheckParameter2_4 + 68) = v141;
  *(_DWORD *)(BugCheckParameter2_4 + 64) = v136;
  return result;
}
