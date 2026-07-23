/*
 * XREFs of KeClockInterruptNotify @ 0x1400F3A30
 * Callers:
 *     <none>
 * Callees:
 *     KiGetHeteroCpuPolicyThread @ 0x14001AF38 (KiGetHeteroCpuPolicyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiShouldScanSharedReadyQueue @ 0x140025C4C (KiShouldScanSharedReadyQueue.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400427D0 (KiCheckPreferredHeteroProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KiEventClockStateChange @ 0x140068030 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140068070 (KiSetPendingTick.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x1400F2C90 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KiForwardTick @ 0x1400F2D20 (KiForwardTick.c)
 *     PoExecutePerfCheck @ 0x1400F31A0 (PoExecutePerfCheck.c)
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     KeUpdatePendingVirtualLittleRequest @ 0x140203B98 (KeUpdatePendingVirtualLittleRequest.c)
 *     KiGenerateHeteroSets @ 0x140203F48 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x140206178 (KiSetForceIdleState.c)
 *     PoExecuteIdleCheck @ 0x1402275F0 (PoExecuteIdleCheck.c)
 *     PpmGetIdleConstrainedMask @ 0x140227C58 (PpmGetIdleConstrainedMask.c)
 *     PoSetVirtualProcessorType @ 0x14022D2FC (PoSetVirtualProcessorType.c)
 *     PpmEventIdleDurationExpiration @ 0x1402357EC (PpmEventIdleDurationExpiration.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // bp
  unsigned int v6; // r14d
  char v7; // si
  struct _KPRCB *v8; // rbx
  __int16 v9; // r14
  int v10; // ebp
  unsigned __int64 IdleNonParkedCpuSet; // rcx
  struct _KPRCB *v12; // rsi
  _KTHREAD *v13; // rdi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  bool v15; // r14
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  LARGE_INTEGER v18; // r8
  unsigned __int128 v19; // rax
  LONGLONG v20; // rdx
  __int64 v21; // r11
  unsigned __int64 v22; // r9
  LONGLONG v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  unsigned __int64 v27; // rbx
  char v28; // al
  unsigned __int16 v29; // cx
  __int16 *v30; // r8
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rcx
  struct _KPRCB *v35; // rbx
  __int16 v36; // r14
  int v37; // ebp
  struct _KPRCB *v38; // rsi
  __int64 CurrentThread; // rsi
  _QWORD *v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  char v43; // al
  unsigned __int64 v44; // rax
  volatile CCHAR v45; // t1
  unsigned __int64 v46; // rdx
  LARGE_INTEGER InterruptTimePrecise; // r14
  __int64 v48; // rdx
  struct _KPRCB *Prcb; // rax
  __int64 v50; // rcx
  bool v51; // r14
  char v52; // al
  bool v53; // r14
  char v54; // al
  int HeteroCpuPolicyThread; // eax
  _KNODE *ParentNode; // rsi
  unsigned __int64 GroupSetMember; // rax
  unsigned __int8 SchedulingClass; // r11
  unsigned __int64 v59; // rdx
  int v60; // r9d
  unsigned __int64 v61; // rax
  __int64 v62; // r10
  char v63; // [rsp+30h] [rbp-2D8h]
  ULONG v64; // [rsp+34h] [rbp-2D4h] BYREF
  int v65; // [rsp+38h] [rbp-2D0h] BYREF
  struct _KPRCB *v66; // [rsp+40h] [rbp-2C8h]
  __int64 v67; // [rsp+48h] [rbp-2C0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v69; // [rsp+58h] [rbp-2B0h]
  int v70; // [rsp+60h] [rbp-2A8h]
  __int64 v71; // [rsp+68h] [rbp-2A0h]
  __int64 v72; // [rsp+70h] [rbp-298h]
  _QWORD *v73; // [rsp+78h] [rbp-290h]
  __int64 v74; // [rsp+80h] [rbp-288h] BYREF
  __int64 v75; // [rsp+88h] [rbp-280h] BYREF
  __int64 v76; // [rsp+90h] [rbp-278h] BYREF
  unsigned __int16 *v77[2]; // [rsp+98h] [rbp-270h] BYREF
  __int16 v78; // [rsp+A8h] [rbp-260h]
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp-258h] BYREF
  _DWORD v80[44]; // [rsp+C0h] [rbp-248h] BYREF
  _WORD v81[88]; // [rsp+170h] [rbp-198h] BYREF
  char v82[8]; // [rsp+220h] [rbp-E8h] BYREF
  unsigned __int16 *v83; // [rsp+228h] [rbp-E0h]
  int v84; // [rsp+300h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v67 = 0LL;
  if ( KiForceIdleDisabled )
    goto LABEL_6;
  _disable();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( KiForceIdleLock );
  }
  if ( CurrentPrcb->ClockOwner && !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
    if ( KiForceIdleWatchdogResetCount == 32 )
    {
      off_14033B5D0[0]();
      KiForceIdleWatchdogResetCount = 0;
    }
    else
    {
      ++KiForceIdleWatchdogResetCount;
    }
    if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
    {
      LOBYTE(v48) = 1;
      KiResetForceIdle(2LL, v48);
    }
    else
    {
      v3 = 1;
    }
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  _enable();
  if ( !v3 )
  {
LABEL_6:
    v7 = (*(_BYTE *)(a1 + 368) & 1) != 0;
    if ( CurrentPrcb->ClockOwner )
    {
      v63 = 0;
      v73 = (_QWORD *)(0x140000000LL + 24LL * (unsigned int)KiClockTickTraceIndex + 3499040);
      KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
      v73[1] = MEMORY[0xFFFFF78000000008];
      v66 = KeGetCurrentPrcb();
      v69 = MEMORY[0xFFFFF78000000320];
      _disable();
      v15 = (v84 & 0x200) != 0;
      _m_prefetchw((const void *)0xFFFFF78000000340LL);
      v16 = MEMORY[0xFFFFF78000000340];
      while ( 1 )
      {
        if ( (v16 & 1) != 0 )
        {
          v16 = MEMORY[0xFFFFF78000000340];
        }
        else
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v16 + 1, v16);
          if ( v17 == v16 )
          {
            _mm_mfence();
            v18 = KeQueryPerformanceCounter(0LL);
            *((_QWORD *)&v19 + 1) = 0LL;
            if ( v18.QuadPart > MEMORY[0xFFFFF78000000348] )
            {
              v20 = v18.QuadPart - MEMORY[0xFFFFF78000000348];
              if ( MEMORY[0xFFFFF78000000368] )
                v20 <<= MEMORY[0xFFFFF78000000368];
              v19 = (unsigned __int64)v20 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
              v71 = *((_QWORD *)&v19 + 1);
              KiSystemTimeErrorAccumulator += v19;
              if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v19 )
                v71 = ++*((_QWORD *)&v19 + 1);
            }
            v21 = *((_QWORD *)&v19 + 1) + MEMORY[0xFFFFF78000000014];
            *((_QWORD *)&v19 + 1) = 0LL;
            v22 = MEMORY[0xFFFFF78000000360];
            if ( v18.QuadPart > MEMORY[0xFFFFF78000000350] )
            {
              v23 = v18.QuadPart - MEMORY[0xFFFFF78000000350];
              if ( MEMORY[0xFFFFF78000000369] )
                v23 <<= MEMORY[0xFFFFF78000000369];
              v19 = (unsigned __int64)v23 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
              v72 = *((_QWORD *)&v19 + 1);
              KiInterruptTimeErrorAccumulator += v19;
              if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v19 )
                v72 = ++*((_QWORD *)&v19 + 1);
            }
            v24 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v19 + 1);
            MEMORY[0xFFFFF7800000001C] = HIDWORD(v21);
            MEMORY[0xFFFFF78000000014] = v21;
            MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v19 + 1)) >> 32;
            MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v19 + 1);
            MEMORY[0xFFFFF78000000348] = v18.QuadPart;
            MEMORY[0xFFFFF78000000350] = v18.QuadPart;
            v25 = MEMORY[0xFFFFF78000000320];
            v26 = (unsigned int)KiTickOffset - *((_QWORD *)&v19 + 1);
            if ( v26 <= 0 )
            {
              v22 = KeMaximumIncrement;
              *((_QWORD *)&v19 + 1) = 1LL;
              v26 += KeMaximumIncrement;
              if ( v26 <= 0 )
              {
                v45 = KeNumberProcessorsGroup0[1];
                v46 = ((unsigned __int64)(((unsigned __int64)-v26
                                         * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v45)
                    + 1;
                v22 = v46 * KeMaximumIncrement;
                v26 += v22;
                *((_QWORD *)&v19 + 1) = v46 + 1;
              }
              v25 = *((_QWORD *)&v19 + 1) + MEMORY[0xFFFFF78000000320];
              MEMORY[0xFFFFF78000000328] = (*((_QWORD *)&v19 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
              MEMORY[0xFFFFF78000000320] += *((_QWORD *)&v19 + 1);
            }
            KiTickOffset = v26;
            ++MEMORY[0xFFFFF78000000340];
            v65 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v65);
              while ( KiForceIdleLock );
            }
            if ( KiForceIdleStartTime && v24 >= KiForceIdleStartTime && KiForceIdleState == 2 )
            {
              KiSetForceIdleState(1LL);
              if ( !*(&KiForceIdleStartDpc + 7) )
                WORD1(KiForceIdleStartDpc) = v66->Number + 640;
              KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0LL, 0LL, 0LL, 0);
            }
            if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
              v63 = 1;
            _InterlockedAnd64(&KiForceIdleLock, 0LL);
            if ( v15 )
              _enable();
            if ( KeMinimumIncrement - 1 + (int)v24 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
              KiLastNonHrTimerExpiration = v24;
            if ( v25 != v69 && !--KiBalanceSetManagerCount )
            {
              KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
              KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
            }
            if ( PpmIdleDurationExpirationTimeout
              && PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < v24
              && (unsigned __int8)PpmGetIdleConstrainedMask(v82, *((_QWORD *)&v19 + 1), v26, v22) )
            {
              PpmIdleLastIdleDurationExpirationTime = v24;
              v80[0] = 1310721;
              memset(&v80[1], 0, 0xA4uLL);
              v77[1] = v83;
              v77[0] = (unsigned __int16 *)v82;
              v78 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v64, v77) )
              {
                Prcb = (struct _KPRCB *)KeGetPrcb(v64);
                if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= v24 )
                  KeAddProcessorAffinityEx(v80, v64);
              }
              if ( !(unsigned int)KeIsEmptyAffinityEx(v80) )
              {
                PpmEventIdleDurationExpiration(v80);
                HalRequestIpi(0LL, v80);
              }
            }
            if ( !v63 )
              PoExecutePerfCheck();
            v27 = v24 >> 18;
            if ( KiGroupSchedulingEnabled && v25 > KiGenerationEndTick )
            {
              v28 = 1;
              KiGenerationEndTick += (unsigned int)KiGenerationTicks;
            }
            else
            {
              v28 = 0;
            }
            if ( (unsigned int)KeNumberProcessors_0 > 1 )
            {
              KiForwardTick((__int64)v66, KeNumberProcessors_0, v27, v28, (__int64)v81);
              v29 = KiClockCheckPending[0];
              if ( KiClockCheckPending[0] < v81[0] )
              {
                v30 = v81;
              }
              else
              {
                v30 = KiClockCheckPending;
                v29 = v81[0];
              }
              word_14033FE12 = 20;
              KiClockCheckPending[0] = *v30;
              v31 = 0;
              if ( v29 )
              {
                v31 = v29;
                v32 = 0LL;
                v33 = v29;
                do
                {
                  *(_QWORD *)&KiClockCheckPending[v32 + 4] |= *(_QWORD *)&v81[v32 + 4];
                  v32 += 4LL;
                  --v33;
                }
                while ( v33 );
              }
              for ( ;
                    v31 < (unsigned __int16)*v30;
                    *(_QWORD *)&KiClockCheckPending[4 * v34 + 4] = *(_QWORD *)&v30[4 * v34 + 4] )
              {
                v34 = v31++;
              }
              for ( dword_14033FE14 = 0;
                    v31 < (unsigned __int16)word_14033FE12;
                    *(_QWORD *)&KiClockCheckPending[4 * v50 + 4] = 0LL )
              {
                v50 = v31++;
              }
            }
            v35 = KeGetCurrentPrcb();
            ++v35->ClockInterrupts;
            ++v35->InterruptLastCount;
            _disable();
            v36 = v84;
            v37 = MEMORY[0xFFFFF78000000320];
            if ( (v84 & 0x200) != 0 )
              _enable();
            KeAccumulateTicks((_DWORD)v35, v35->LastTick, MEMORY[0xFFFFF78000000320], a2, v7);
            v35->ClockKeepAlive = 1;
            v38 = KeGetCurrentPrcb();
            if ( KeGetCurrentThread() != v38->IdleThread && v38->PendingVirtualLittle )
            {
              _disable();
              v51 = (v36 & 0x200) != 0;
              v52 = PoSetVirtualProcessorType(v38, 1LL);
              v38->PendingVirtualLittle = v52 == 0;
              if ( v52 )
                KeUpdatePendingVirtualLittleRequest(v38);
              if ( v51 )
                _enable();
            }
            CurrentThread = (__int64)v35->CurrentThread;
            if ( (_KTHREAD *)CurrentThread != v35->IdleThread
              && (*(_QWORD *)(CurrentThread + 72) >= *(_QWORD *)(CurrentThread + 32)
               || (unsigned int)KiCheckPreferredHeteroProcessor((__int64)v35->CurrentThread, (__int64)v35, 1))
              || KiCheckGroupSchedulingQuantumEnd((__int64)v35, CurrentThread) )
            {
              v35->QuantumEnd = 1;
              KiRequestSoftwareInterrupt(v35, 2);
            }
            else if ( (signed int)(v35->ReadyScanTick - v37) < 0
                   && (!KiShouldScanSharedReadyQueue((__int64)v35) || (v35->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
                   && (v35->ReadySummary & 0x7FFE) == 0 )
            {
              v35->ReadyScanTick = v37 + 75;
            }
            v40 = v73;
            *v73 = MEMORY[0xFFFFF78000000350];
            if ( KiClockState == 2 )
            {
              v67 = (unsigned int)KiLastRequestedTimeIncrement;
              ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_14033B5A0[0])(
                0LL,
                (unsigned int)KiLastRequestedTimeIncrement,
                &v74);
              KiSetPendingTick(1);
              _InterlockedExchange(&KiClockState, 0);
              KiEventClockStateChange(0, 2, &v74, &v67);
            }
            v41 = MEMORY[0xFFFFF78000000008] + (unsigned int)KeTimeIncrement;
            v40[2] = MEMORY[0xFFFFF78000000008];
            KiClockTimerNextTickTime = v41;
            return;
          }
        }
        _mm_pause();
      }
    }
    v8 = KeGetCurrentPrcb();
    v9 = v84;
    ++v8->ClockInterrupts;
    ++v8->InterruptLastCount;
    _disable();
    v10 = MEMORY[0xFFFFF78000000320];
    if ( (v9 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((_DWORD)v8, v8->LastTick, MEMORY[0xFFFFF78000000320], a2, v7);
    v8->ClockKeepAlive = 1;
    v12 = KeGetCurrentPrcb();
    if ( KeGetCurrentThread() != v12->IdleThread && v12->PendingVirtualLittle )
    {
      _disable();
      v53 = (v9 & 0x200) != 0;
      v54 = PoSetVirtualProcessorType(v12, 1LL);
      v12->PendingVirtualLittle = v54 == 0;
      if ( v54 )
        KeUpdatePendingVirtualLittleRequest(v12);
      if ( v53 )
        _enable();
    }
    v13 = v8->CurrentThread;
    if ( v13 != v8->IdleThread )
    {
      if ( v13->CycleTime >= v13->QuantumTarget )
        goto LABEL_74;
      if ( KeHeteroSystem != 1 && v13->SystemHeteroCpuPolicy )
      {
        HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread((__int64)v8->CurrentThread, (__int64)v8);
        ParentNode = v8->ParentNode;
        KiGenerateHeteroSets(
          (_DWORD)ParentNode,
          v13->Affinity.Mask,
          HeteroCpuPolicyThread,
          (unsigned int)&v68,
          (__int64)&v76,
          (__int64)&v75);
        GroupSetMember = v8->GroupSetMember;
        if ( (GroupSetMember & v75) == 0 )
          goto LABEL_74;
        if ( (GroupSetMember & v68) == 0 )
        {
          IdleNonParkedCpuSet = ParentNode->IdleNonParkedCpuSet;
          if ( v8->GroupSetMember != v8->CoreProcessorSet && (IdleNonParkedCpuSet & ParentNode->IdleSmtSet) != 0 )
            IdleNonParkedCpuSet &= ParentNode->IdleSmtSet;
          if ( (IdleNonParkedCpuSet & v68) != 0 )
            goto LABEL_74;
          SchedulingClass = v8->PowerState.SchedulingClass;
          v59 = v76 & IdleNonParkedCpuSet & ~v68;
          if ( v59 )
          {
            v60 = ParentNode->Affinity.Group << 6;
            do
            {
              _BitScanReverse64(&v61, v59);
              v70 = v61;
              v62 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v60 + v61)]];
              if ( *(_BYTE *)(v62 + 23987) > SchedulingClass )
                goto LABEL_74;
              v59 &= ~*(_QWORD *)(v62 + 200);
            }
            while ( v59 );
          }
        }
      }
    }
    if ( MEMORY[0xFFFFF78000000320] <= v8->GenerationTarget )
    {
      SchedulingGroup = v13->SchedulingGroup;
      if ( !SchedulingGroup || (IdleNonParkedCpuSet = (unsigned __int64)SchedulingGroup + v8->ScbOffset) == 0 )
      {
LABEL_17:
        if ( (signed int)(v8->ReadyScanTick - v10) < 0
          && (!KiShouldScanSharedReadyQueue((__int64)v8) || (v8->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
          && (v8->ReadySummary & 0x7FFE) == 0 )
        {
          v8->ReadyScanTick = v10 + 75;
        }
        return;
      }
      while ( 1 )
      {
        v42 = IdleNonParkedCpuSet - v8->ScbOffset;
        v43 = *(_BYTE *)(IdleNonParkedCpuSet + 112);
        if ( (v43 & 4) != 0 )
        {
          if ( (v43 & 0x10) != 0 )
          {
            v44 = *(_QWORD *)(IdleNonParkedCpuSet + 24);
            goto LABEL_85;
          }
          if ( (v43 & 2) == 0
            && (*(__int64 *)(v42 + 48) <= 0 || *(_QWORD *)IdleNonParkedCpuSet >= *(_QWORD *)(IdleNonParkedCpuSet + 24)) )
          {
            break;
          }
        }
        else
        {
          if ( (v43 & 0x10) != 0 )
          {
            v44 = *(_QWORD *)(IdleNonParkedCpuSet + 8);
LABEL_85:
            if ( *(_QWORD *)IdleNonParkedCpuSet >= v44 )
              break;
            goto LABEL_86;
          }
          if ( (v43 & 2) == 0 && *(__int64 *)(v42 + 48) <= 0 )
            break;
        }
LABEL_86:
        IdleNonParkedCpuSet = *(_QWORD *)(IdleNonParkedCpuSet + 408);
        if ( !IdleNonParkedCpuSet )
          goto LABEL_17;
      }
    }
LABEL_74:
    v8->QuantumEnd = 1;
    if ( v8->NestingLevel )
    {
      v8->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(IdleNonParkedCpuSet) = 2;
      HalRequestSoftwareInterrupt(IdleNonParkedCpuSet);
    }
  }
}
