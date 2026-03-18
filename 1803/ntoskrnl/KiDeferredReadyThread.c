/*
 * XREFs of KiDeferredReadyThread @ 0x1400FBA30
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C2454 (KiSetThreadSchedulingGroup.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x14003A6D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x14003A994 (KiScheduleNextForegroundBoost.c)
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     KiTryToAcquireThreadLock @ 0x1400A73A8 (KiTryToAcquireThreadLock.c)
 *     KiSetLockOwnershipQuantum @ 0x1400A745C (KiSetLockOwnershipQuantum.c)
 *     KiAddThreadToScbQueue @ 0x1400A930C (KiAddThreadToScbQueue.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x1400C38C0 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1400EB8C0 (KiComputeNewPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400ECAB8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400EE044 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiChooseTargetProcessor @ 0x1400FC8B0 (KiChooseTargetProcessor.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KeReadGuestSchedulerAssistPriority @ 0x1401A5A6C (KeReadGuestSchedulerAssistPriority.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402482DC (KiHeteroChooseTargetProcessor.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 *     KiIsThreadRankBiased @ 0x14024AB44 (KiIsThreadRankBiased.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2, __int64 p_DpcData)
{
  unsigned __int64 v4; // r15
  bool v5; // zf
  char v6; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v9; // r14
  char v10; // al
  unsigned __int8 v11; // di
  unsigned int v12; // eax
  int v13; // edx
  char v14; // r9
  char v15; // r10
  int v16; // r11d
  int v17; // esi
  char v18; // di
  bool v19; // r12
  char v20; // r14
  unsigned __int8 v21; // r13
  unsigned __int16 v22; // dx
  unsigned __int64 v23; // rcx
  int v24; // r10d
  __int64 v25; // rdi
  unsigned int v26; // r15d
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned int v36; // r14d
  int v37; // esi
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KPRCB *v40; // rax
  __int64 result; // rax
  char v42; // al
  unsigned __int64 v43; // rcx
  char v44; // dl
  unsigned __int8 v45; // cl
  char v46; // al
  unsigned int v47; // eax
  int v48; // esi
  struct _KDPC *v49; // rcx
  _KTHREAD *v50; // r14
  __int64 v51; // r14
  int v52; // ecx
  __int64 v53; // rax
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // esi
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  struct _KPRCB *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // rax
  bool v63; // dl
  int v64; // eax
  __int64 v65; // r15
  __int64 v66; // rcx
  struct _KPRCB *v67; // r13
  __int64 v68; // r14
  _QWORD *v69; // rsi
  _DWORD *v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rcx
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  struct _KPRCB *v75; // rcx
  _DWORD *v76; // rdx
  unsigned int v77; // r10d
  struct _KPRCB *v78; // rcx
  _DWORD *v79; // rdx
  struct _KPRCB *v80; // rsi
  __int64 v81; // rax
  _DWORD *v82; // rcx
  char v83; // cl
  struct _KDPC *v84; // rcx
  int v85; // eax
  char v86; // dl
  char v87; // al
  char v88; // r9
  int v89; // esi
  int v90; // eax
  struct _KDPC *v91; // rcx
  __int64 v92; // rcx
  _QWORD *v93; // rcx
  _QWORD *v94; // rax
  _QWORD *v95; // rdx
  int v96; // eax
  PVOID *v97; // rdx
  unsigned __int64 v98; // rcx
  _QWORD *v99; // rdx
  __int64 v100; // r10
  int v101; // ecx
  __int64 v102; // rax
  unsigned int v103; // esi
  int v104; // r10d
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rdx
  int v110; // eax
  int GuestSchedulerAssistPriority; // edi
  char v112; // al
  _QWORD *v113; // rdx
  PVOID *v114; // r9
  int v115; // eax
  __int64 v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // r8
  unsigned __int64 v119; // rcx
  struct _KPRCB *v120; // r14
  __int64 v121; // rdx
  char v122; // r11
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // r9
  int v127; // eax
  int v128; // eax
  __int64 v129; // rdx
  char v130; // r11
  __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned int v133; // [rsp+30h] [rbp-50h]
  BOOL v134; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v135; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v136; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int16 v137; // [rsp+48h] [rbp-38h]
  int v138; // [rsp+50h] [rbp-30h] BYREF
  int v139; // [rsp+54h] [rbp-2Ch] BYREF
  int v140; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v141[7]; // [rsp+5Ch] [rbp-24h] BYREF
  bool v143; // [rsp+C8h] [rbp+48h] BYREF
  char v144; // [rsp+D0h] [rbp+50h] BYREF
  int v145; // [rsp+D8h] [rbp+58h]

  while ( 1 )
  {
    v4 = *(_QWORD *)(a2 + 72);
    v5 = *(_BYTE *)(a2 + 566) == 1;
    v145 = 0;
    if ( v5 )
      v6 = *(_BYTE *)(a2 + 567);
    else
      v6 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v138 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v110 = SchedulerAssist[5];
        SchedulerAssist[5] = v110 + 1;
        if ( v110 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v138);
      while ( *(_QWORD *)(a2 + 64) );
      LOBYTE(v108) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v108);
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) == 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    GuestSchedulerAssistPriority = KeReadGuestSchedulerAssistPriority(a2);
    v112 = *(_BYTE *)(a2 + 195);
    if ( (*(_BYTE *)(a2 + 564) & 0xF0) != 0 )
    {
      if ( GuestSchedulerAssistPriority <= v112 )
        goto LABEL_241;
LABEL_240:
      KiSetBasePriorityAndClearDecrement(a2, 0LL, 0);
      KiUpdateThreadPriority(0LL, a2, GuestSchedulerAssistPriority, 0);
      goto LABEL_241;
    }
    if ( GuestSchedulerAssistPriority != v112 )
      goto LABEL_240;
LABEL_241:
    v9 = 1;
LABEL_7:
    v10 = *(_BYTE *)(a2 + 566);
    if ( !v10 )
    {
      if ( v4 < *(_QWORD *)(a2 + 32) )
      {
        v145 = *(unsigned __int8 *)(a2 + 565);
        goto LABEL_27;
      }
      v42 = KiComputeNewPriority(a2, 1);
      if ( !v9 )
        KiUpdateThreadPriority(0LL, a2, v42, 0);
      KiTryScheduleNextForegroundBoost(a2);
      goto LABEL_67;
    }
    if ( *(char *)(a2 + 195) >= 16 )
    {
      v18 = 1;
      goto LABEL_25;
    }
    v11 = 0;
    v12 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
    if ( v4 >= *(_QWORD *)(a2 + 32) )
    {
      v11 = 4;
      if ( v12 < 2 )
        v11 = 5;
    }
    if ( v11 >= 4u || *(char *)(a2 + 563) >= 14 || v12 >= 2 && !*(_BYTE *)(a2 + 564) )
    {
      v44 = *(_BYTE *)(a2 + 195);
      v11 |= 8u;
      if ( v44 < 16 )
      {
        v45 = *(_BYTE *)(a2 + 564);
        p_DpcData = v45;
        LOBYTE(p_DpcData) = v45 & 0xF;
        v46 = v44 - (v45 >> 4) - (v45 & 0xF) - 1;
        v44 = *(_BYTE *)(a2 + 563);
        if ( v46 >= v44 )
          v44 = v46;
        if ( v45 )
        {
          if ( (_BYTE)p_DpcData )
            *(_DWORD *)(a2 + 1424) = MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(a2 + 564) = 0;
        }
        v47 = *(_DWORD *)(a2 + 1408);
        if ( v47 )
        {
          _BitScanReverse((unsigned int *)&p_DpcData, v47);
          if ( v44 < (int)p_DpcData )
            v44 = p_DpcData;
          v141[1] = p_DpcData;
        }
      }
      v48 = v44;
      if ( !v9 )
      {
        v49 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( v44 > *(char *)(a2 + 195) )
        {
          if ( *(_BYTE *)(a2 + 793) )
          {
            v113 = (_QWORD *)(a2 + 1376);
            if ( *(_QWORD *)(a2 + 1376) == 1LL )
            {
              p_DpcData = (__int64)&v49[401].DpcData;
              if ( v49 != (struct _KDPC *)-25720LL )
              {
                *v113 = *(_QWORD *)p_DpcData;
                *(_QWORD *)p_DpcData = v113;
                _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                KiAbQueueAutoBoostDpc(v49);
              }
            }
          }
        }
        v5 = (*(_DWORD *)(a2 + 120) & 0x400000) == 0;
        *(_BYTE *)(a2 + 195) = v48;
        if ( !v5 )
          *(_DWORD *)(*(_QWORD *)(a2 + 1512) + 4LL) = v48;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 544) + 1466LL) == 2 )
      v11 |= 2u;
    v13 = *(_DWORD *)(a2 + 120);
    if ( ((unsigned __int8)~v11 & ((v13 & 8) == 0)) == 0 || (v14 = *(_BYTE *)(a2 + 195), v14 <= 0) )
    {
LABEL_106:
      if ( (v11 & 6) == 6 && (v13 & 8) == 0 && *(char *)(a2 + 195) > 0 )
        KiScheduleNextForegroundBoost(a2);
      goto LABEL_24;
    }
    v15 = *(_BYTE *)(a2 + 564);
    if ( v15 )
    {
      if ( (v15 & 0xF0) != 0 )
        goto LABEL_106;
      p_DpcData = v11;
      LOBYTE(p_DpcData) = v11 >> 1;
      if ( (v11 & 2) == 0 )
        goto LABEL_106;
    }
    else
    {
      p_DpcData = v11;
      LOBYTE(p_DpcData) = v11 >> 1;
    }
    v16 = *(char *)(a2 + 563);
    v17 = v16 + v6;
    if ( (p_DpcData & 1) != 0 )
      v17 += (char)PsPrioritySeparation;
    if ( v17 >= 16 )
      v17 = 15;
    if ( v17 > v14 )
    {
      v83 = 0;
      if ( v17 > v16 + v6 )
        v83 = v17 - v16 - v6;
      *(_BYTE *)(a2 + 564) = v15 ^ (v83 ^ v15) & 0xF;
      v84 = (struct _KDPC *)KeGetCurrentPrcb();
      if ( (char)v17 > v14 )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v99 = (_QWORD *)(a2 + 1376);
          if ( *(_QWORD *)(a2 + 1376) == 1LL )
          {
            p_DpcData = (__int64)&v84[401].DpcData;
            if ( v84 != (struct _KDPC *)-25720LL )
            {
              *v99 = *(_QWORD *)p_DpcData;
              *(_QWORD *)p_DpcData = v99;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
              KiAbQueueAutoBoostDpc(v84);
            }
          }
        }
      }
      v85 = *(_DWORD *)(a2 + 120);
      *(_BYTE *)(a2 + 195) = v17;
      if ( (v85 & 0x400000) != 0 )
        *(_DWORD *)(*(_QWORD *)(a2 + 1512) + 4LL) = (char)v17;
    }
LABEL_24:
    v10 = *(_BYTE *)(a2 + 566);
    v18 = v11 >> 3;
LABEL_25:
    if ( v10 != 2 )
      goto LABEL_26;
    v86 = *(_BYTE *)(a2 + 195);
    if ( v86 > 0 )
    {
      v87 = *(_BYTE *)(a2 + 567);
      if ( v86 < v87 && v86 < 13 )
      {
        p_DpcData = *(unsigned int *)(a2 + 120);
        if ( (p_DpcData & 8) == 0 )
        {
          if ( v87 < 13 )
            v88 = *(_BYTE *)(a2 + 567);
          else
            v88 = 13;
          v89 = v88;
          v90 = *(_DWORD *)(a2 + 120);
          *(_BYTE *)(a2 + 564) += 16 * (v88 - v86);
          v91 = (struct _KDPC *)KeGetCurrentPrcb();
          if ( v88 > v86 )
          {
            if ( *(_BYTE *)(a2 + 793) )
            {
              v114 = (PVOID *)(a2 + 1376);
              if ( *(_QWORD *)(a2 + 1376) == 1LL )
              {
                v97 = &v91[401].DpcData;
                if ( v91 != (struct _KDPC *)-25720LL )
                {
                  *v114 = *v97;
                  *v97 = v114;
                  _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                  KiAbQueueAutoBoostDpc(v91);
                  v90 = *(_DWORD *)(a2 + 120);
                }
              }
            }
          }
          *(_BYTE *)(a2 + 195) = v89;
          if ( (v90 & 0x400000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a2 + 1512) + 4LL) = v89;
          v98 = *(_QWORD *)(a2 + 32);
          if ( v4 > v98 || v98 - v4 < (unsigned int)KiLockQuantumTarget )
            *(_QWORD *)(a2 + 32) = v4 + (unsigned int)KiLockQuantumTarget;
LABEL_26:
          if ( !v18 )
            goto LABEL_27;
          goto LABEL_67;
        }
      }
    }
    if ( !v18 )
    {
      KiSetLockOwnershipQuantum(a2, v4);
      goto LABEL_27;
    }
LABEL_67:
    v43 = v4 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a2 + 651);
    if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    *(_QWORD *)(a2 + 32) = v43;
LABEL_27:
    v5 = *(_DWORD *)(a2 + 484) == 0;
    v133 = *(_DWORD *)(a2 + 588);
    *(_WORD *)(a2 + 565) = 0;
    v19 = !v5 || *(_BYTE *)(a2 + 390) == 1;
    v20 = 0;
    v21 = _bittestandreset((signed __int32 *)(a2 + 116), 1u);
    if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 )
      KiComputeThreadAffinity(a2);
    v22 = *(_WORD *)(a2 + 584);
    v23 = *(_QWORD *)(a2 + 576);
    v137 = v22;
    v136 = v23;
    if ( !KiForceIdleDisabled )
    {
      if ( KiForceIdleState == 4 )
      {
        v116 = *(unsigned int *)(a2 + 536);
        LODWORD(v116) = v116 & 0x7FFFFFFF;
        v25 = KiProcessorBlock[v116];
        if ( !KiPrcbInGroupAffinity(v25, (__int64)&v136) )
        {
          _BitScanReverse64(&v119, v136);
          v141[3] = v119;
          v116 = *(unsigned int *)(v118 + 4LL * ((unsigned int)v119 + (v137 << 6)) + 4525328);
          v25 = *(_QWORD *)(v118 + 8 * v116 + 4512512);
        }
        v120 = KeGetCurrentPrcb();
        v140 = 0;
        while ( 1 )
        {
          LOBYTE(v117) = 1;
          KiSetVpThreadSpinLockCount(v120, v117);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v120, 0LL);
          do
            KeYieldProcessorEx(&v140);
          while ( *(_QWORD *)(v25 + 48) );
        }
        *(_DWORD *)(a2 + 536) = v116;
        v27 = *(_QWORD *)(a2 + 104);
        if ( v27 )
          v27 += *(unsigned int *)(v25 + 216);
        v135 = v27;
        goto LABEL_110;
      }
      v22 = v137;
      v23 = v136;
    }
    if ( ((v23 - 1) & v23) != 0 )
    {
      if ( *(_BYTE *)(a2 + 125) )
      {
        v25 = KiHeteroChooseTargetProcessor(a1, a2, &v136, &v134);
      }
      else
      {
        v24 = a1;
        v20 = KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(a2, a1) && !v19;
        v25 = KiChooseTargetProcessor(v24, a2, (unsigned int)&v136, (unsigned int)&v134, v20);
      }
    }
    else
    {
      v80 = KeGetCurrentPrcb();
      _BitScanReverse64(&v23, v23);
      v81 = (unsigned int)v23 + (v22 << 6);
      v141[2] = v23;
      v82 = v80->SchedulerAssist;
      v139 = 0;
      v25 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v81]];
      if ( v82 )
      {
        if ( v80->NestingLevel <= 1u )
        {
          v115 = v82[5];
          v82[5] = v115 + 1;
          if ( v115 == -1 && !*((_BYTE *)v82 + 25) && !*((_BYTE *)v82 + 27) )
            KiPerformUnboostKick(v80);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
      {
        KiSetVpThreadSpinLockCount(v80, 0LL);
        do
          KeYieldProcessorEx(&v139);
        while ( *(_QWORD *)(v25 + 48) );
        LOBYTE(v107) = 1;
        KiSetVpThreadSpinLockCount(v80, v107);
      }
      v134 = (*(_BYTE *)(v25 + 35) & 1) == 0;
    }
    v26 = *(_DWORD *)(v25 + 36);
    *(_DWORD *)(a2 + 536) = v26;
    v27 = *(_QWORD *)(a2 + 104);
    if ( v27 )
      v27 += *(unsigned int *)(v25 + 216);
    v135 = v27;
    if ( v27 )
    {
      v92 = v27;
      while ( (*(_BYTE *)(v92 + 112) & 2) == 0 )
      {
        v92 = *(_QWORD *)(v92 + 408);
        if ( !v92 )
          goto LABEL_42;
      }
      if ( !v19 )
        goto LABEL_110;
    }
LABEL_42:
    if ( v134 )
    {
      v28 = *(_QWORD *)(v25 + 16);
      if ( v28 && v28 != *(_QWORD *)(v25 + 24) )
        __fastfail(0x1Eu);
      if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
      {
        if ( KiIsThreadRankNonZero(a2, (struct _KPRCB *)v25) )
          LOBYTE(v29) = 1;
        else
          LOBYTE(v29) = *(_BYTE *)(a2 + 195);
      }
      else
      {
        LOBYTE(v29) = *(_BYTE *)(a2 + 195);
      }
      **(_BYTE **)(v25 + 56) = v29;
      v30 = *(_QWORD *)(v25 + 25016);
      if ( v30 )
      {
        if ( a2 == *(_QWORD *)(v25 + 24) )
          v29 = KiVpThreadSystemWorkPriority;
        else
          v29 = (char)v29;
        *(_DWORD *)v30 = v29;
        v30 = *(_QWORD *)(v25 + 25016);
      }
      *(_QWORD *)(v25 + 16) = a2;
      if ( v30 )
        *(_BYTE *)(v30 + 24) = a2 == *(_QWORD *)(v25 + 24);
      if ( *(_BYTE *)(a2 + 388) == 1 )
        *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(a2 + 388) = 3;
      v31 = *(unsigned __int8 *)(v25 + 35);
      v32 = *(_QWORD *)(v25 + 192);
      *(_BYTE *)(v25 + 11883) = 0;
      if ( (v31 & 1) != 0 )
        __fastfail(0x21u);
      v33 = v31 + 1;
      *(_BYTE *)(v25 + 35) = v33;
      if ( v33 == 1 )
        _interlockedbittestandreset64((volatile signed __int32 *)v32, *(unsigned __int8 *)(v25 + 209));
      _interlockedbittestandreset64((volatile signed __int32 *)(v32 + 16), *(unsigned __int8 *)(v25 + 209));
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 8), ~*(_QWORD *)(v25 + 24920));
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), 0LL);
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v127 = v35[5] - 1;
          v35[5] = v127;
          if ( !v127 && !*((_BYTE *)v35 + 25) && !*((_BYTE *)v35 + 27) )
            KiPerformUnboostKick(v34);
        }
      }
      v36 = *(_DWORD *)(a2 + 588);
      v37 = *(char *)(a2 + 195);
      *(_QWORD *)(a2 + 64) = 0LL;
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      if ( v39 )
      {
        if ( v38->NestingLevel <= 1u )
        {
          v128 = v39[5] - 1;
          v39[5] = v128;
          if ( !v128 && !*((_BYTE *)v39 + 25) && !*((_BYTE *)v39 + 27) )
            KiPerformUnboostKick(v38);
        }
      }
      if ( v25 != a1 && *(_BYTE *)(v25 + 7) )
      {
        v40 = KeGetCurrentPrcb();
        LOBYTE(v39) = 2;
        ++v40->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v26, v39);
      }
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 2) != 0 && *(_QWORD *)(v25 + 25016) && *(_QWORD *)(a1 + 25016) && a1 != v25 && v37 >= 8 )
      {
        LOBYTE(v39) = 1;
        result = KiSetVpThreadSystemWork(a1, v39);
        v129 = *(_QWORD *)(v25 + 25016);
        v130 = result;
        if ( *(_BYTE *)(v129 + 26) && *(_DWORD *)(v129 + 4) < v37 )
        {
          v5 = HvlpVirtualProcessorsIdentityMapped == 0;
          v131 = *(_QWORD *)(a1 + 25016);
          *(_DWORD *)(v131 + 16) = 2;
          v132 = *(unsigned int *)(v25 + 36);
          if ( v5 )
            LODWORD(v132) = (unsigned __int8)byte_140450301[2 * (unsigned int)v132] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v132] << 6);
          *(_DWORD *)(v131 + 12) = v132;
          result = (unsigned int)v132;
          __writemsr(0x400000C2u, (unsigned int)v132);
        }
        if ( v130 )
          result = KiSetVpThreadSystemWork(a1, 0LL);
      }
      if ( (xmmword_14044C2D0 & 0x8000000) == 0 )
        return result;
LABEL_348:
      v126 = v36;
      return EtwTraceIdealProcessor(a2, 1350LL, v133, v126);
    }
    if ( v20 )
      goto LABEL_110;
    v50 = *(_KTHREAD **)(v25 + 16);
    if ( !v50 )
      break;
    KiTryToUpdateVPBackingThreadPriority(*(_QWORD *)(v25 + 16), v25);
    if ( KiGroupSchedulingEnabled )
    {
      if ( !KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v25, v50, a2, &v135) )
        goto LABEL_166;
    }
    else if ( *(_BYTE *)(a2 + 195) <= v50->Priority )
    {
      goto LABEL_110;
    }
    v50->Preempted = 1;
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(a2, (struct _KPRCB *)v25) )
        LOBYTE(v101) = 1;
      else
        LOBYTE(v101) = *(_BYTE *)(a2 + 195);
    }
    else
    {
      LOBYTE(v101) = *(_BYTE *)(a2 + 195);
    }
    **(_BYTE **)(v25 + 56) = v101;
    v102 = *(_QWORD *)(v25 + 25016);
    if ( v102 )
    {
      if ( a2 == *(_QWORD *)(v25 + 24) )
        v101 = KiVpThreadSystemWorkPriority;
      else
        v101 = (char)v101;
      *(_DWORD *)v102 = v101;
      v102 = *(_QWORD *)(v25 + 25016);
    }
    *(_QWORD *)(v25 + 16) = a2;
    if ( v102 )
      *(_BYTE *)(v102 + 24) = a2 == *(_QWORD *)(v25 + 24);
    if ( *(_BYTE *)(a2 + 388) == 1 )
      *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a2 + 388) = 3;
    v50->WaitBlockFill6[68] = 7;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v103 = *(_DWORD *)(a2 + 588);
    KiReleaseThreadLockSafe(a2);
    KiHvEnlightenedGuestPriorityKick(a1, v25, v104);
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a2, 1350LL, v133, v103);
    a2 = (__int64)v50;
  }
  v51 = *(_QWORD *)(v25 + 8);
  if ( v51 == a2 )
  {
    KiUpdateVPBackingThreadPriority(a2, v25);
  }
  else if ( (*(_DWORD *)(v51 + 120) & 0x400000) != 0 && KiTryToAcquireThreadLock(*(_QWORD *)(v25 + 8), &v144) )
  {
    if ( (*(_DWORD *)(v51 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(v51, v25);
    KiReleaseThreadLockSafe(v51);
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v25, (_KTHREAD *)v51, a2, &v135) )
      goto LABEL_86;
LABEL_166:
    v27 = v135;
  }
  else if ( *(_BYTE *)(a2 + 195) > *(_BYTE *)(v51 + 195) )
  {
LABEL_86:
    if ( *(_BYTE *)(v51 + 388) == 2 )
      *(_BYTE *)(v51 + 565) = 1;
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(a2, (struct _KPRCB *)v25) )
        LOBYTE(v52) = 1;
      else
        LOBYTE(v52) = *(_BYTE *)(a2 + 195);
    }
    else
    {
      LOBYTE(v52) = *(_BYTE *)(a2 + 195);
    }
    **(_BYTE **)(v25 + 56) = v52;
    v53 = *(_QWORD *)(v25 + 25016);
    if ( v53 )
    {
      if ( a2 == *(_QWORD *)(v25 + 24) )
        v52 = KiVpThreadSystemWorkPriority;
      else
        v52 = (char)v52;
      *(_DWORD *)v53 = v52;
      v53 = *(_QWORD *)(v25 + 25016);
    }
    *(_QWORD *)(v25 + 16) = a2;
    if ( v53 )
      *(_BYTE *)(v53 + 24) = a2 == *(_QWORD *)(v25 + 24);
    result = *(unsigned __int8 *)(a2 + 388);
    if ( (_BYTE)result == 1 )
    {
      result = (unsigned int)(*(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320]);
      *(_DWORD *)(a2 + 132) = result;
    }
    *(_BYTE *)(a2 + 388) = 3;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), 0LL);
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    if ( v55 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        result = (unsigned int)(v55[5] - 1);
        v55[5] = result;
        if ( !(_DWORD)result )
        {
          result = *((unsigned __int8 *)v55 + 25);
          if ( !(_BYTE)result && !*((_BYTE *)v55 + 27) )
            result = KiPerformUnboostKick(v54);
        }
      }
    }
    v36 = *(_DWORD *)(a2 + 588);
    v56 = *(char *)(a2 + 195);
    *(_QWORD *)(a2 + 64) = 0LL;
    v57 = KeGetCurrentPrcb();
    v58 = v57->SchedulerAssist;
    if ( v58 )
    {
      if ( v57->NestingLevel <= 1u )
      {
        result = (unsigned int)(v58[5] - 1);
        v58[5] = result;
        if ( !(_DWORD)result )
        {
          result = *((unsigned __int8 *)v58 + 25);
          if ( !(_BYTE)result && !*((_BYTE *)v58 + 27) )
            result = KiPerformUnboostKick(v57);
        }
      }
    }
    if ( a1 != v25 )
    {
      v59 = KeGetCurrentPrcb();
      LOBYTE(v58) = 2;
      ++v59->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(v26, v58);
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 2) != 0 && *(_QWORD *)(v25 + 25016) && *(_QWORD *)(a1 + 25016) && v56 >= 8 )
      {
        LOBYTE(v60) = 1;
        result = KiSetVpThreadSystemWork(a1, v60);
        v121 = *(_QWORD *)(v25 + 25016);
        v122 = result;
        if ( *(_BYTE *)(v121 + 26) && *(_DWORD *)(v121 + 4) < v56 )
        {
          v5 = HvlpVirtualProcessorsIdentityMapped == 0;
          v123 = *(_QWORD *)(a1 + 25016);
          *(_DWORD *)(v123 + 16) = 2;
          v124 = *(unsigned int *)(v25 + 36);
          if ( v5 )
            LODWORD(v124) = (unsigned __int8)byte_140450301[2 * (unsigned int)v124] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v124] << 6);
          *(_DWORD *)(v123 + 12) = v124;
          result = (unsigned int)v124;
          __writemsr(0x400000C2u, (unsigned int)v124);
        }
        if ( v122 )
          result = KiSetVpThreadSystemWork(a1, 0LL);
      }
    }
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      goto LABEL_348;
    return result;
  }
LABEL_110:
  v61 = v27;
  if ( !v21 )
  {
    v27 = v135;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
  }
  if ( !v27 )
  {
    v61 = *(_QWORD *)(a2 + 104);
    if ( v61 )
      v61 += *(unsigned int *)(v25 + 216);
  }
  v62 = *(_QWORD *)(v25 + 25016);
  if ( v62 )
    *(_BYTE *)(v62 + 24) = 0;
  v63 = 0;
  *(_BYTE *)(a2 + 388) = 1;
  v143 = 0;
  if ( !v61 || (*(_DWORD *)(a2 + 120) & 0xC00) != 0 )
  {
LABEL_118:
    v64 = *(_DWORD *)(a2 + 120);
    v65 = *(char *)(a2 + 195);
    if ( (v64 & 0x400000) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a2 + 1512) + 26LL) = 1;
      v64 = *(_DWORD *)(a2 + 120);
    }
    v66 = *(_QWORD *)(v25 + 24896);
    if ( (v64 & 0x2000) != 0 && v66 && (v66 & *(_QWORD *)(a2 + 576)) == v66 && !v63 )
    {
      v67 = KeGetCurrentPrcb();
      v68 = *(_QWORD *)(v25 + 24904);
      v69 = (_QWORD *)(v68 + 16 * (v65 + 1));
      v141[0] = 0;
      v70 = v67->SchedulerAssist;
      if ( v70 )
      {
        if ( v67->NestingLevel <= 1u )
        {
          v125 = v70[5];
          v70[5] = v125 + 1;
          if ( v125 == -1 && !*((_BYTE *)v70 + 25) && !*((_BYTE *)v70 + 27) )
            KiPerformUnboostKick(v67);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v68, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v67, 0LL);
        do
          KeYieldProcessorEx(v141);
        while ( *(_QWORD *)v68 );
        LOBYTE(v105) = 1;
        KiSetVpThreadSpinLockCount(v67, v105);
      }
      v71 = (_QWORD *)(a2 + 216);
      if ( v145 )
      {
        v106 = *v69;
        if ( *(_QWORD **)(*v69 + 8LL) != v69 )
          __fastfail(3u);
        *v71 = v106;
        *(_QWORD *)(a2 + 224) = v69;
        *(_QWORD *)(v106 + 8) = v71;
        *v69 = v71;
        _bittestandreset((signed __int32 *)(v25 + 22812), v65);
      }
      else
      {
        v72 = (_QWORD *)v69[1];
        if ( (_QWORD *)*v72 != v69 )
          __fastfail(3u);
        *v71 = v69;
        *(_QWORD *)(a2 + 224) = v72;
        *v72 = v71;
        v69[1] = v71;
      }
      *(_DWORD *)(v68 + 8) |= 1 << v65;
      *(_DWORD *)(a2 + 536) |= 0x80000000;
      ++*(_DWORD *)(v68 + 608);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2024) = result;
      *(_QWORD *)(v68 + 616) += result;
      _InterlockedAnd64((volatile signed __int64 *)v68, 0LL);
      v73 = KeGetCurrentPrcb();
      v74 = v73->SchedulerAssist;
      if ( v74 )
      {
        if ( v73->NestingLevel <= 1u )
        {
          result = (unsigned int)(v74[5] - 1);
          v74[5] = result;
          if ( !(_DWORD)result )
          {
            result = *((unsigned __int8 *)v74 + 25);
            if ( !(_BYTE)result && !*((_BYTE *)v74 + 27) )
              result = KiPerformUnboostKick(v73);
          }
        }
      }
    }
    else
    {
      v93 = (_QWORD *)(a2 + 216);
      v94 = (_QWORD *)(v25 + 16 * (v65 + 1432));
      if ( v145 )
      {
        v109 = *v94;
        if ( *(_QWORD **)(*v94 + 8LL) != v94 )
          __fastfail(3u);
        *v93 = v109;
        *(_QWORD *)(a2 + 224) = v94;
        *(_QWORD *)(v109 + 8) = v93;
        *v94 = v93;
        _bittestandset((signed __int32 *)(v25 + 22812), v65);
      }
      else
      {
        v95 = (_QWORD *)v94[1];
        if ( (_QWORD *)*v95 != v94 )
          __fastfail(3u);
        *v93 = v94;
        *(_QWORD *)(a2 + 224) = v95;
        *v95 = v93;
        v94[1] = v93;
      }
      v96 = *(_DWORD *)(v25 + 22808);
      ++*(_DWORD *)(v25 + 23476);
      *(_DWORD *)(v25 + 22808) = v96 | (1 << v65);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2024) = result;
      *(_QWORD *)(v25 + 23480) += result;
    }
  }
  else
  {
    if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v61, p_DpcData, 0, &v143) )
    {
      v63 = v143;
      goto LABEL_118;
    }
    result = KiAddThreadToScbQueue(v25, v100, a2, v145);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), 0LL);
  v75 = KeGetCurrentPrcb();
  v76 = v75->SchedulerAssist;
  if ( v76 )
  {
    if ( v75->NestingLevel <= 1u )
    {
      result = (unsigned int)(v76[5] - 1);
      v76[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)v76 + 25);
        if ( !(_BYTE)result && !*((_BYTE *)v76 + 27) )
          result = KiPerformUnboostKick(v75);
      }
    }
  }
  v77 = *(_DWORD *)(a2 + 588);
  *(_QWORD *)(a2 + 64) = 0LL;
  v78 = KeGetCurrentPrcb();
  v79 = v78->SchedulerAssist;
  if ( v79 )
  {
    if ( v78->NestingLevel <= 1u )
    {
      result = (unsigned int)(v79[5] - 1);
      v79[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)v79 + 25);
        if ( !(_BYTE)result && !*((_BYTE *)v79 + 27) )
          result = KiPerformUnboostKick(v78);
      }
    }
  }
  if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
  {
    v126 = v77;
    return EtwTraceIdealProcessor(a2, 1350LL, v133, v126);
  }
  return result;
}
