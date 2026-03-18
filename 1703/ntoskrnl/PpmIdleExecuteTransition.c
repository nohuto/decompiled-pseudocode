/*
 * XREFs of PpmIdleExecuteTransition @ 0x1400F4810
 * Callers:
 *     PoIdle @ 0x1400F4340 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     PpmGetExitSamplingCountdown @ 0x14006FC08 (PpmGetExitSamplingCountdown.c)
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     PsGetCurrentProcess @ 0x1400D8F50 (PsGetCurrentProcess.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400F5DE0 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x1400F6D60 (KeResumeClockTimerFromIdle.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140146DA0 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmIdleUpdateConcurrency @ 0x1401508F8 (PpmIdleUpdateConcurrency.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbImmediately @ 0x14017BB00 (KeFlushCurrentTbImmediately.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140182870 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KdCallPowerHandlers @ 0x1401FB804 (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x1401FBA90 (KdPowerTransitionEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KeUpdatePendingVirtualLittleRequest @ 0x140203B98 (KeUpdatePendingVirtualLittleRequest.c)
 *     PpmExitCoordinatedIdleState @ 0x140227B48 (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14022864C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x140228974 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmIdleSetSynchronizationState @ 0x140228B98 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x140228DB4 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x140229594 (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x140229D1C (PpmUpdatePlatformIdleAccounting.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1402355D8 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x140235774 (PpmEventEnterPlatformIdleState.c)
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
  char v9; // bl
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // r9d
  ULONG_PTR v14; // r8
  _BYTE *v15; // rsi
  unsigned __int16 *v16; // r13
  unsigned int v17; // esi
  __int64 v18; // rbx
  unsigned int v19; // edi
  _BYTE *v20; // rbx
  ULONG v21; // ecx
  __int64 Prcb; // rax
  unsigned __int64 v23; // rdi
  unsigned __int16 v24; // bx
  unsigned __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned __int8 (__fastcall *v29)(__int64); // rax
  int v30; // eax
  int v31; // edi
  bool v32; // bp
  unsigned __int16 v33; // cx
  __int64 v34; // rdx
  char v35; // di
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  __int64 v40; // rbx
  int v41; // eax
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  signed __int64 v44; // rax
  unsigned __int8 v45; // r9
  char v46; // di
  __int64 v47; // rbx
  signed __int64 v48; // rsi
  int v49; // r8d
  unsigned __int16 v50; // ax
  unsigned __int64 *v51; // r9
  __int64 v52; // r10
  unsigned __int64 v53; // rdx
  int v54; // eax
  int ExitSamplingCountdown; // eax
  char v56; // r10
  unsigned __int8 v57; // bl
  int v58; // ecx
  struct _KPRCB *CurrentPrcb; // rbx
  int v60; // esi
  int v61; // eax
  __int64 v62; // rdi
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  KSPIN_LOCK *v65; // rcx
  unsigned __int64 v66; // rsi
  unsigned __int64 v67; // rbp
  _QWORD *v68; // r9
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 v72; // rsi
  __int64 (__fastcall *v73)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  int v74; // eax
  __int64 v75; // rbp
  __int64 v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // r8
  int v80; // eax
  __int64 v82; // rdx
  __int16 v83; // bx
  char v84; // r8
  struct _KPRCB *v95; // rbx
  __int64 Number; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int8 v99; // al
  int v100; // eax
  int v101; // ecx
  struct _KPRCB *v102; // rax
  __int64 v103; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v105; // rsi
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  __int64 v109; // rdx
  KSPIN_LOCK *v110; // rcx
  unsigned __int8 v111; // al
  int *v112; // rcx
  unsigned int v113; // esi
  char v114; // r10
  __int64 v115; // r9
  unsigned int i; // ebx
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // rbx
  __int64 v120; // rdi
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // rcx
  unsigned __int64 v125; // rdx
  __int64 v126; // rbp
  unsigned int v127; // r14d
  __int64 v128; // rbx
  __int64 j; // r8
  unsigned __int16 v130; // di
  unsigned __int64 v131; // rsi
  unsigned __int64 v132; // rdx
  int v133; // ebp
  __int64 v134; // rbx
  __int64 v135; // r14
  unsigned __int32 v136; // eax
  unsigned __int32 v137; // r8d
  signed __int32 v138; // ecx
  unsigned __int16 v139; // r12
  __int64 v140; // rbp
  __int64 result; // rax
  unsigned __int8 v142; // [rsp+40h] [rbp-238h]
  volatile unsigned __int8 DeepSleep; // [rsp+41h] [rbp-237h]
  char v144; // [rsp+42h] [rbp-236h]
  int v145; // [rsp+44h] [rbp-234h]
  char v146; // [rsp+48h] [rbp-230h]
  char v147; // [rsp+49h] [rbp-22Fh]
  char v148; // [rsp+4Ah] [rbp-22Eh]
  unsigned int BugCheckParameter2; // [rsp+4Ch] [rbp-22Ch]
  char BugCheckParameter2_4; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v151; // [rsp+54h] [rbp-224h]
  int v152; // [rsp+58h] [rbp-220h]
  __int64 v153; // [rsp+60h] [rbp-218h]
  int v154; // [rsp+68h] [rbp-210h]
  int v155; // [rsp+6Ch] [rbp-20Ch]
  ULONG_PTR v156; // [rsp+70h] [rbp-208h]
  unsigned int v157; // [rsp+78h] [rbp-200h]
  int v158; // [rsp+7Ch] [rbp-1FCh]
  int v159; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v160; // [rsp+88h] [rbp-1F0h]
  _DWORD v161[2]; // [rsp+98h] [rbp-1E0h] BYREF
  LARGE_INTEGER v162; // [rsp+A0h] [rbp-1D8h]
  ULONG_PTR v163; // [rsp+A8h] [rbp-1D0h]
  _BYTE *v164; // [rsp+B0h] [rbp-1C8h]
  _QWORD v165[2]; // [rsp+B8h] [rbp-1C0h] BYREF
  _QWORD v166[3]; // [rsp+C8h] [rbp-1B0h] BYREF
  __int64 v167; // [rsp+E0h] [rbp-198h]
  int v168; // [rsp+E8h] [rbp-190h]
  int v169; // [rsp+ECh] [rbp-18Ch]
  _QWORD v170[3]; // [rsp+F0h] [rbp-188h] BYREF
  __int64 v171; // [rsp+108h] [rbp-170h]
  int v172; // [rsp+110h] [rbp-168h]
  int v173; // [rsp+114h] [rbp-164h]
  int v174; // [rsp+118h] [rbp-160h]
  int v175; // [rsp+11Ch] [rbp-15Ch]
  unsigned int v176; // [rsp+120h] [rbp-158h] BYREF
  __int16 v177; // [rsp+124h] [rbp-154h]
  __int16 v178; // [rsp+126h] [rbp-152h]
  __int64 v179; // [rsp+128h] [rbp-150h]
  __int64 v180; // [rsp+130h] [rbp-148h] BYREF
  int v181; // [rsp+138h] [rbp-140h]
  int v182; // [rsp+13Ch] [rbp-13Ch]
  _QWORD v183[2]; // [rsp+140h] [rbp-138h] BYREF
  _QWORD v184[2]; // [rsp+150h] [rbp-128h] BYREF
  __int128 v185; // [rsp+160h] [rbp-118h]
  _DWORD v186[66]; // [rsp+170h] [rbp-108h] BYREF
  void *retaddr; // [rsp+278h] [rbp+0h]

  v8 = *(_QWORD *)(a1 + 23936);
  v9 = a8;
  v157 = -1;
  BugCheckParameter4 = a1;
  v159 = -1;
  v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 488);
  v167 = a4;
  v13 = a2;
  v160 = v12;
  v151 = a3;
  v14 = a1 + 24000;
  v15 = (_BYTE *)(248LL * a2 + v8 + 816);
  BugCheckParameter2 = a2;
  v156 = a1;
  v162.QuadPart = 0LL;
  v155 = 0;
  v158 = 0;
  DeepSleep = 0;
  v146 = 0;
  LOBYTE(v154) = 0;
  v147 = 0;
  v144 = 0;
  v153 = v8;
  v164 = v15;
  v148 = 0;
  v163 = a1 + 24000;
  v145 = 0;
  if ( !a8 || *(_BYTE *)(v8 + 539) || (v142 = 1, v15[245]) )
    v142 = 0;
  v152 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
      PpmIdleSetSynchronizationState(a1 + 24000, 1LL);
    v16 = (unsigned __int16 *)(v8 + 240);
    *(_QWORD *)(v8 + 240) = 1310721LL;
    memset((void *)(v8 + 248), 0, 0xA0uLL);
    v17 = *(_DWORD *)(v8 + 548);
    v18 = *(_QWORD *)(v8 + 552);
    v166[1] = 0LL;
    v166[2] = 0LL;
    v165[0] = 1LL;
    v166[0] = 65537LL;
    v19 = 0;
    v165[1] = v166;
    if ( v17 )
    {
      v20 = (_BYTE *)(v18 + 4);
      do
      {
        if ( *v20 != 0xFF )
        {
          v21 = *((_DWORD *)v20 - 1);
          HIDWORD(v166[0]) = (unsigned __int8)*v20;
          Prcb = KeGetPrcb(v21);
          v145 = PpmTestAndLockProcessor(Prcb, v8 + 240, v165);
          if ( v145 < 0 )
            goto LABEL_24;
        }
        ++v19;
        v20 += 8;
      }
      while ( v19 < v17 );
    }
    v23 = *(_QWORD *)(v8 + 248);
    v24 = 0;
LABEL_14:
    while ( v23 )
    {
LABEL_17:
      _BitScanForward64(&v25, v23);
      v23 &= ~(1LL << v25);
      v169 = v25;
      v26 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * v24 + (unsigned __int8)v25]);
      v170[2] = v26;
      v27 = *(_QWORD *)(v26 + 23936);
      v171 = 0LL;
      v170[0] = 0LL;
      v28 = *(_QWORD *)(v27 + 488);
      v170[1] = PopIdleTransitionTimeout;
      v29 = *(unsigned __int8 (__fastcall **)(__int64))(v27 + 472);
      BYTE4(v171) = 1;
      if ( !v29(v28) )
      {
        while ( (*(_DWORD *)(v26 + 24000) & 0xFF000000) == 0x5000000 )
        {
          PpmIdleTransitionStall(v170);
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v27 + 472))(*(_QWORD *)(v27 + 488)) )
            goto LABEL_14;
        }
        v30 = -1073741782;
        goto LABEL_23;
      }
    }
    while ( ++v24 < (unsigned int)*v16 )
    {
      v23 = *(_QWORD *)&v16[4 * v24 + 4];
      if ( v23 )
        goto LABEL_17;
    }
    v30 = 0;
LABEL_23:
    v145 = v30;
    BugCheckParameter4 = v156;
    if ( v30 < 0 )
    {
LABEL_24:
      if ( a8 )
        PpmIdleSetSynchronizationState(v163, 0LL);
      v31 = v145;
      v152 = 1;
      v32 = 1;
      goto LABEL_220;
    }
    v15 = v164;
    v14 = v156 + 24000;
    v9 = a8;
    v13 = BugCheckParameter2;
  }
  v16 = (unsigned __int16 *)(v8 + 240);
  v33 = 0;
  v34 = *(unsigned __int16 *)(v8 + 240);
  if ( (_WORD)v34 )
  {
    while ( !*(_QWORD *)&v16[4 * v33 + 4] )
    {
      if ( ++v33 >= (unsigned __int16)v34 )
        goto LABEL_33;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_33:
  *(_BYTE *)(BugCheckParameter4 + 23984) = v142;
  *(_DWORD *)(BugCheckParameter4 + 23988) = v13;
  if ( v9 )
  {
    LOBYTE(v34) = 2;
    *(_BYTE *)(BugCheckParameter4 + 23985) = v15[242] == 0;
    PpmIdleSetSynchronizationState(v14, v34);
  }
  v35 = 0;
  if ( PpmPerfVirtualHeterogeneityEnabled )
  {
    v36 = *(_QWORD *)(BugCheckParameter4 + 24312);
    if ( v36 )
    {
      if ( !*(_BYTE *)(v36 + 48) )
      {
        v37 = __rdtsc();
        v38 = v37;
        if ( *(_QWORD *)(v8 + 512) < (unsigned __int64)PpmPerfVirtualLittleHysteresis100Ns
          || v37 - *(_QWORD *)(v36 + 56) < *(_QWORD *)(v36 + 64) )
        {
          v35 = 1;
        }
        else
        {
          *(_QWORD *)(v36 + 56) = v37;
          *(_BYTE *)(v36 + 48) = 1;
          LOBYTE(v38) = 1;
          PpmPerfArbitratorApplyProcessorState(BugCheckParameter4, v38, 0LL);
        }
      }
    }
  }
  if ( *(_BYTE *)(BugCheckParameter4 + 25575) )
  {
    *(_BYTE *)(BugCheckParameter4 + 25575) = 0;
    KeUpdatePendingVirtualLittleRequest(BugCheckParameter4);
  }
  if ( v35 || *(_BYTE *)(v8 + 6) || *(_BYTE *)(v8 + 7) )
  {
    v39 = -1LL;
    v147 = 1;
    if ( *(_BYTE *)(v8 + 6) )
    {
      v40 = KeMaximumIncrement;
      if ( *(_QWORD *)(v8 + 520) > (unsigned __int64)KeMaximumIncrement )
        v40 = *(_QWORD *)(v8 + 520);
      v39 = a7 + KeMaximumIncrement + v40;
    }
    if ( *(_BYTE *)(v8 + 7) )
    {
      v41 = PpmCurrentProfile[175 * dword_14034BB2C + 18];
      if ( v39 >= a7 + (unsigned __int64)(unsigned int)(10 * v41) )
        v39 = a7 + (unsigned int)(10 * v41);
    }
    if ( v35 && v39 >= a7 + (unsigned __int64)(unsigned int)PpmPerfVirtualLittleHysteresis )
      v39 = a7 + (unsigned int)PpmPerfVirtualLittleHysteresis;
    *(_QWORD *)(BugCheckParameter4 + 23976) = v39;
    _interlockedbittestandset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
  }
  if ( v15[241] )
    goto LABEL_105;
  v42 = *(_QWORD *)(BugCheckParameter4 + 200);
  v43 = *(_QWORD *)(BugCheckParameter4 + 192);
  v146 = 1;
  _m_prefetchw((const void *)(v43 + 64));
  v44 = _InterlockedOr64((volatile signed __int64 *)(v43 + 64), v42);
  v45 = v142;
  v46 = 0;
  v47 = *(_QWORD *)(BugCheckParameter4 + 23936);
  v48 = v44;
  v155 = 0;
  if ( v142 )
  {
    v155 = 1;
  }
  else if ( v151 == -1 )
  {
    v49 = 0;
    v50 = *(_WORD *)(v47 + 240);
    if ( v50 )
    {
      v51 = (unsigned __int64 *)(v47 + 248);
      v52 = v50;
      do
      {
        v53 = *v51++;
        v49 += (unsigned int)((0x101010101010101LL
                             * ((((v53 - ((v53 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v53 - ((v53 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v53 - ((v53 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v53 - ((v53 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v52;
      }
      while ( v52 );
      BugCheckParameter4 = v156;
      v8 = v153;
      v11 = 0LL;
      v45 = 0;
    }
    if ( v49 != (_DWORD)KeNumberProcessors_0 - 1 )
      goto LABEL_78;
    v155 = 2;
  }
  v54 = *(_DWORD *)(v47 + 8);
  v46 = 0;
  if ( v54 )
    *(_DWORD *)(v47 + 8) = v54 - 1;
  if ( !*(_DWORD *)(v47 + 8) )
  {
    ExitSamplingCountdown = PpmGetExitSamplingCountdown();
    v46 = 0;
    *(_DWORD *)(v47 + 8) = ExitSamplingCountdown;
    if ( ExitSamplingCountdown )
      v46 = v56;
  }
  if ( !v46 )
  {
LABEL_76:
    v57 = v142;
    if ( v142 )
      goto LABEL_80;
    goto LABEL_79;
  }
  *(_BYTE *)(v47 + 3) = 1;
  if ( v45 )
  {
    *(_QWORD *)(v47 + 56) = -1LL;
    goto LABEL_76;
  }
LABEL_78:
  v57 = v142;
LABEL_79:
  v11 = 1LL;
LABEL_80:
  v58 = ((__int64 (__fastcall *)(_QWORD))off_14033B450[0])((unsigned int)v11);
  v145 = v58;
  if ( !*(_DWORD *)(BugCheckParameter4 + 11800) )
  {
    if ( v58 < 0 )
      goto LABEL_82;
    if ( *(_BYTE *)v8 == 1
      && (unsigned __int8)PpmIdleRecheckCoordinatedIdleMask(
                            v8,
                            *(unsigned __int8 *)(BugCheckParameter4 + 208),
                            *(_QWORD *)(BugCheckParameter4 + 200) | v48) )
    {
      v145 = -1073741802;
      goto LABEL_82;
    }
    if ( v46 )
      *(_WORD *)(v8 + 48) |= 0x200u;
    if ( v57 )
    {
      v148 = 1;
      _InterlockedIncrement(&PpmNonInterruptibleCount);
      CurrentPrcb = KeGetCurrentPrcb();
      v60 = KiClockTimerOwner;
      if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
      {
        off_14033B598[0]();
        CurrentPrcb->PendingTickFlags &= ~1u;
      }
      if ( CurrentPrcb->Number == v60 )
        ++dword_1403561C8;
      if ( CurrentPrcb->ClockOwner )
        CurrentPrcb->ClockOwner = 0;
      v57 = v142;
    }
    if ( *(_BYTE *)(v8 + 540) )
    {
      LOBYTE(v61) = v154;
      if ( v46 )
      {
        v61 = (unsigned __int8)v154;
        if ( !v57 )
          v61 = 1;
        v154 = v61;
      }
      KePrepareClockTimerForIdle(a5, *(_QWORD *)(v8 + 520), v61);
    }
LABEL_105:
    v62 = *(_QWORD *)(BugCheckParameter4 + 24320);
    v11 = v186[64];
    if ( v62 )
    {
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(*(_QWORD *)(BugCheckParameter4 + 24320));
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v62, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v62);
      }
      v63 = *(_QWORD *)(v62 + 16);
      v64 = *(unsigned int *)(v62 + 12);
      if ( a6 > v63 )
      {
        *(_QWORD *)(v62 + 16) = a6;
        *(_QWORD *)(v62 + 24) += a6 - v63;
        *(_QWORD *)(v62 + 8 * v64 + 32) += a6 - v63;
      }
      *(_DWORD *)(v62 + 12) = v64 - 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v62, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v62, 0LL);
      if ( (v11 & 0x200) != 0 )
        _enable();
      v65 = *(KSPIN_LOCK **)(BugCheckParameter4 + 24328);
      if ( v65 )
        PpmIdleUpdateConcurrency(v65);
    }
    *(_DWORD *)(v153 + 16) = BugCheckParameter2;
    v66 = __rdtsc();
    if ( (*(_QWORD *)(BugCheckParameter4 + 25576) & 0x8000000000LL) != 0 )
      v67 = __readmsr(0xDB2u);
    else
      v67 = 0LL;
    v68 = (_QWORD *)v156;
    v69 = a6 - *(_QWORD *)(v156 + 24048);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v156 + 24064), v69);
    if ( (*(_QWORD *)(v156 + 25576) & 0x8000000000LL) != 0 )
    {
      v70 = PpmConvertTime(v69, v66 - *(_QWORD *)(v156 + 24016), v67 - *(_QWORD *)(v156 + 24128));
      v68 = (_QWORD *)v156;
      *(_QWORD *)(v156 + 24136) += v70;
    }
    v71 = v68[3002];
    v68[3006] = a6;
    if ( v66 > v71 )
      v68[3003] += v66 - v71;
    v68[3002] = v66;
    if ( (v68[3197] & 0x8000000000LL) != 0 )
      v68[3016] = v67;
    BugCheckParameter4 = v156;
    LOBYTE(v68) = 1;
    PpmUpdatePerformanceFeedback(v156, 0, 0, (_DWORD)v68, 0LL);
    if ( PopSnapEnergyCounters )
      PopSnapEnergyCounters(*(unsigned int *)(v156 + 36), 0LL, 0LL);
    v72 = v153;
    _InterlockedExchange64((volatile __int64 *)(v156 + 23968), a6);
    v73 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v153 + 416);
    if ( v73 )
    {
      v74 = v73(v160, BugCheckParameter2, v151, *(unsigned int *)(v153 + 796), *(_QWORD *)(v153 + 808));
      v145 = v74;
    }
    else
    {
      v74 = v145;
    }
    if ( v74 >= 0 )
    {
      v75 = *(_QWORD *)(v153 + 808);
      LODWORD(v76) = *(_DWORD *)(v153 + 796);
      v144 = 1;
      if ( v151 != -1 )
      {
        v77 = PpmPlatformStates + 384LL * v151;
        PpmEventEnterPlatformIdleState(v151);
        if ( !qword_14036E200 && v151 == dword_14036E240 )
          _InterlockedCompareExchange64(&qword_14036E200, MEMORY[0xFFFFF78000000008], 0LL);
        if ( a5 )
          ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
        if ( *(_BYTE *)(v77 + 120) )
        {
          LOBYTE(v78) = 1;
          KdPowerTransitionEx(2147483652LL, v78);
          KdCallPowerHandlers(4LL);
        }
        v72 = v153;
      }
      if ( (_DWORD)v76 )
      {
        if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v180 = v75;
          v181 = 4 * v76;
          v182 = 0;
          EtwTraceKernelEvent((int)&v180, 1, 0x40008000u, 4671, 1538);
        }
        do
        {
          v76 = (unsigned int)(v76 - 1);
          v79 = 384LL * *(unsigned int *)(v75 + 4 * v76) + PpmPlatformStates + 64;
          *(_QWORD *)(v79 + 264) = a6;
          v80 = *(_DWORD *)(v79 + 256);
          if ( !*(_DWORD *)(PpmPlatformStates + 4) )
            v80 ^= ((unsigned __int16)v80 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
          *(_DWORD *)(v79 + 256) = v80 & 0xF8FFFFFF | 0x4000000;
        }
        while ( (_DWORD)v76 );
      }
      if ( v151 != -1 )
        *(_WORD *)(v72 + 48) |= 0x10u;
      _EBP = 1;
      v82 = *(unsigned __int8 *)(v72 + 541);
      v83 = *(_WORD *)(v72 + 48);
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v179 = *(_QWORD *)(v72 + 512);
        v176 = BugCheckParameter2;
        v178 = (unsigned __int8)v82;
        v183[0] = &v176;
        v177 = v83;
        v183[1] = 16LL;
        EtwTraceKernelEvent((int)v183, 1, 0x40008000u, 4665, 1538);
      }
      if ( a8 )
      {
        LOBYTE(v82) = (v142 != 0) + 3;
        PpmIdleSetSynchronizationState(v163, v82);
      }
      if ( v146 )
      {
        DeepSleep = 0;
        if ( (unsigned __int8)v164[240] >= 2u && (HvlEnlightenments & 4) == 0 )
        {
          v84 = byte_14033FD50;
          if ( byte_14033FD50 == -1 )
          {
            _RAX = 1LL;
            __asm { cpuid }
            v84 = 0;
            v172 = _RAX;
            v173 = _RBX;
            v174 = _RCX;
            v175 = _RDX;
            if ( (int)_RCX < 0 )
            {
              _RAX = 1073741825LL;
              __asm { cpuid }
              v172 = _RAX;
              v173 = _RBX;
              v84 = (_DWORD)_RAX == 1986945624;
              v174 = _RCX;
              v175 = _RDX;
            }
            byte_14033FD50 = v84;
          }
          if ( !v84 )
          {
            v95 = KeGetCurrentPrcb();
            if ( v95->CpuVendor == 1 )
            {
              DeepSleep = 0;
            }
            else
            {
              Number = v95->Number;
              v95->DeepSleep = 1;
              _InterlockedOr64(
                (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                          + 3473384
                                          + 0x140000000LL),
                1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
              if ( !v95->DeepSleep )
              {
                _InterlockedAnd64(
                  (volatile signed __int64 *)(8LL
                                            * ((unsigned int)KiProcessorIndexToNumberMappingTable[v95->Number] >> 6)
                                            + 3473384
                                            + 0x140000000LL),
                  ~(1LL << (KiProcessorIndexToNumberMappingTable[v95->Number] & 0x3F)));
                if ( KiFlushPcid )
                {
                  v185 = 2uLL;
                  __asm { invpcid ebp, [rsp+278h+var_118] }
                  if ( !PsGetCurrentProcess()->AddressPolicy )
                    KiSetUserTbFlushPending();
                }
                else
                {
                  v97 = __readcr4();
                  if ( (v97 & 0x20080) != 0 )
                  {
                    __writecr4(v97 ^ 0x80);
                    __writecr4(v97);
                  }
                  else
                  {
                    v98 = __readcr3();
                    __writecr3(v98);
                  }
                }
              }
              DeepSleep = v95->DeepSleep;
            }
          }
        }
      }
      BugCheckParameter4 = v156;
      if ( (*(_BYTE *)(v156 + 249) & 1) != 0 )
      {
        v99 = *(_BYTE *)(v156 + 250);
        if ( v99 )
        {
          *(_BYTE *)(v156 + 248) |= 1u;
          v158 = v99;
        }
      }
      v100 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, _QWORD))(v72 + 424))(
               v160,
               v167,
               BugCheckParameter2,
               v151,
               v158,
               *(_DWORD *)(v72 + 796),
               *(_QWORD *)(v72 + 808));
      *(_BYTE *)(BugCheckParameter4 + 248) &= ~1u;
      v101 = v100;
      v145 = v100;
      if ( DeepSleep && *(_BYTE *)(BugCheckParameter4 + 23450) )
      {
        v102 = KeGetCurrentPrcb();
        v103 = v102->Number;
        v102->DeepSleep = 0;
        _InterlockedAnd64(
          &qword_14034FFE8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v103] >> 6],
          ~(1LL << (KiProcessorIndexToNumberMappingTable[v103] & 0x3F)));
        KeFlushCurrentTbImmediately();
        v101 = v145;
      }
      if ( *(int *)(v72 + 64) < 0 )
      {
        if ( v101 >= 0 )
          v101 = *(_DWORD *)(v72 + 64);
        v145 = v101;
      }
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v184[1] = 8LL;
        v161[0] = BugCheckParameter2;
        v161[1] = v101;
        v184[0] = v161;
        EtwTraceKernelEvent((int)v184, 1, 0x40008000u, 4666, 1538);
      }
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v162 = PerformanceCounter;
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 23968), 0LL);
    v105 = PerformanceCounter;
    v106 = __rdtsc();
    if ( (*(_QWORD *)(BugCheckParameter4 + 25576) & 0x8000000000LL) != 0 )
      v107 = __readmsr(0xDB2u);
    else
      v107 = 0LL;
    *(LARGE_INTEGER *)(BugCheckParameter4 + 24048) = v105;
    *(_QWORD *)(BugCheckParameter4 + 24016) = v106;
    if ( (*(_QWORD *)(BugCheckParameter4 + 25576) & 0x8000000000LL) != 0 )
      *(_QWORD *)(BugCheckParameter4 + 24128) = v107;
    if ( v62 )
    {
      _disable();
      v11 = (unsigned int)v11 >> 9;
      LOBYTE(v11) = v11 & 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v62);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v62, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v62);
      }
      v108 = *(_QWORD *)(v62 + 16);
      v109 = *(unsigned int *)(v62 + 12);
      if ( v105.QuadPart > v108 )
      {
        *(LARGE_INTEGER *)(v62 + 16) = v105;
        *(_QWORD *)(v62 + 24) += v105.QuadPart - v108;
        *(_QWORD *)(v62 + 8 * v109 + 32) += v105.QuadPart - v108;
      }
      *(_DWORD *)(v62 + 12) = v109 + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v62, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v62, 0LL);
      if ( (_BYTE)v11 )
        _enable();
      v110 = *(KSPIN_LOCK **)(BugCheckParameter4 + 24328);
      if ( v110 )
        PpmIdleUpdateConcurrency(v110);
    }
    *(_QWORD *)(BugCheckParameter4 + 23952) = v105.QuadPart - a6;
    if ( a8 )
    {
      v111 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 24000, 0LL);
      v31 = v145;
      if ( v145 >= 0 && v111 != 8 && v142 )
        KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v111, BugCheckParameter4);
      *(_BYTE *)(BugCheckParameter4 + 23985) = 0;
    }
    else
    {
      v31 = v145;
    }
    if ( !v146 )
      goto LABEL_217;
    goto LABEL_212;
  }
  v145 = -2147483631;
LABEL_82:
  if ( a8 )
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 24000, 0LL);
  v31 = v145;
  v152 = 0;
LABEL_212:
  _interlockedbittestandreset64(
    (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL),
    *(unsigned __int8 *)(BugCheckParameter4 + 209));
  if ( (_BYTE)v154 && v31 >= 0 )
    v112 = &v159;
  else
    v112 = 0LL;
  KeResumeClockTimerFromIdle(v112);
  off_14033B460();
  KeAccumulateTicks(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 11892), MEMORY[0xFFFFF78000000320], 0, 0);
LABEL_217:
  if ( v147 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
    *(_QWORD *)(BugCheckParameter4 + 23976) = -1LL;
  }
  v32 = v152 != 3;
LABEL_220:
  v113 = 0;
  if ( PpmPlatformStates )
  {
    v114 = v144;
    if ( !v144 )
    {
      v115 = v153;
      for ( i = 0; i < *(_DWORD *)(v115 + 796); ++i )
      {
        v117 = *(unsigned int *)(*(_QWORD *)(v115 + 808) + 4LL * i);
        v118 = PpmPlatformStates + 384 * v117;
        if ( (*(_DWORD *)(v118 + 320) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v118 + 320) = *(_DWORD *)(v118 + 320) & 0xFE000FFF | ((*(_DWORD *)(v118 + 320) & 0xFFF | 0x2000) << 12);
        if ( v32 )
          ++*(_DWORD *)(1008 * v117 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
      }
    }
    LODWORD(v119) = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      v11 = v31;
      while ( 1 )
      {
        v119 = (unsigned int)(v119 - 1);
        v120 = 384 * v119 + PpmPlatformStates + 64;
        v121 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v156 + 36)];
        if ( ((*(_QWORD *)(v120 + 8 * (v121 >> 6) + 72) >> (v121 & 0x3F)) & 1) != 0
          && (unsigned __int8)PpmExitCoordinatedIdleState(v120 + 256, &BugCheckParameter2_4) )
        {
          v122 = v113++;
          *(_DWORD *)(*(_QWORD *)(v153 + 808) + 4 * v122) = v119;
          if ( v113 == 1 )
          {
            if ( *(_BYTE *)(v120 + 57) )
            {
              v157 = v119;
              if ( v144 )
              {
                if ( *(_BYTE *)(v120 + 56) )
                {
                  KdCallPowerHandlers(1LL);
                  KdPowerTransitionEx(2147483649LL, 1LL);
                }
                if ( (PopSimulate & 0x100) != 0 && v11 >= 0 )
                {
                  if ( !v32 )
                    goto LABEL_243;
                  if ( a5 && (_DWORD)v119 == PpmDripsStateIndex )
                    KeBugCheckEx(0xA0u, 0x257uLL, (unsigned int)v119, 0LL, 0LL);
                }
              }
            }
          }
          if ( !v32 )
          {
LABEL_243:
            v123 = *(_QWORD *)(v120 + 264);
            v124 = 1008LL * (unsigned int)v119 + *(_QWORD *)(PpmPlatformStates + 48) + 24LL;
            if ( v162.QuadPart >= v123 )
            {
              v125 = v162.QuadPart - v123;
              *(_QWORD *)(v124 + 32) += v162.QuadPart - v123;
            }
            else
            {
              v125 = 0LL;
            }
            if ( v11 < 0 && BugCheckParameter2_4 )
            {
              ++*(_DWORD *)(v124 + 4);
            }
            else
            {
              ++*(_DWORD *)(v124 + 8);
              PpmUpdatePlatformIdleAccounting(v124, v125);
            }
          }
        }
        if ( !(_DWORD)v119 )
        {
          v114 = v144;
          break;
        }
      }
    }
    v126 = v153;
    if ( v114 )
      PpmEventCoordinatedIdleTransition(0LL, v113, *(_QWORD *)(v153 + 808));
  }
  else
  {
    v126 = v153;
  }
  v127 = v152;
  *(_DWORD *)(v126 + 796) = v113;
  if ( v127 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v126 + 456))(
      v160,
      BugCheckParameter2,
      v157,
      v113,
      *(_QWORD *)(v126 + 808));
  }
  else if ( !*(_BYTE *)v126 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v126 + 464))(v160, v127);
  }
  LODWORD(v128) = *(_DWORD *)(v126 + 796);
  for ( j = *(_QWORD *)(v126 + 808);
        (_DWORD)v128;
        *(_DWORD *)(384LL * *(unsigned int *)(j + 4 * v128) + PpmPlatformStates + 320) = 0 )
  {
    v128 = (unsigned int)(v128 - 1);
  }
  if ( v148 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v186[0] = 1310721;
  memset(&v186[1], 0, 0xA4uLL);
  LODWORD(v11) = KeGetPcr()->Prcb.Number;
  v130 = 0;
  v131 = *((_QWORD *)v16 + 1);
  while ( v131 )
  {
LABEL_267:
    _BitScanForward64(&v132, v131);
    v131 &= ~(1LL << v132);
    v168 = v132;
    v133 = KiProcessorNumberToIndexMappingTable[64 * v130 + (unsigned __int8)v132];
    v134 = KeGetPrcb(v133);
    v135 = *(_QWORD *)(v134 + 23936);
    _m_prefetchw((const void *)(v134 + 24000));
    v136 = *(_DWORD *)(v134 + 24000);
    do
    {
      v137 = v136;
      v138 = v136 ^ (v136 ^ (v136 - 1)) & 0xFFFFFF;
      if ( (v138 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v136) == 5 )
        {
          v138 = v138 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v136) == 7 )
        {
          v138 = v138 & 0xFFFFFF | 0x6000000;
        }
      }
      v136 = _InterlockedCompareExchange((volatile signed __int32 *)(v134 + 24000), v138, v136);
    }
    while ( v136 != v137 );
    if ( HIBYTE(v138) == 6 )
      KeAddProcessorAffinityEx(v186, v133);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v135
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v11] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v11] & 0x3F)));
    KeRemoveProcessorAffinityEx(v16, v133);
  }
  while ( ++v130 < (unsigned int)*v16 )
  {
    v131 = *(_QWORD *)&v16[4 * v130 + 4];
    if ( v131 )
      goto LABEL_267;
  }
  v139 = 0;
  if ( LOWORD(v186[0]) )
  {
    while ( !*(_QWORD *)&v186[2 * v139 + 2] )
    {
      if ( ++v139 >= LOWORD(v186[0]) )
        goto LABEL_282;
    }
    HalRequestIpi(0LL, v186);
  }
LABEL_282:
  v140 = v153;
  if ( *(_BYTE *)(v153 + 3) )
    PpmIdleCompleteExitLatencyTrace(v156, v145, v142, v162.LowPart, v159, v155, BugCheckParameter2, v157);
  *(_DWORD *)(v140 + 68) = v152;
  result = (unsigned int)v145;
  *(_DWORD *)(v140 + 64) = v145;
  return result;
}
