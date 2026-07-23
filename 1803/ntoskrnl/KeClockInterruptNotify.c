/*
 * XREFs of KeClockInterruptNotify @ 0x14010A200
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreClockTickRate @ 0x140005B28 (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140005B80 (KiSetClockIntervalToMinimumRequested.c)
 *     KiEventClockStateChange @ 0x140005D9C (KiEventClockStateChange.c)
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeIsForceIdleEngaged @ 0x1400382EC (KeIsForceIdleEngaged.c)
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400EAB34 (KiShouldScanSharedReadyQueue.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiForwardTick @ 0x1401094D0 (KiForwardTick.c)
 *     PoExecutePerfCheck @ 0x140109900 (PoExecutePerfCheck.c)
 *     KiUpdateRunTime @ 0x1401099B0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x14010D530 (KeAccumulateTicks.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeCheckAndApplyBamQos @ 0x140247AD0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x140247D04 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140248000 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14024826C (KiGenerateHeteroSets.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x14024AA4C (KiSetForceIdleState.c)
 *     PoExecuteIdleCheck @ 0x140271800 (PoExecuteIdleCheck.c)
 *     PoSetProcessorQoS @ 0x140277C7C (PoSetProcessorQoS.c)
 *     PpmEventIdleDurationExpiration @ 0x1402807FC (PpmEventIdleDurationExpiration.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 v3; // r8
  struct _KPRCB *v5; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v7; // eax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 v9; // rdx
  int v10; // eax
  char v11; // r11
  char *v12; // r10
  __int64 IdleNonParkedCpuSet; // rcx
  unsigned __int64 v14; // rdx
  int v15; // eax
  char v16; // cl
  __int64 v17; // rdx
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rbp
  __int16 v21; // r15
  __int64 v22; // r13
  bool v23; // r15
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  LARGE_INTEGER v26; // r8
  unsigned __int128 v27; // rax
  LONGLONG v28; // rdx
  __int64 v29; // r11
  unsigned __int128 v30; // rax
  LONGLONG v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r12
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  volatile CCHAR v37; // t1
  struct _KPRCB *v38; // rbx
  _DWORD *v39; // rcx
  int v40; // eax
  bool v41; // bp
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  int v44; // eax
  char v45; // bl
  __int64 *v46; // r9
  __int64 v47; // r10
  __int64 v48; // rdx
  unsigned __int16 v49; // cx
  __int64 v50; // r8
  struct _KPRCB *Prcb; // rax
  __int64 v52; // r8
  __int64 v53; // rdi
  char v54; // al
  __int64 v55; // r9
  __int16 *v56; // r8
  unsigned __int16 v57; // dx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int8 v61; // bl
  _QWORD *v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rax
  struct _KPRCB *v65; // rbx
  __int16 v66; // bp
  int v67; // r15d
  _KTHREAD *CurrentThread; // rdi
  unsigned int SystemHeteroCpuPolicy; // eax
  _KNODE *ParentNode; // rsi
  unsigned __int64 GroupSetMember; // rax
  unsigned __int8 SchedulingClass; // r11
  int v73; // r10d
  unsigned __int64 v74; // rax
  __int64 v75; // r8
  struct _KPRCB *v76; // rsi
  _KPRCBFLAG v77; // eax
  bool v78; // bp
  _KPRCBFLAG v79; // edx
  char v80; // al
  __int64 v81; // r8
  unsigned __int64 v82; // rax
  unsigned __int8 CurrentIrql; // bl
  char v85; // [rsp+31h] [rbp-2D7h]
  char v86; // [rsp+32h] [rbp-2D6h]
  ULONG v87; // [rsp+34h] [rbp-2D4h] BYREF
  int v88; // [rsp+38h] [rbp-2D0h] BYREF
  int v89; // [rsp+3Ch] [rbp-2CCh] BYREF
  __int64 v90; // [rsp+40h] [rbp-2C8h] BYREF
  unsigned __int64 v91; // [rsp+48h] [rbp-2C0h] BYREF
  _BYTE *v92; // [rsp+50h] [rbp-2B8h]
  int v93; // [rsp+58h] [rbp-2B0h]
  __int64 v94; // [rsp+60h] [rbp-2A8h]
  __int64 v95; // [rsp+68h] [rbp-2A0h]
  struct _KPRCB *v96; // [rsp+70h] [rbp-298h]
  _QWORD *v97; // [rsp+78h] [rbp-290h]
  __int64 v98; // [rsp+80h] [rbp-288h] BYREF
  __int64 v99; // [rsp+88h] [rbp-280h] BYREF
  __int64 v100; // [rsp+90h] [rbp-278h] BYREF
  unsigned __int16 *v101[2]; // [rsp+98h] [rbp-270h] BYREF
  __int16 v102; // [rsp+A8h] [rbp-260h]
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp-258h] BYREF
  _QWORD v104[22]; // [rsp+C0h] [rbp-248h] BYREF
  _DWORD v105[44]; // [rsp+170h] [rbp-198h] BYREF
  _WORD v106[88]; // [rsp+220h] [rbp-E8h] BYREF
  int v107; // [rsp+300h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a2;
  v85 = 0;
  v92 = 0LL;
  v90 = 0LL;
  if ( KiForceIdleDisabled )
    goto LABEL_29;
  _disable();
  v5 = KeGetCurrentPrcb();
  v88 = 0;
  SchedulerAssist = v5->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v5->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5];
      SchedulerAssist[5] = v7 + 1;
      if ( v7 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(v5);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    KiSetVpThreadSpinLockCount((__int64)v5, 0);
    do
      KeYieldProcessorEx(&v88);
    while ( KiForceIdleLock );
    KiSetVpThreadSpinLockCount((__int64)v5, 1);
  }
  if ( CurrentPrcb->ClockOwner && KeIsForceIdleEngaged() )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
    if ( KiForceIdleWatchdogResetCount == 32 )
    {
      off_1403989A0[0]();
      v10 = 0;
    }
    else
    {
      v10 = KiForceIdleWatchdogResetCount + 1;
    }
    KiForceIdleWatchdogResetCount = v10;
    if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) <= 0x1312D00 )
    {
      ++qword_1403B3E10;
      v11 = 1;
      v12 = (char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex;
      v85 = 1;
      v92 = v12;
      KiClockTickSkipTraceIndex = (KiClockTickSkipTraceIndex + 1) & 0xF;
      *v12 = 0;
      *((LARGE_INTEGER *)v12 + 1) = InterruptTimePrecise;
      goto LABEL_21;
    }
    LOBYTE(v9) = 1;
    KiResetForceIdle(2LL, v9);
  }
  v11 = 0;
LABEL_21:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  IdleNonParkedCpuSet = (__int64)KeGetCurrentPrcb();
  v14 = *(_QWORD *)(IdleNonParkedCpuSet + 25016);
  if ( v14 )
  {
    if ( *(_BYTE *)(IdleNonParkedCpuSet + 32) <= 1u )
    {
      v15 = *(_DWORD *)(v14 + 20) - 1;
      *(_DWORD *)(v14 + 20) = v15;
      if ( !v15 && !*(_BYTE *)(v14 + 25) && !*(_BYTE *)(v14 + 27) )
        KiPerformUnboostKick(IdleNonParkedCpuSet);
    }
  }
  _enable();
  if ( v11 )
  {
LABEL_170:
    if ( KiClockOwnerOneShotRequestState == 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KiClockOwnerOneShotRequestState = 2;
      KiSetClockIntervalToMinimumRequested(IdleNonParkedCpuSet, v14);
      __writecr8(CurrentIrql);
      if ( v92 )
        *v92 = 1;
      ++qword_1403B3E18;
    }
    return;
  }
  v3 = a2;
LABEL_29:
  v16 = *(_BYTE *)(a1 + 368) & 1;
  v86 = v16;
  if ( CurrentPrcb->ClockOwner )
  {
    v17 = (unsigned int)KiClockTickTraceIndex;
    KiClockTickTraceIndex = (KiClockTickTraceIndex + 1) & 0xF;
    v18 = KiClockOwnerOneShotRequestState == 1;
    v97 = (_QWORD *)(0x140000000LL + 24 * v17 + 3882624);
    *(_QWORD *)(0x140000008LL + 24 * v17 + 3882624) = MEMORY[0xFFFFF78000000008];
    if ( v18 )
    {
      v19 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      __writecr8(v19);
    }
    v20 = KeGetCurrentPrcb();
    v21 = v107;
    v96 = v20;
    v22 = MEMORY[0xFFFFF78000000320];
    _disable();
    v23 = (v21 & 0x200) != 0;
    _m_prefetchw((const void *)0xFFFFF78000000340LL);
    v24 = MEMORY[0xFFFFF78000000340];
    while ( 1 )
    {
      if ( (v24 & 1) != 0 )
      {
        v24 = MEMORY[0xFFFFF78000000340];
      }
      else
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v24 + 1, v24);
        if ( v25 == v24 )
        {
          v26 = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)&v27 + 1) = 0LL;
          if ( v26.QuadPart > MEMORY[0xFFFFF78000000348] )
          {
            v28 = v26.QuadPart - MEMORY[0xFFFFF78000000348];
            if ( MEMORY[0xFFFFF78000000368] )
              v28 <<= MEMORY[0xFFFFF78000000368];
            v27 = (unsigned __int64)v28 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
            v94 = *((_QWORD *)&v27 + 1);
            KiSystemTimeErrorAccumulator += v27;
            if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v27 )
              v94 = ++*((_QWORD *)&v27 + 1);
          }
          v29 = *((_QWORD *)&v27 + 1) + MEMORY[0xFFFFF78000000014];
          *((_QWORD *)&v30 + 1) = 0LL;
          if ( v26.QuadPart > MEMORY[0xFFFFF78000000350] )
          {
            v31 = v26.QuadPart - MEMORY[0xFFFFF78000000350];
            if ( MEMORY[0xFFFFF78000000369] )
              v31 <<= MEMORY[0xFFFFF78000000369];
            v30 = (unsigned __int64)v31 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
            v95 = *((_QWORD *)&v30 + 1);
            KiInterruptTimeErrorAccumulator += v30;
            if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v30 )
              v95 = ++*((_QWORD *)&v30 + 1);
          }
          v32 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v30 + 1);
          MEMORY[0xFFFFF7800000001C] = HIDWORD(v29);
          MEMORY[0xFFFFF78000000014] = v29;
          MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v30 + 1)) >> 32;
          MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v30 + 1);
          MEMORY[0xFFFFF78000000348] = v26.QuadPart;
          MEMORY[0xFFFFF78000000350] = v26.QuadPart;
          v33 = MEMORY[0xFFFFF78000000320];
          v34 = (unsigned int)KiTickOffset - *((_QWORD *)&v30 + 1);
          if ( v34 <= 0 )
          {
            v35 = 1LL;
            v36 = v34 + KeMaximumIncrement;
            LODWORD(v34) = v34 + KeMaximumIncrement;
            if ( v36 <= 0 )
            {
              v37 = KeNumberProcessorsGroup0[1];
              LODWORD(v34) = v36
                           + (((unsigned __int64)(((unsigned __int64)-v36
                                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v37)
                            + 1)
                           * KeMaximumIncrement;
              v35 = ((unsigned __int64)(((unsigned __int64)-v36
                                       * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v37)
                  + 2;
            }
            v33 = v35 + MEMORY[0xFFFFF78000000320];
            MEMORY[0xFFFFF78000000328] = (v35 + MEMORY[0xFFFFF78000000320]) >> 32;
            MEMORY[0xFFFFF78000000320] += v35;
          }
          KiTickOffset = v34;
          ++MEMORY[0xFFFFF78000000340];
          v38 = KeGetCurrentPrcb();
          v89 = 0;
          v39 = v38->SchedulerAssist;
          if ( v39 )
          {
            if ( v38->NestingLevel <= 1u )
            {
              v40 = v39[5];
              v39[5] = v40 + 1;
              if ( v40 == -1 && !*((_BYTE *)v39 + 25) && !*((_BYTE *)v39 + 27) )
                KiPerformUnboostKick(v38);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
          {
            KiSetVpThreadSpinLockCount((__int64)v38, 0);
            do
              KeYieldProcessorEx(&v89);
            while ( KiForceIdleLock );
            KiSetVpThreadSpinLockCount((__int64)v38, 1);
          }
          if ( KiForceIdleStartTime && v32 >= KiForceIdleStartTime && KiForceIdleState == 2 )
          {
            KiSetForceIdleState(1LL);
            if ( !*(&KiForceIdleStartDpc + 7) )
              WORD1(KiForceIdleStartDpc) = LOWORD(v20->Number) + 1280;
            KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0LL, 0LL, 0LL, 0);
          }
          v41 = ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0;
          _InterlockedAnd64(&KiForceIdleLock, 0LL);
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          if ( v43 )
          {
            if ( v42->NestingLevel <= 1u )
            {
              v44 = v43[5] - 1;
              v43[5] = v44;
              if ( !v44 && !*((_BYTE *)v43 + 25) && !*((_BYTE *)v43 + 27) )
                KiPerformUnboostKick(v42);
            }
          }
          if ( v23 )
            _enable();
          if ( KeMinimumIncrement - 1 + (int)v32 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
            KiLastNonHrTimerExpiration = v32;
          if ( v33 != v22 && !--KiBalanceSetManagerCount )
          {
            KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
            KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
          }
          if ( PpmIdleDurationExpirationTimeout )
          {
            if ( PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < v32 )
            {
              LODWORD(v104[0]) = 1310721;
              v45 = 0;
              memset((char *)v104 + 4, 0, 0xA4uLL);
              if ( KeNumberNodes )
              {
                v46 = KeNodeBlock;
                v47 = (unsigned __int16)KeNumberNodes;
                do
                {
                  v48 = *v46;
                  v49 = *(_WORD *)(*v46 + 144);
                  v50 = *(_QWORD *)(*v46 + 72);
                  if ( LOWORD(v104[0]) <= v49 )
                    LOWORD(v104[0]) = v49 + 1;
                  v104[v49 + 1] |= v50;
                  if ( *(_QWORD *)(v48 + 72) )
                    v45 = 1;
                  ++v46;
                  --v47;
                }
                while ( v47 );
                if ( v45 )
                {
                  PpmIdleLastIdleDurationExpirationTime = v32;
                  v105[0] = 1310721;
                  memset(&v105[1], 0, 0xA4uLL);
                  v101[1] = (unsigned __int16 *)v104[1];
                  v102 = 0;
                  v101[0] = (unsigned __int16 *)v104;
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v87, v101) )
                  {
                    Prcb = (struct _KPRCB *)KeGetPrcb(v87);
                    if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= v32 )
                      KeAddProcessorAffinityEx(v105, v87);
                  }
                  if ( !(unsigned int)KeIsEmptyAffinityEx(v105) )
                  {
                    PpmEventIdleDurationExpiration(v105);
                    HalRequestIpi(0LL, v105, v52);
                  }
                }
              }
            }
          }
          if ( !v41 )
            PoExecutePerfCheck();
          v53 = v32 >> 18;
          if ( KiGroupSchedulingEnabled && v33 > KiGenerationEndTick )
          {
            v54 = 1;
            KiGenerationEndTick += (unsigned int)KiGenerationTicks;
          }
          else
          {
            v54 = 0;
          }
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
            KiForwardTick((__int64)v96, KeNumberProcessors_0, v53, v54, (char *)v106);
            LOWORD(v55) = KiClockCheckPending[0];
            if ( KiClockCheckPending[0] >= v106[0] )
            {
              v56 = KiClockCheckPending;
              LOWORD(v55) = v106[0];
            }
            else
            {
              v56 = v106;
            }
            word_14039BA52 = 20;
            v57 = 0;
            KiClockCheckPending[0] = *v56;
            if ( (_WORD)v55 )
            {
              v57 = v55;
              v58 = 0LL;
              v55 = (unsigned __int16)v55;
              do
              {
                *(_QWORD *)&KiClockCheckPending[v58 + 4] |= *(_QWORD *)&v106[v58 + 4];
                v58 += 4LL;
                --v55;
              }
              while ( v55 );
            }
            for ( ;
                  v57 < (unsigned __int16)*v56;
                  *(_QWORD *)&KiClockCheckPending[4 * v59 + 4] = *(_QWORD *)&v56[4 * v59 + 4] )
            {
              v59 = v57++;
            }
            for ( dword_14039BA54 = 0;
                  v57 < (unsigned __int16)word_14039BA52;
                  *(_QWORD *)&KiClockCheckPending[4 * v60 + 4] = 0LL )
            {
              v60 = v57++;
            }
          }
          KiUpdateRunTime(v86, a2);
          if ( KiClockOwnerOneShotRequestState == 2 )
          {
            v61 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            KiSetClockIntervalToMinimumRequested(IdleNonParkedCpuSet, v14);
            __writecr8(v61);
          }
          v62 = v97;
          *v97 = MEMORY[0xFFFFF78000000350];
          v63 = MEMORY[0xFFFFF78000000008];
          if ( KiClockState == 2 )
          {
            KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v90);
            _InterlockedExchange(&KiClockState, 0);
            KiEventClockStateChange(0, 2, &v98, &v90);
          }
          v64 = v63 + (unsigned int)KeTimeIncrement;
          v62[2] = v63;
          KiClockTimerNextTickTime = v64;
          goto LABEL_169;
        }
      }
      _mm_pause();
    }
  }
  v65 = KeGetCurrentPrcb();
  v66 = v107;
  ++v65->ClockInterrupts;
  ++v65->InterruptLastCount;
  _disable();
  v67 = MEMORY[0xFFFFF78000000320];
  if ( (v66 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)v65, v65->LastTick, MEMORY[0xFFFFF78000000320], v3, v16);
  CurrentThread = v65->CurrentThread;
  v65->ClockKeepAlive = 1;
  if ( CurrentThread != v65->IdleThread )
  {
    if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
      goto LABEL_155;
    SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
    if ( CurrentThread->SystemHeteroCpuPolicy )
    {
      if ( SystemHeteroCpuPolicy >= 5 )
        SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, v14, v65);
      ParentNode = v65->ParentNode;
      KiGenerateHeteroSets(
        (_DWORD)ParentNode,
        CurrentThread->Affinity.Mask,
        SystemHeteroCpuPolicy,
        (unsigned int)&v91,
        (__int64)&v100,
        (__int64)&v99);
      GroupSetMember = v65->GroupSetMember;
      if ( (GroupSetMember & v99) == 0 )
        goto LABEL_155;
      if ( (GroupSetMember & v91) == 0 )
      {
        IdleNonParkedCpuSet = ParentNode->IdleNonParkedCpuSet;
        if ( v65->GroupSetMember != v65->CoreProcessorSet && (IdleNonParkedCpuSet & ParentNode->IdleSmtSet) != 0 )
          IdleNonParkedCpuSet &= ParentNode->IdleSmtSet;
        v14 = v91;
        if ( (IdleNonParkedCpuSet & v91) != 0 )
          goto LABEL_155;
        SchedulingClass = v65->PowerState.SchedulingClass;
        v14 = v100 & IdleNonParkedCpuSet & ~v91;
        if ( v14 )
        {
          v73 = ParentNode->Affinity.Group << 6;
          while ( 1 )
          {
            _BitScanReverse64(&v74, v14);
            v93 = v74;
            v75 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v73 + v74)]];
            if ( *(_BYTE *)(v75 + 23859) > SchedulingClass )
              break;
            v14 &= ~*(_QWORD *)(v75 + 200);
            if ( !v14 )
              goto LABEL_136;
          }
LABEL_155:
          v65->QuantumEnd = 1;
          if ( v65->NestingLevel )
          {
            v65->InterruptRequest = 1;
          }
          else
          {
            LOBYTE(IdleNonParkedCpuSet) = 2;
            HalRequestSoftwareInterrupt(IdleNonParkedCpuSet);
          }
          goto LABEL_169;
        }
      }
    }
LABEL_136:
    v76 = KeGetCurrentPrcb();
    v77.PrcbFlags = (volatile int)v76->PrcbFlags;
    if ( (v77.PrcbFlags & 0xC) != 0 )
    {
      _disable();
      IdleNonParkedCpuSet = v76->PrcbFlags.PrcbFlags & 0xFFFFFFF3;
      v14 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
      v78 = (v66 & 0x200) != 0;
      if ( (_DWORD)v14 != (v76->PrcbFlags.PrcbFlags & 3) )
      {
        v79.PrcbFlags = IdleNonParkedCpuSet | (4 * v14);
        v76->PrcbFlags = v79;
        v80 = PoSetProcessorQoS(v76, ((unsigned int)v79.PrcbFlags >> 2) & 3);
        IdleNonParkedCpuSet = (unsigned int)v76->PrcbFlags.PrcbFlags;
        if ( !v80 )
        {
LABEL_141:
          if ( (IdleNonParkedCpuSet & 0xC) == 0 )
            KeUpdatePendingQosRequest(v76);
          if ( v78 )
            _enable();
          goto LABEL_147;
        }
        IdleNonParkedCpuSet = (unsigned int)IdleNonParkedCpuSet & 0xFFFFFFF3;
      }
      v76->PrcbFlags.PrcbFlags = IdleNonParkedCpuSet;
      goto LABEL_141;
    }
    if ( ((*((_BYTE *)&CurrentThread->MiscFlags + 4) ^ LOBYTE(v77.PrcbFlags)) & 3) != 0 )
      KeCheckAndApplyBamQos(v76, CurrentThread);
  }
LABEL_147:
  if ( MEMORY[0xFFFFF78000000320] > v65->GenerationTarget )
    goto LABEL_155;
  IdleNonParkedCpuSet = (__int64)CurrentThread->SchedulingGroup;
  if ( IdleNonParkedCpuSet )
  {
    for ( IdleNonParkedCpuSet += v65->ScbOffset;
          IdleNonParkedCpuSet;
          IdleNonParkedCpuSet = *(_QWORD *)(IdleNonParkedCpuSet + 408) )
    {
      v14 = *(unsigned __int8 *)(IdleNonParkedCpuSet + 112);
      v81 = IdleNonParkedCpuSet - v65->ScbOffset;
      if ( (v14 & 4) != 0 )
      {
        if ( (v14 & 0x10) != 0 )
          goto LABEL_160;
        if ( (v14 & 2) == 0 )
        {
          if ( *(__int64 *)(v81 + 48) <= 0 )
            goto LABEL_155;
LABEL_160:
          v82 = *(_QWORD *)(IdleNonParkedCpuSet + 24);
LABEL_161:
          if ( *(_QWORD *)IdleNonParkedCpuSet >= v82 )
            goto LABEL_155;
        }
      }
      else
      {
        if ( (v14 & 0x10) != 0 )
        {
          v82 = *(_QWORD *)(IdleNonParkedCpuSet + 8);
          goto LABEL_161;
        }
        if ( (v14 & 2) == 0 && *(__int64 *)(v81 + 48) <= 0 )
          goto LABEL_155;
      }
    }
  }
  if ( (signed int)(v65->ReadyScanTick - v67) < 0
    && (!KiShouldScanSharedReadyQueue((__int64)v65) || (v65->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
    && (v65->ReadySummary & 0x7FFE) == 0 )
  {
    v65->ReadyScanTick = v67 + 75;
  }
LABEL_169:
  if ( v85 )
    goto LABEL_170;
}
