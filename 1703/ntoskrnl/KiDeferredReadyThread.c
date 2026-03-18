/*
 * XREFs of KiDeferredReadyThread @ 0x1400E05F0
 * Callers:
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiReadyThread @ 0x1400E2E20 (KiReadyThread.c)
 *     KiSearchForNewThread @ 0x1400EB7B0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x140113FBC (KiFastReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x140120BE4 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x140027714 (KiScheduleNextForegroundBoost.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140042818 (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeNewPriority @ 0x140042850 (KiComputeNewPriority.c)
 *     KiChooseTargetProcessor @ 0x1400E11B0 (KiChooseTargetProcessor.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400E2590 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     KiShouldPreemptionBeDeferred @ 0x14011387C (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x140113B68 (KiPrcbInGroupAffinity.c)
 *     KiAddThreadToScbQueue @ 0x140113C3C (KiAddThreadToScbQueue.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KiHeteroChooseTargetProcessor @ 0x140203FB8 (KiHeteroChooseTargetProcessor.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 */

unsigned __int64 __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2, __int64 p_AbPropagateBoostsList, __int64 a4)
{
  char v5; // r15
  unsigned __int64 v6; // r14
  char v7; // r12
  char v8; // di
  unsigned int v9; // eax
  char v10; // dl
  int v11; // r10d
  int v12; // esi
  bool v13; // di
  unsigned int v14; // r13d
  unsigned __int8 v15; // r12
  unsigned __int16 v16; // dx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 result; // rax
  unsigned int v26; // r14d
  struct _KPRCB *v27; // rax
  unsigned __int8 v28; // dl
  unsigned __int8 v29; // al
  unsigned int v30; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  char v32; // si
  char v33; // al
  unsigned __int64 v34; // rdx
  __int64 v35; // r14
  _BYTE *v36; // r14
  struct _KPRCB *v37; // rax
  char v38; // dl
  char v39; // cl
  char v40; // si
  struct _KPRCB *v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 v43; // r10
  char v44; // cl
  __int64 v45; // rsi
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // r9
  char v52; // cl
  struct _KPRCB *v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // r15
  _QWORD *v58; // r14
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // r10
  _QWORD *v62; // rdx
  char v63; // cl
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // ecx
  _QWORD *v67; // rdx
  _QWORD *v68; // rdx
  __int64 v69; // rsi
  unsigned __int64 v70; // rcx
  __int64 v71; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v72; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 v73; // [rsp+40h] [rbp-40h]
  int v74; // [rsp+48h] [rbp-38h] BYREF
  int v75; // [rsp+4Ch] [rbp-34h] BYREF
  int v76; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v77[9]; // [rsp+54h] [rbp-2Ch] BYREF
  char v79; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v80; // [rsp+D0h] [rbp+50h]
  BOOL v81; // [rsp+D8h] [rbp+58h] BYREF

  v5 = 1;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a2 + 72);
    v80 = 0;
    if ( *(_BYTE *)(a2 + 566) == 1 )
      v7 = *(_BYTE *)(a2 + 567);
    else
      v7 = 0;
    v74 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v74);
      while ( *(_QWORD *)(a2 + 64) );
    }
    if ( !*(_BYTE *)(a2 + 566) )
    {
      if ( v6 < *(_QWORD *)(a2 + 32) )
      {
        v80 = *(unsigned __int8 *)(a2 + 565);
        goto LABEL_26;
      }
      v33 = KiComputeNewPriority(a2, 1);
      KiUpdateThreadPriority(0LL, a2, (unsigned int)v33, 0LL);
      KiTryScheduleNextForegroundBoost(a2);
      goto LABEL_60;
    }
    if ( *(char *)(a2 + 195) >= 16 )
    {
      v13 = 1;
    }
    else
    {
      v8 = 0;
      v9 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      if ( v6 >= *(_QWORD *)(a2 + 32) )
      {
        v8 = 4;
        if ( v9 < 2 )
          v8 = 5;
      }
      if ( (v8 & 4) != 0 || *(char *)(a2 + 563) >= 14 || v9 >= 2 && !*(_BYTE *)(a2 + 564) )
      {
        p_AbPropagateBoostsList = *(unsigned __int8 *)(a2 + 195);
        v8 |= 8u;
        if ( (char)p_AbPropagateBoostsList < 16 )
        {
          v28 = *(_BYTE *)(a2 + 564);
          a4 = v28;
          LOBYTE(a4) = v28 & 0xF;
          v29 = -1 - (v28 >> 4) - (v28 & 0xF) + p_AbPropagateBoostsList;
          if ( v29 < *(_BYTE *)(a2 + 563) )
            v29 = *(_BYTE *)(a2 + 563);
          p_AbPropagateBoostsList = v29;
          if ( v28 )
          {
            if ( (_BYTE)a4 )
              *(_DWORD *)(a2 + 1424) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(a2 + 564) = 0;
          }
          v30 = *(_DWORD *)(a2 + 1408);
          if ( v30 )
          {
            _BitScanReverse((unsigned int *)&v66, v30);
            v77[1] = v66;
            if ( (char)p_AbPropagateBoostsList < v66 )
              p_AbPropagateBoostsList = (unsigned __int8)v66;
          }
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = p_AbPropagateBoostsList;
        if ( (char)p_AbPropagateBoostsList > *(char *)(a2 + 195) )
        {
          if ( *(_BYTE *)(a2 + 793) )
          {
            v67 = (_QWORD *)(a2 + 1376);
            if ( *(_QWORD *)(a2 + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = (__int64)&CurrentPrcb->AbPropagateBoostsList;
              if ( CurrentPrcb != (struct _KPRCB *)-26040LL )
              {
                *v67 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v67;
                _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                KiAbQueueAutoBoostDpc(CurrentPrcb);
              }
            }
          }
        }
        *(_BYTE *)(a2 + 195) = v32;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 544) + 1474LL) == 2 )
        v8 |= 2u;
      if ( (v8 & 1) != 0
        || (*(_DWORD *)(a2 + 120) & 2) != 0
        || (v10 = *(_BYTE *)(a2 + 195), v10 <= 0)
        || (p_AbPropagateBoostsList = *(unsigned __int8 *)(a2 + 564), (_BYTE)p_AbPropagateBoostsList)
        && ((p_AbPropagateBoostsList & 0xF0) != 0 || (v8 & 2) == 0) )
      {
        if ( (v8 & 6) == 6 && (*(_DWORD *)(a2 + 120) & 2) == 0 && *(char *)(a2 + 195) > 0 )
          KiScheduleNextForegroundBoost(a2);
      }
      else
      {
        v11 = *(char *)(a2 + 563);
        a4 = (unsigned int)(v11 + v7);
        v12 = v11 + v7;
        if ( (v8 & 2) != 0 )
          v12 += (char)PsPrioritySeparation;
        if ( v12 >= 16 )
          v12 = 15;
        if ( v12 > v10 )
        {
          v52 = 0;
          if ( v12 > (int)a4 )
            v52 = v12 - v11 - v7;
          *(_BYTE *)(a2 + 564) = p_AbPropagateBoostsList ^ (v52 ^ p_AbPropagateBoostsList) & 0xF;
          v53 = KeGetCurrentPrcb();
          if ( (char)v12 > v10 )
          {
            if ( *(_BYTE *)(a2 + 793) )
            {
              v62 = (_QWORD *)(a2 + 1376);
              if ( *(_QWORD *)(a2 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&v53->AbPropagateBoostsList;
                if ( v53 != (struct _KPRCB *)-26040LL )
                {
                  *v62 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v62;
                  _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                  KiAbQueueAutoBoostDpc(v53);
                }
              }
            }
          }
          *(_BYTE *)(a2 + 195) = v12;
        }
      }
      v13 = (v8 & 8) != 0;
    }
    if ( *(_BYTE *)(a2 + 566) != 2 )
      goto LABEL_25;
    v38 = *(_BYTE *)(a2 + 195);
    if ( v38 > 0 )
    {
      v39 = *(_BYTE *)(a2 + 567);
      if ( v38 < v39 && v38 < 13 && (*(_DWORD *)(a2 + 120) & 2) == 0 )
      {
        if ( v39 < 13 )
          p_AbPropagateBoostsList = (unsigned int)v39;
        else
          p_AbPropagateBoostsList = 13LL;
        v40 = p_AbPropagateBoostsList;
        *(_BYTE *)(a2 + 564) += 16 * (p_AbPropagateBoostsList - v38);
        v41 = KeGetCurrentPrcb();
        if ( (char)p_AbPropagateBoostsList > v38 )
        {
          if ( *(_BYTE *)(a2 + 793) )
          {
            v68 = (_QWORD *)(a2 + 1376);
            if ( *(_QWORD *)(a2 + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = (__int64)&v41->AbPropagateBoostsList;
              if ( v41 != (struct _KPRCB *)-26040LL )
              {
                *v68 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v68;
                _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                KiAbQueueAutoBoostDpc(v41);
              }
            }
          }
        }
        v42 = *(_QWORD *)(a2 + 32);
        *(_BYTE *)(a2 + 195) = v40;
        if ( v6 > v42 )
        {
          *(_QWORD *)(a2 + 32) = v6 + (unsigned int)KiLockQuantumTarget;
        }
        else if ( v42 - v6 < (unsigned int)KiLockQuantumTarget )
        {
          *(_QWORD *)(a2 + 32) = v6 + (unsigned int)KiLockQuantumTarget;
        }
LABEL_25:
        if ( !v13 )
          goto LABEL_26;
LABEL_60:
        v34 = v6 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 4u);
        *(_QWORD *)(a2 + 32) = v34;
        goto LABEL_26;
      }
    }
    if ( v13 )
      goto LABEL_60;
    v55 = *(_QWORD *)(a2 + 32);
    if ( v6 > v55 )
    {
      v56 = KiLockQuantumTarget;
LABEL_127:
      *(_QWORD *)(a2 + 32) = v6 + v56;
      goto LABEL_26;
    }
    v56 = KiLockQuantumTarget;
    if ( v55 - v6 < (unsigned int)KiLockQuantumTarget )
      goto LABEL_127;
LABEL_26:
    v14 = *(_DWORD *)(a2 + 588);
    *(_WORD *)(a2 + 565) = 0;
    v15 = _bittestandreset((signed __int32 *)(a2 + 116), 1u);
    if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 )
      KiComputeThreadAffinity(a2);
    v16 = *(_WORD *)(a2 + 584);
    v17 = *(_QWORD *)(a2 + 576);
    v73 = v16;
    v72 = v17;
    if ( !KiForceIdleDisabled )
    {
      if ( KiForceIdleState == 4 )
      {
        v69 = *(unsigned int *)(a2 + 536);
        LODWORD(v69) = v69 & 0x7FFFFFFF;
        v18 = KiProcessorBlock[v69];
        if ( !(unsigned int)KiPrcbInGroupAffinity(v18, &v72) )
        {
          _BitScanReverse64(&v70, v72);
          v77[3] = v70;
          v69 = *(unsigned int *)(p_AbPropagateBoostsList + 4LL * ((unsigned int)v70 + (v73 << 6)) + 4094384);
          v18 = *(_QWORD *)(p_AbPropagateBoostsList + 8 * v69 + 4084032);
        }
        v76 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v76);
          while ( *(_QWORD *)(v18 + 48) );
        }
        *(_DWORD *)(a2 + 536) = v69;
        v20 = *(_QWORD *)(a2 + 104);
        if ( v20 )
          v20 += *(unsigned int *)(v18 + 216);
        v71 = v20;
        goto LABEL_98;
      }
      v16 = v73;
      v17 = v72;
    }
    if ( ((v17 - 1) & v17) != 0 )
    {
      if ( KeHeteroSystem != 1 && *(_BYTE *)(a2 + 125) )
        v18 = KiHeteroChooseTargetProcessor(a1, a2, &v72, &v81);
      else
        v18 = KiChooseTargetProcessor(a1, a2, &v72, &v81);
    }
    else
    {
      _BitScanReverse64(&v17, v17);
      v77[2] = v17;
      v75 = 0;
      v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v16 + (unsigned int)v17]];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v75);
        while ( *(_QWORD *)(v18 + 48) );
      }
      v81 = (*(_BYTE *)(v18 + 35) & 1) == 0;
    }
    v19 = *(_DWORD *)(v18 + 36);
    *(_DWORD *)(a2 + 536) = v19;
    v20 = *(_QWORD *)(a2 + 104);
    if ( v20 )
      v20 += *(unsigned int *)(v18 + 216);
    v71 = v20;
    if ( v20 )
    {
      v54 = v20;
      while ( (*(_BYTE *)(v54 + 112) & 2) == 0 )
      {
        v54 = *(_QWORD *)(v54 + 408);
        if ( !v54 )
          goto LABEL_37;
      }
      if ( !(unsigned __int8)KiShouldPreemptionBeDeferred(a2) )
        goto LABEL_98;
    }
LABEL_37:
    if ( v81 )
    {
      v21 = *(_QWORD *)(v18 + 16);
      if ( v21 && v21 != *(_QWORD *)(v18 + 24) )
        __fastfail(0x1Eu);
      if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
      {
        if ( !(unsigned __int8)KiIsThreadRankNonZero(a2, v18) )
          v5 = *(_BYTE *)(a2 + 195);
      }
      else
      {
        v5 = *(_BYTE *)(a2 + 195);
      }
      **(_BYTE **)(v18 + 56) = v5;
      *(_QWORD *)(v18 + 16) = a2;
      if ( *(_BYTE *)(a2 + 388) == 1 )
        *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(a2 + 388) = 3;
      v22 = *(unsigned __int8 *)(v18 + 35);
      v23 = *(_QWORD *)(v18 + 192);
      *(_BYTE *)(v18 + 11883) = 0;
      if ( (v22 & 1) != 0 )
        __fastfail(0x21u);
      v24 = v22 + 1;
      *(_BYTE *)(v18 + 35) = v24;
      if ( v24 == 1 )
        _interlockedbittestandreset64((volatile signed __int32 *)v23, *(unsigned __int8 *)(v18 + 209));
      _interlockedbittestandreset64((volatile signed __int32 *)(v23 + 16), *(unsigned __int8 *)(v18 + 209));
      result = ~*(_QWORD *)(v18 + 25176);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 8), result);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
      v26 = *(_DWORD *)(a2 + 588);
      *(_QWORD *)(a2 + 64) = 0LL;
      if ( v18 != a1 )
      {
        if ( *(_BYTE *)(v18 + 7) )
        {
          v27 = KeGetCurrentPrcb();
          LOBYTE(v23) = 2;
          ++v27->SynchCounters.IpiSendSoftwareInterruptCount;
          result = HalSendSoftwareInterrupt(v19, v23, p_AbPropagateBoostsList, a4);
        }
      }
      if ( (xmmword_1403E4010 & 0x8000000) == 0 )
        return result;
LABEL_212:
      v51 = v26;
      return EtwTraceIdealProcessor(a2, 1350LL, v14, v51);
    }
    v35 = *(_QWORD *)(v18 + 16);
    if ( !v35 )
      break;
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v18, *(_QWORD *)(v18 + 16), a2, &v71) )
        goto LABEL_97;
    }
    else if ( *(_BYTE *)(a2 + 195) <= *(_BYTE *)(v35 + 195) )
    {
      goto LABEL_98;
    }
    *(_BYTE *)(v35 + 565) = 1;
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(a2, v18) )
        v63 = 1;
      else
        v63 = *(_BYTE *)(a2 + 195);
    }
    else
    {
      v63 = *(_BYTE *)(a2 + 195);
    }
    **(_BYTE **)(v18 + 56) = v63;
    *(_QWORD *)(v18 + 16) = a2;
    if ( *(_BYTE *)(a2 + 388) == 1 )
      *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a2 + 388) = 3;
    *(_BYTE *)(v35 + 388) = 7;
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    a4 = *(unsigned int *)(a2 + 588);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( (xmmword_1403E4010 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a2, 1350LL, v14, a4);
    _interlockedbittestandreset((volatile signed __int32 *)(v35 + 120), 0xBu);
    a2 = v35;
  }
  v36 = *(_BYTE **)(v18 + 8);
  if ( KiGroupSchedulingEnabled )
  {
    if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v18, *(_QWORD *)(v18 + 8), a2, &v71) )
      goto LABEL_66;
LABEL_97:
    v20 = v71;
LABEL_98:
    v43 = v20;
    if ( !v15 )
    {
      v20 = v71;
      *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    }
    if ( !v20 )
    {
      v43 = *(_QWORD *)(a2 + 104);
      if ( v43 )
        v43 += *(unsigned int *)(v18 + 216);
    }
    v44 = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v79 = 0;
    if ( v43 && (*(_DWORD *)(a2 + 120) & 0x600) == 0 )
    {
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v43, p_AbPropagateBoostsList, 0, (__int64)&v79) )
      {
        result = KiAddThreadToScbQueue(v18, v61, a2, v80);
        goto LABEL_109;
      }
      v44 = v79;
    }
    v45 = *(char *)(a2 + 195);
    v46 = *(_QWORD *)(v18 + 25152);
    if ( (*(_DWORD *)(a2 + 120) & 0x1000) != 0 && v46 && (v46 & *(_QWORD *)(a2 + 576)) == v46 && !v44 )
    {
      v57 = *(_QWORD *)(v18 + 25160);
      v58 = (_QWORD *)(v57 + 16 * (v45 + 1));
      v77[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v57, 0LL) )
      {
        do
          KeYieldProcessorEx(v77);
        while ( *(_QWORD *)v57 );
      }
      v59 = (_QWORD *)(a2 + 216);
      if ( v80 )
      {
        v64 = *v58;
        if ( *(_QWORD **)(*v58 + 8LL) != v58 )
          __fastfail(3u);
        *v59 = v64;
        *(_QWORD *)(a2 + 224) = v58;
        *(_QWORD *)(v64 + 8) = v59;
        *v58 = v59;
        _bittestandreset((signed __int32 *)(v18 + 22812), v45);
      }
      else
      {
        v60 = (_QWORD *)v58[1];
        if ( (_QWORD *)*v60 != v58 )
          __fastfail(3u);
        *v59 = v58;
        *(_QWORD *)(a2 + 224) = v60;
        *v60 = v59;
        v58[1] = v59;
      }
      *(_DWORD *)(v57 + 8) |= 1 << v45;
      *(_DWORD *)(a2 + 536) |= 0x80000000;
      ++*(_DWORD *)(v57 + 608);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2016) = result;
      *(_QWORD *)(v57 + 616) += result;
      _InterlockedAnd64((volatile signed __int64 *)v57, 0LL);
    }
    else
    {
      v47 = (_QWORD *)(a2 + 216);
      v48 = (_QWORD *)(v18 + 16 * (v45 + 1432));
      if ( v80 )
      {
        v65 = *v48;
        if ( *(_QWORD **)(*v48 + 8LL) != v48 )
          __fastfail(3u);
        *v47 = v65;
        *(_QWORD *)(a2 + 224) = v48;
        *(_QWORD *)(v65 + 8) = v47;
        *v48 = v47;
        _bittestandset((signed __int32 *)(v18 + 22812), v45);
      }
      else
      {
        v49 = (_QWORD *)v48[1];
        if ( (_QWORD *)*v49 != v48 )
          __fastfail(3u);
        *v47 = v48;
        *(_QWORD *)(a2 + 224) = v49;
        *v49 = v47;
        v48[1] = v47;
      }
      v50 = *(_DWORD *)(v18 + 22808);
      ++*(_DWORD *)(v18 + 23480);
      *(_DWORD *)(v18 + 22808) = v50 | (1 << v45);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2016) = result;
      *(_QWORD *)(v18 + 23552) += result;
    }
LABEL_109:
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    v51 = *(unsigned int *)(a2 + 588);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( (xmmword_1403E4010 & 0x8000000) == 0 )
      return result;
    return EtwTraceIdealProcessor(a2, 1350LL, v14, v51);
  }
  if ( *(_BYTE *)(a2 + 195) <= v36[195] )
    goto LABEL_98;
LABEL_66:
  if ( v36[388] == 2 )
    v36[565] = 1;
  if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
  {
    if ( !(unsigned __int8)KiIsThreadRankNonZero(a2, v18) )
      v5 = *(_BYTE *)(a2 + 195);
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 195);
  }
  **(_BYTE **)(v18 + 56) = v5;
  *(_QWORD *)(v18 + 16) = a2;
  result = *(unsigned __int8 *)(a2 + 388);
  if ( (_BYTE)result == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320]);
    *(_DWORD *)(a2 + 132) = result;
  }
  *(_BYTE *)(a2 + 388) = 3;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
  v26 = *(_DWORD *)(a2 + 588);
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( a1 != v18 )
  {
    v37 = KeGetCurrentPrcb();
    LOBYTE(v20) = 2;
    ++v37->SynchCounters.IpiSendSoftwareInterruptCount;
    result = HalSendSoftwareInterrupt(v19, v20, p_AbPropagateBoostsList, a4);
  }
  if ( (xmmword_1403E4010 & 0x8000000) != 0 )
    goto LABEL_212;
  return result;
}
