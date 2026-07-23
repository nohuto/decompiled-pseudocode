/*
 * XREFs of KeClockInterruptNotify @ 0x140095E30
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x14006238C (KeIsForceIdleEngaged.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140092B80 (KiCheckPreferredHeteroProcessor.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x1400933E0 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KiForwardTick @ 0x140093460 (KiForwardTick.c)
 *     PoExecutePerfCheck @ 0x140093910 (PoExecutePerfCheck.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     KeAccumulateTicks @ 0x1400987C0 (KeAccumulateTicks.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     KiEventClockStateChange @ 0x14010F7E8 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14010F828 (KiSetPendingTick.c)
 *     KiShouldScanSharedReadyQueue @ 0x14011B5DC (KiShouldScanSharedReadyQueue.c)
 *     PpmGetIdleConstrainedMask @ 0x140142F00 (PpmGetIdleConstrainedMask.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeCheckAndApplyBamQos @ 0x140209EA0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x14020A080 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14020A308 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14020A548 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x14020C768 (KiSetForceIdleState.c)
 *     PoExecuteIdleCheck @ 0x14023A3D0 (PoExecuteIdleCheck.c)
 *     PoSetProcessorQoS @ 0x14024069C (PoSetProcessorQoS.c)
 *     PpmEventIdleDurationExpiration @ 0x14024A88C (PpmEventIdleDurationExpiration.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // bp
  char v6; // di
  struct _KPRCB *v7; // rbx
  __int16 v8; // r15
  int v9; // ebp
  __int64 v10; // rdx
  unsigned __int64 IdleNonParkedCpuSet; // rcx
  _KTHREAD *CurrentThread; // rdi
  unsigned int SystemHeteroCpuPolicy; // eax
  struct _KPRCB *v14; // rsi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  bool v16; // r15
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  LARGE_INTEGER v19; // r8
  unsigned __int128 v20; // rax
  LONGLONG v21; // rdx
  __int64 v22; // r11
  unsigned __int64 v23; // r9
  LONGLONG v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // r8
  unsigned __int64 v28; // rbx
  char v29; // al
  __int64 v30; // r9
  __int16 *v31; // r8
  unsigned __int16 v32; // dx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct _KPRCB *v35; // rbx
  __int16 v36; // r15
  int v37; // ebp
  __int64 v38; // rdi
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  struct _KPRCB *v42; // r14
  volatile int BamFlags; // ecx
  unsigned __int64 v44; // rdx
  char v45; // al
  unsigned __int64 v46; // rax
  struct _KPRCB *Prcb; // rax
  volatile CCHAR v48; // t1
  unsigned __int64 v49; // rdx
  LARGE_INTEGER InterruptTimePrecise; // r14
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // edx
  bool v54; // r15
  unsigned int v55; // ecx
  unsigned int v56; // edx
  _KNODE *ParentNode; // rsi
  unsigned __int64 GroupSetMember; // rax
  unsigned __int8 SchedulingClass; // r11
  unsigned __int64 v60; // rdx
  int v61; // r9d
  unsigned __int64 v62; // rax
  __int64 v63; // r10
  int v64; // edx
  bool v65; // r15
  volatile unsigned int v66; // edx
  char v67; // [rsp+30h] [rbp-2D8h]
  ULONG v68; // [rsp+34h] [rbp-2D4h] BYREF
  int v69; // [rsp+38h] [rbp-2D0h] BYREF
  int v70; // [rsp+3Ch] [rbp-2CCh] BYREF
  struct _KPRCB *v71; // [rsp+40h] [rbp-2C8h]
  __int64 v72; // [rsp+48h] [rbp-2C0h] BYREF
  __int64 v73; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v74; // [rsp+58h] [rbp-2B0h]
  int v75; // [rsp+60h] [rbp-2A8h]
  __int64 v76; // [rsp+68h] [rbp-2A0h]
  __int64 v77; // [rsp+70h] [rbp-298h]
  _QWORD *v78; // [rsp+78h] [rbp-290h]
  char v79[8]; // [rsp+80h] [rbp-288h] BYREF
  __int64 v80; // [rsp+88h] [rbp-280h] BYREF
  __int64 v81; // [rsp+90h] [rbp-278h] BYREF
  unsigned __int16 *v82[2]; // [rsp+98h] [rbp-270h] BYREF
  __int16 v83; // [rsp+A8h] [rbp-260h]
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp-258h] BYREF
  _DWORD v85[44]; // [rsp+C0h] [rbp-248h] BYREF
  _WORD v86[88]; // [rsp+170h] [rbp-198h] BYREF
  char v87[8]; // [rsp+220h] [rbp-E8h] BYREF
  unsigned __int16 *v88; // [rsp+228h] [rbp-E0h]
  int v89; // [rsp+300h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v72 = 0LL;
  if ( !KiForceIdleDisabled )
  {
    _disable();
    v69 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v69);
      while ( KiForceIdleLock );
    }
    if ( CurrentPrcb->ClockOwner && KeIsForceIdleEngaged() )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
      if ( KiForceIdleWatchdogResetCount == 32 )
      {
        off_140353600[0]();
        KiForceIdleWatchdogResetCount = 0;
      }
      else
      {
        ++KiForceIdleWatchdogResetCount;
      }
      if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
      {
        LOBYTE(v51) = 1;
        KiResetForceIdle(2LL, v51);
      }
      else
      {
        v3 = 1;
      }
    }
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    _enable();
    if ( v3 )
      return;
  }
  v6 = *(_BYTE *)(a1 + 368) & 1;
  if ( !CurrentPrcb->ClockOwner )
  {
    v7 = KeGetCurrentPrcb();
    v8 = v89;
    ++v7->ClockInterrupts;
    ++v7->InterruptLastCount;
    _disable();
    v9 = MEMORY[0xFFFFF78000000320];
    if ( (v8 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((_DWORD)v7, v7->LastTick, MEMORY[0xFFFFF78000000320], a2, v6);
    CurrentThread = v7->CurrentThread;
    v7->ClockKeepAlive = 1;
    if ( CurrentThread != v7->IdleThread )
    {
      if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
        goto LABEL_12;
      SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
      if ( CurrentThread->SystemHeteroCpuPolicy )
      {
        if ( SystemHeteroCpuPolicy >= 5 )
          SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, v10, v7);
        ParentNode = v7->ParentNode;
        KiGenerateHeteroSets(
          (_DWORD)ParentNode,
          CurrentThread->Affinity.Mask,
          SystemHeteroCpuPolicy,
          (unsigned int)&v73,
          (__int64)&v81,
          (__int64)&v80);
        GroupSetMember = v7->GroupSetMember;
        if ( (GroupSetMember & v80) == 0 )
          goto LABEL_12;
        if ( (GroupSetMember & v73) == 0 )
        {
          IdleNonParkedCpuSet = ParentNode->IdleNonParkedCpuSet;
          if ( v7->GroupSetMember != v7->CoreProcessorSet && (IdleNonParkedCpuSet & ParentNode->IdleSmtSet) != 0 )
            IdleNonParkedCpuSet &= ParentNode->IdleSmtSet;
          if ( (IdleNonParkedCpuSet & v73) != 0 )
            goto LABEL_12;
          SchedulingClass = v7->PowerState.SchedulingClass;
          v60 = v81 & IdleNonParkedCpuSet & ~v73;
          if ( v60 )
          {
            v61 = ParentNode->Affinity.Group << 6;
            do
            {
              _BitScanReverse64(&v62, v60);
              v75 = v62;
              v63 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v61 + v62)]];
              if ( *(_BYTE *)(v63 + 23859) > SchedulingClass )
                goto LABEL_12;
              v60 &= ~*(_QWORD *)(v63 + 200);
            }
            while ( v60 );
          }
        }
      }
      v14 = KeGetCurrentPrcb();
      IdleNonParkedCpuSet = (unsigned int)v14->BamFlags;
      if ( (IdleNonParkedCpuSet & 0xC) != 0 )
      {
        _disable();
        v64 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
        v65 = (v8 & 0x200) != 0;
        IdleNonParkedCpuSet = v14->BamFlags & 0xFFFFFFF3;
        if ( v64 == (v14->BamFlags & 3) )
        {
          v14->BamFlags = IdleNonParkedCpuSet;
        }
        else
        {
          v66 = IdleNonParkedCpuSet | (4 * v64);
          v14->BamFlags = v66;
          if ( (unsigned __int8)PoSetProcessorQoS(v14, (v66 >> 2) & 3) )
            v14->BamFlags &= 0xFFFFFFF3;
        }
        if ( (v14->BamFlags & 0xC) == 0 )
          KeUpdatePendingQosRequest(v14);
        if ( v65 )
          _enable();
      }
      else if ( (((unsigned __int8)IdleNonParkedCpuSet ^ *((_BYTE *)&CurrentThread->MiscFlags + 4)) & 3) != 0 )
      {
        KeCheckAndApplyBamQos(v14, CurrentThread);
      }
    }
    if ( MEMORY[0xFFFFF78000000320] > v7->GenerationTarget )
    {
LABEL_12:
      v7->QuantumEnd = 1;
      if ( v7->NestingLevel )
      {
        v7->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(IdleNonParkedCpuSet) = 2;
        HalRequestSoftwareInterrupt(IdleNonParkedCpuSet);
      }
      return;
    }
    SchedulingGroup = CurrentThread->SchedulingGroup;
    if ( !SchedulingGroup || (IdleNonParkedCpuSet = (unsigned __int64)SchedulingGroup + v7->ScbOffset) == 0 )
    {
LABEL_16:
      if ( (signed int)(v7->ReadyScanTick - v9) < 0
        && (!(unsigned int)KiShouldScanSharedReadyQueue(v7) || (v7->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
        && (v7->ReadySummary & 0x7FFE) == 0 )
      {
        v7->ReadyScanTick = v9 + 75;
      }
      return;
    }
    while ( 1 )
    {
      v44 = IdleNonParkedCpuSet - v7->ScbOffset;
      v45 = *(_BYTE *)(IdleNonParkedCpuSet + 112);
      if ( (v45 & 4) != 0 )
      {
        if ( (v45 & 0x10) != 0 )
        {
          v46 = *(_QWORD *)(IdleNonParkedCpuSet + 24);
          goto LABEL_95;
        }
        if ( (v45 & 2) == 0
          && (*(__int64 *)(v44 + 48) <= 0 || *(_QWORD *)IdleNonParkedCpuSet >= *(_QWORD *)(IdleNonParkedCpuSet + 24)) )
        {
          goto LABEL_12;
        }
      }
      else
      {
        if ( (v45 & 0x10) != 0 )
        {
          v46 = *(_QWORD *)(IdleNonParkedCpuSet + 8);
LABEL_95:
          if ( *(_QWORD *)IdleNonParkedCpuSet >= v46 )
            goto LABEL_12;
          goto LABEL_96;
        }
        if ( (v45 & 2) == 0 && *(__int64 *)(v44 + 48) <= 0 )
          goto LABEL_12;
      }
LABEL_96:
      IdleNonParkedCpuSet = *(_QWORD *)(IdleNonParkedCpuSet + 408);
      if ( !IdleNonParkedCpuSet )
        goto LABEL_16;
    }
  }
  v67 = 0;
  v78 = (_QWORD *)(0x140000000LL + 24LL * (unsigned int)KiClockTickTraceIndex + 3608352);
  KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
  v78[1] = MEMORY[0xFFFFF78000000008];
  v71 = KeGetCurrentPrcb();
  v74 = MEMORY[0xFFFFF78000000320];
  _disable();
  v16 = (v89 & 0x200) != 0;
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v17 = MEMORY[0xFFFFF78000000340];
  while ( (v17 & 1) != 0 )
  {
    v17 = MEMORY[0xFFFFF78000000340];
LABEL_119:
    _mm_pause();
  }
  v18 = v17;
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v17 + 1, v17);
  if ( v18 != v17 )
    goto LABEL_119;
  v19 = KeQueryPerformanceCounter(0LL);
  *((_QWORD *)&v20 + 1) = 0LL;
  if ( v19.QuadPart > MEMORY[0xFFFFF78000000348] )
  {
    v21 = v19.QuadPart - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v21 <<= MEMORY[0xFFFFF78000000368];
    v20 = (unsigned __int64)v21 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v76 = *((_QWORD *)&v20 + 1);
    KiSystemTimeErrorAccumulator += v20;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v20 )
      v76 = ++*((_QWORD *)&v20 + 1);
  }
  v22 = *((_QWORD *)&v20 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v20 + 1) = 0LL;
  v23 = MEMORY[0xFFFFF78000000360];
  if ( v19.QuadPart > MEMORY[0xFFFFF78000000350] )
  {
    v24 = v19.QuadPart - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v24 <<= MEMORY[0xFFFFF78000000369];
    v20 = (unsigned __int64)v24 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v77 = *((_QWORD *)&v20 + 1);
    KiInterruptTimeErrorAccumulator += v20;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v20 )
      v77 = ++*((_QWORD *)&v20 + 1);
  }
  v25 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v20 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v22);
  MEMORY[0xFFFFF78000000014] = v22;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v20 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v20 + 1);
  MEMORY[0xFFFFF78000000348] = v19.QuadPart;
  MEMORY[0xFFFFF78000000350] = v19.QuadPart;
  v26 = MEMORY[0xFFFFF78000000320];
  v27 = (unsigned int)KiTickOffset - *((_QWORD *)&v20 + 1);
  if ( v27 <= 0 )
  {
    v23 = KeMaximumIncrement;
    *((_QWORD *)&v20 + 1) = 1LL;
    v27 += KeMaximumIncrement;
    if ( v27 <= 0 )
    {
      v48 = KeNumberProcessorsGroup0[1];
      v49 = ((unsigned __int64)(((unsigned __int64)-v27
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v48)
          + 1;
      v23 = v49 * KeMaximumIncrement;
      v27 += v23;
      *((_QWORD *)&v20 + 1) = v49 + 1;
    }
    v26 = *((_QWORD *)&v20 + 1) + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (*((_QWORD *)&v20 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += *((_QWORD *)&v20 + 1);
  }
  KiTickOffset = v27;
  ++MEMORY[0xFFFFF78000000340];
  v70 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v70);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleStartTime && v25 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL, *((_QWORD *)&v20 + 1), v27, v23);
    if ( !*(&KiForceIdleStartDpc + 7) )
      WORD1(KiForceIdleStartDpc) = v71->Number + 1280;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0LL, 0LL, 0LL, 0);
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v67 = 1;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  if ( v16 )
    _enable();
  if ( KeMinimumIncrement - 1 + (int)v25 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v25;
  if ( v26 != v74 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
  }
  if ( PpmIdleDurationExpirationTimeout
    && PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < v25
    && (unsigned __int8)PpmGetIdleConstrainedMask(v87, *((_QWORD *)&v20 + 1), v27, v23) )
  {
    PpmIdleLastIdleDurationExpirationTime = v25;
    v85[0] = 1310721;
    memset(&v85[1], 0, 0xA4uLL);
    v82[1] = v88;
    v82[0] = (unsigned __int16 *)v87;
    v83 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v68, v82) )
    {
      Prcb = (struct _KPRCB *)KeGetPrcb(v68);
      if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= v25 )
        KeAddProcessorAffinityEx(v85, v68);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v85) )
    {
      PpmEventIdleDurationExpiration(v85);
      HalRequestIpi(0LL, v85);
    }
  }
  if ( !v67 )
    PoExecutePerfCheck();
  v28 = v25 >> 18;
  if ( KiGroupSchedulingEnabled && v26 > KiGenerationEndTick )
  {
    v29 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  else
  {
    v29 = 0;
  }
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    KiForwardTick((__int64)v71, KeNumberProcessors_0, v28, v29, (char *)v86);
    LOWORD(v30) = KiClockCheckPending[0];
    if ( KiClockCheckPending[0] < v86[0] )
    {
      v31 = v86;
    }
    else
    {
      v31 = KiClockCheckPending;
      LOWORD(v30) = v86[0];
    }
    word_140358492 = 20;
    v32 = 0;
    KiClockCheckPending[0] = *v31;
    if ( (_WORD)v30 )
    {
      v32 = v30;
      v33 = 0LL;
      v30 = (unsigned __int16)v30;
      do
      {
        *(_QWORD *)&KiClockCheckPending[v33 + 4] |= *(_QWORD *)&v86[v33 + 4];
        v33 += 4LL;
        --v30;
      }
      while ( v30 );
    }
    for ( ; v32 < (unsigned __int16)*v31; *(_QWORD *)&KiClockCheckPending[4 * v34 + 4] = *(_QWORD *)&v31[4 * v34 + 4] )
      v34 = v32++;
    for ( dword_140358494 = 0; v32 < (unsigned __int16)word_140358492; *(_QWORD *)&KiClockCheckPending[4 * v52 + 4] = 0LL )
      v52 = v32++;
  }
  v35 = KeGetCurrentPrcb();
  ++v35->ClockInterrupts;
  ++v35->InterruptLastCount;
  _disable();
  v36 = v89;
  v37 = MEMORY[0xFFFFF78000000320];
  if ( (v89 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)v35, v35->LastTick, MEMORY[0xFFFFF78000000320], a2, v6);
  v38 = (__int64)v35->CurrentThread;
  v35->ClockKeepAlive = 1;
  if ( (_KTHREAD *)v38 == v35->IdleThread )
  {
LABEL_72:
    if ( KiCheckGroupSchedulingQuantumEnd((__int64)v35, v38) )
      goto LABEL_73;
    if ( (signed int)(v35->ReadyScanTick - v37) < 0
      && (!(unsigned int)KiShouldScanSharedReadyQueue(v39) || (v35->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
      && (v35->ReadySummary & 0x7FFE) == 0 )
    {
      v35->ReadyScanTick = v37 + 75;
    }
  }
  else
  {
    if ( *(_QWORD *)(v38 + 72) < *(_QWORD *)(v38 + 32)
      && !(unsigned int)KiCheckPreferredHeteroProcessor(v38, (__int64)v35, 1) )
    {
      v42 = KeGetCurrentPrcb();
      BamFlags = v42->BamFlags;
      if ( (BamFlags & 0xC) != 0 )
      {
        _disable();
        v53 = *(_DWORD *)(v38 + 120) & 3;
        v54 = (v36 & 0x200) != 0;
        v55 = v42->BamFlags & 0xFFFFFFF3;
        if ( v53 == (v42->BamFlags & 3) )
        {
          v42->BamFlags = v55;
        }
        else
        {
          v56 = v55 | (4 * v53);
          v42->BamFlags = v56;
          if ( (unsigned __int8)PoSetProcessorQoS(v42, (v56 >> 2) & 3) )
            v42->BamFlags &= 0xFFFFFFF3;
        }
        if ( (v42->BamFlags & 0xC) == 0 )
          KeUpdatePendingQosRequest(v42);
        if ( v54 )
          _enable();
      }
      else if ( (((unsigned __int8)BamFlags ^ *(_BYTE *)(v38 + 120)) & 3) != 0 )
      {
        KeCheckAndApplyBamQos(v42, v38);
      }
      goto LABEL_72;
    }
LABEL_73:
    v35->QuantumEnd = 1;
    KiRequestSoftwareInterrupt(v35, 2);
  }
  v40 = v78;
  *v78 = MEMORY[0xFFFFF78000000350];
  if ( KiClockState == 2 )
  {
    v72 = (unsigned int)KiLastRequestedTimeIncrement;
    ((void (__fastcall *)(_QWORD, _QWORD, char *))off_1403535D0[0])(
      0LL,
      (unsigned int)KiLastRequestedTimeIncrement,
      v79);
    KiSetPendingTick(1LL);
    _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0LL, 2LL, v79, &v72);
  }
  v41 = MEMORY[0xFFFFF78000000008] + (unsigned int)KeTimeIncrement;
  v40[2] = MEMORY[0xFFFFF78000000008];
  KiClockTimerNextTickTime = v41;
}
