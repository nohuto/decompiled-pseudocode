/*
 * XREFs of KiDeferredReadyThread @ 0x140072C60
 * Callers:
 *     KiSearchForNewThread @ 0x14006EA10 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14006EE10 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiReadyThread @ 0x1400932D0 (KiReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiFastReadyThread @ 0x1400A8DC4 (KiFastReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400D2460 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiChooseTargetProcessor @ 0x140073900 (KiChooseTargetProcessor.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400763C0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiComputeNewPriority @ 0x140090D60 (KiComputeNewPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140090DE8 (KiTryScheduleNextForegroundBoost.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x1400D2AE0 (KiAddThreadToScbQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x14011D4F8 (KiScheduleNextForegroundBoost.c)
 *     KiHeteroChooseTargetProcessor @ 0x14020A5B8 (KiHeteroChooseTargetProcessor.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 */

unsigned __int64 __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2, __int64 p_AbPropagateBoostsList)
{
  char v4; // r13
  unsigned __int64 v5; // r14
  char v6; // r15
  char v7; // r11
  unsigned __int8 v8; // di
  unsigned int v9; // eax
  int v10; // edx
  char v11; // r9
  int v12; // r10d
  int v13; // esi
  char v14; // di
  unsigned int v15; // r12d
  bool v16; // si
  unsigned __int8 v17; // r15
  unsigned __int16 v18; // dx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // cl
  _DWORD *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 result; // rax
  unsigned int v31; // esi
  struct _KPRCB *v32; // rax
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // al
  unsigned int v35; // eax
  char v36; // si
  struct _KPRCB *CurrentPrcb; // rcx
  char v38; // al
  char v39; // r11
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rsi
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  int v51; // eax
  __int64 v52; // r9
  char v53; // cl
  _DWORD *v54; // rdx
  __int64 v55; // rcx
  bool v56; // zf
  struct _KPRCB *v57; // rax
  char v58; // cl
  struct _KPRCB *v59; // rcx
  char v60; // dl
  char v61; // cl
  char v62; // si
  struct _KPRCB *v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  __int64 v66; // r15
  _QWORD *v67; // r14
  _QWORD *v68; // rax
  _QWORD *v69; // rcx
  char v70; // cl
  _DWORD *v71; // rdx
  __int64 v72; // rcx
  bool v73; // zf
  __int64 v74; // r9
  _QWORD *v75; // rdx
  int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // rdx
  int v80; // ecx
  int v81; // eax
  _QWORD *v82; // rdx
  int v83; // ecx
  __int64 v84; // rsi
  unsigned __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // ecx
  __int64 v88; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v89; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 v90; // [rsp+40h] [rbp-40h]
  int v91; // [rsp+48h] [rbp-38h] BYREF
  int v92; // [rsp+4Ch] [rbp-34h] BYREF
  int v93; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v94[9]; // [rsp+54h] [rbp-2Ch] BYREF
  char v96; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v97; // [rsp+D0h] [rbp+50h]
  BOOL v98; // [rsp+D8h] [rbp+58h] BYREF

  v4 = 1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a2 + 72);
    v97 = 0;
    if ( *(_BYTE *)(a2 + 566) == 1 )
      v6 = *(_BYTE *)(a2 + 567);
    else
      v6 = 0;
    v91 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v91);
      while ( *(_QWORD *)(a2 + 64) );
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) == 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v80 = **(_DWORD **)(a2 + 1512);
    p_AbPropagateBoostsList = (unsigned int)*(char *)(a2 + 563);
    if ( v80 >= (int)p_AbPropagateBoostsList )
    {
      p_AbPropagateBoostsList = (unsigned int)v80;
      if ( v80 >= 16 )
        p_AbPropagateBoostsList = 15LL;
    }
    v81 = *(char *)(a2 + 195);
    if ( (*(_BYTE *)(a2 + 564) & 0xF0) != 0 )
    {
      if ( (int)p_AbPropagateBoostsList > v81 )
        goto LABEL_220;
    }
    else if ( (_DWORD)p_AbPropagateBoostsList != v81 )
    {
LABEL_220:
      KiUpdateThreadPriority(0LL, a2, p_AbPropagateBoostsList, 0LL);
    }
    v7 = 1;
LABEL_8:
    if ( !*(_BYTE *)(a2 + 566) )
    {
      if ( v5 < *(_QWORD *)(a2 + 32) )
      {
        v97 = *(unsigned __int8 *)(a2 + 565);
        goto LABEL_27;
      }
      v38 = KiComputeNewPriority(a2, 1LL);
      if ( !v39 )
        KiUpdateThreadPriority(0LL, a2, (unsigned int)v38, 0LL);
      KiTryScheduleNextForegroundBoost(a2);
      goto LABEL_73;
    }
    if ( *(char *)(a2 + 195) >= 16 )
    {
      v14 = 1;
    }
    else
    {
      v8 = 0;
      v9 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      if ( v5 >= *(_QWORD *)(a2 + 32) )
      {
        v8 = 4;
        if ( v9 < 2 )
          v8 = 5;
      }
      if ( v8 >= 4u || *(char *)(a2 + 563) >= 14 || v9 >= 2 && !*(_BYTE *)(a2 + 564) )
      {
        LODWORD(p_AbPropagateBoostsList) = *(unsigned __int8 *)(a2 + 195);
        v8 |= 8u;
        if ( (char)p_AbPropagateBoostsList < 16 )
        {
          v33 = *(_BYTE *)(a2 + 564);
          v34 = -1 - (v33 >> 4) - (v33 & 0xF) + p_AbPropagateBoostsList;
          if ( v34 < *(_BYTE *)(a2 + 563) )
            v34 = *(_BYTE *)(a2 + 563);
          LODWORD(p_AbPropagateBoostsList) = v34;
          if ( v33 )
          {
            if ( (v33 & 0xF) != 0 )
              *(_DWORD *)(a2 + 1424) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(a2 + 564) = 0;
          }
          v35 = *(_DWORD *)(a2 + 1408);
          if ( v35 )
          {
            _BitScanReverse((unsigned int *)&v76, v35);
            v94[1] = v76;
            if ( (char)p_AbPropagateBoostsList < v76 )
              LODWORD(p_AbPropagateBoostsList) = (unsigned __int8)v76;
          }
        }
        v36 = p_AbPropagateBoostsList;
        if ( !v7 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (char)p_AbPropagateBoostsList > *(char *)(a2 + 195) )
          {
            if ( *(_BYTE *)(a2 + 793) )
            {
              v79 = (_QWORD *)(a2 + 1376);
              if ( *(_QWORD *)(a2 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&CurrentPrcb->AbPropagateBoostsList;
                if ( CurrentPrcb != (struct _KPRCB *)-25720LL )
                {
                  *v79 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v79;
                  _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                  KiAbQueueAutoBoostDpc(CurrentPrcb);
                }
              }
            }
          }
          *(_BYTE *)(a2 + 195) = v36;
        }
      }
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 544) + 1474LL) == 2 )
        v8 |= 2u;
      v10 = *(_DWORD *)(a2 + 120);
      if ( ((unsigned __int8)~v8 & ((v10 & 8) == 0)) != 0
        && (LODWORD(p_AbPropagateBoostsList) = *(unsigned __int8 *)(a2 + 195), (char)p_AbPropagateBoostsList > 0)
        && ((v11 = *(_BYTE *)(a2 + 564)) == 0 || (v11 & 0xF0) == 0 && (v8 & 2) != 0) )
      {
        v12 = *(char *)(a2 + 563);
        v13 = v12 + v6;
        if ( (v8 & 2) != 0 )
          v13 += (char)PsPrioritySeparation;
        if ( v13 >= 16 )
          v13 = 15;
        if ( v13 > (char)p_AbPropagateBoostsList )
        {
          v58 = 0;
          if ( v13 > v12 + v6 )
            v58 = v13 - v12 - v6;
          *(_BYTE *)(a2 + 564) = v11 ^ (v58 ^ v11) & 0xF;
          v59 = KeGetCurrentPrcb();
          if ( (char)v13 > (char)p_AbPropagateBoostsList )
          {
            if ( *(_BYTE *)(a2 + 793) )
            {
              v75 = (_QWORD *)(a2 + 1376);
              if ( *(_QWORD *)(a2 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&v59->AbPropagateBoostsList;
                if ( v59 != (struct _KPRCB *)-25720LL )
                {
                  *v75 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v75;
                  _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                  KiAbQueueAutoBoostDpc(v59);
                }
              }
            }
          }
          *(_BYTE *)(a2 + 195) = v13;
        }
      }
      else if ( (v8 & 6) == 6 && (v10 & 8) == 0 && *(char *)(a2 + 195) > 0 )
      {
        KiScheduleNextForegroundBoost(a2);
      }
      v14 = v8 >> 3;
    }
    if ( *(_BYTE *)(a2 + 566) != 2 )
      goto LABEL_26;
    v60 = *(_BYTE *)(a2 + 195);
    if ( v60 > 0 )
    {
      v61 = *(_BYTE *)(a2 + 567);
      if ( v60 < v61 && v60 < 13 && (*(_DWORD *)(a2 + 120) & 8) == 0 )
      {
        if ( v61 < 13 )
          LODWORD(p_AbPropagateBoostsList) = v61;
        else
          LODWORD(p_AbPropagateBoostsList) = 13;
        v62 = p_AbPropagateBoostsList;
        *(_BYTE *)(a2 + 564) += 16 * (p_AbPropagateBoostsList - v60);
        v63 = KeGetCurrentPrcb();
        if ( (char)p_AbPropagateBoostsList > v60 )
        {
          if ( *(_BYTE *)(a2 + 793) )
          {
            v82 = (_QWORD *)(a2 + 1376);
            if ( *(_QWORD *)(a2 + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = (__int64)&v63->AbPropagateBoostsList;
              if ( v63 != (struct _KPRCB *)-25720LL )
              {
                *v82 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v82;
                _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
                KiAbQueueAutoBoostDpc(v63);
              }
            }
          }
        }
        v64 = *(_QWORD *)(a2 + 32);
        *(_BYTE *)(a2 + 195) = v62;
        if ( v5 > v64 || v64 - v5 < (unsigned int)KiLockQuantumTarget )
          *(_QWORD *)(a2 + 32) = v5 + (unsigned int)KiLockQuantumTarget;
LABEL_26:
        if ( !v14 )
          goto LABEL_27;
LABEL_73:
        v40 = v5 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a2 + 651);
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v40;
        goto LABEL_27;
      }
    }
    if ( v14 )
      goto LABEL_73;
    v65 = *(_QWORD *)(a2 + 32);
    if ( v5 > v65 || v65 - v5 < (unsigned int)KiLockQuantumTarget )
      *(_QWORD *)(a2 + 32) = v5 + (unsigned int)KiLockQuantumTarget;
LABEL_27:
    v56 = *(_DWORD *)(a2 + 484) == 0;
    v15 = *(_DWORD *)(a2 + 588);
    *(_WORD *)(a2 + 565) = 0;
    v16 = !v56 || *(_BYTE *)(a2 + 390) == 1;
    v17 = _bittestandreset((signed __int32 *)(a2 + 116), 1u);
    if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 )
      KiComputeThreadAffinity(a2);
    v18 = *(_WORD *)(a2 + 584);
    v19 = *(_QWORD *)(a2 + 576);
    v90 = v18;
    v89 = v19;
    if ( !KiForceIdleDisabled )
    {
      if ( KiForceIdleState == 4 )
      {
        v84 = *(unsigned int *)(a2 + 536);
        LODWORD(v84) = v84 & 0x7FFFFFFF;
        v20 = KiProcessorBlock[v84];
        if ( !(unsigned int)KiPrcbInGroupAffinity(v20, &v89) )
        {
          _BitScanReverse64(&v85, v89);
          v94[3] = v85;
          v84 = *(unsigned int *)(p_AbPropagateBoostsList + 4LL * ((unsigned int)v85 + (v90 << 6)) + 4222800);
          v20 = *(_QWORD *)(p_AbPropagateBoostsList + 8 * v84 + 4204864);
        }
        v93 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v93);
          while ( *(_QWORD *)(v20 + 48) );
        }
        *(_DWORD *)(a2 + 536) = v84;
        v86 = *(_QWORD *)(a2 + 104);
        if ( v86 )
          v86 += *(unsigned int *)(v20 + 216);
        v88 = v86;
        goto LABEL_80;
      }
      v18 = v90;
      v19 = v89;
    }
    if ( ((v19 - 1) & v19) != 0 )
    {
      if ( *(_BYTE *)(a2 + 125) )
        v20 = KiHeteroChooseTargetProcessor(a1, a2, &v89, &v98);
      else
        v20 = KiChooseTargetProcessor(a1, a2, (unsigned int)&v89, (unsigned int)&v98, 0);
    }
    else
    {
      _BitScanReverse64(&v19, v19);
      v94[2] = v19;
      v92 = 0;
      v20 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned int)v19]];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v92);
        while ( *(_QWORD *)(v20 + 48) );
      }
      v98 = (*(_BYTE *)(v20 + 35) & 1) == 0;
    }
    v21 = *(_DWORD *)(v20 + 36);
    *(_DWORD *)(a2 + 536) = v21;
    v22 = *(_QWORD *)(a2 + 104);
    if ( v22 )
      v22 += *(unsigned int *)(v20 + 216);
    v88 = v22;
    if ( v22 )
    {
      while ( (*(_BYTE *)(v22 + 112) & 2) == 0 )
      {
        v22 = *(_QWORD *)(v22 + 408);
        if ( !v22 )
          goto LABEL_38;
      }
      if ( !v16 )
        goto LABEL_80;
    }
LABEL_38:
    if ( v98 )
    {
      v23 = *(_QWORD *)(v20 + 16);
      if ( v23 && v23 != *(_QWORD *)(v20 + 24) )
        __fastfail(0x1Eu);
      if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
      {
        if ( (unsigned __int8)KiIsThreadRankNonZero(a2, v20) )
          v24 = 1;
        else
          v24 = *(_BYTE *)(a2 + 195);
      }
      else
      {
        v24 = *(_BYTE *)(a2 + 195);
      }
      **(_BYTE **)(v20 + 56) = v24;
      v25 = *(_DWORD **)(v20 + 25016);
      if ( v25 )
        *v25 = v24;
      *(_QWORD *)(v20 + 16) = a2;
      if ( a2 != *(_QWORD *)(v20 + 24) )
        v4 = 0;
      v26 = *(_QWORD *)(v20 + 25016);
      if ( v26 )
        *(_BYTE *)(v26 + 8) = v4;
      if ( *(_BYTE *)(a2 + 388) == 1 )
        *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(a2 + 388) = 3;
      v27 = *(unsigned __int8 *)(v20 + 35);
      v28 = *(_QWORD *)(v20 + 192);
      *(_BYTE *)(v20 + 11883) = 0;
      if ( (v27 & 1) != 0 )
        __fastfail(0x21u);
      v29 = v27 + 1;
      *(_BYTE *)(v20 + 35) = v29;
      if ( v29 == 1 )
        _interlockedbittestandreset64((volatile signed __int32 *)v28, *(unsigned __int8 *)(v20 + 209));
      _interlockedbittestandreset64((volatile signed __int32 *)(v28 + 16), *(unsigned __int8 *)(v20 + 209));
      result = ~*(_QWORD *)(v20 + 24920);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 8), result);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
      v31 = *(_DWORD *)(a2 + 588);
      *(_QWORD *)(a2 + 64) = 0LL;
      if ( v20 != a1 )
      {
        if ( *(_BYTE *)(v20 + 7) )
        {
          v32 = KeGetCurrentPrcb();
          LOBYTE(v25) = 2;
          ++v32->SynchCounters.IpiSendSoftwareInterruptCount;
          result = HalSendSoftwareInterrupt(v21, v25);
        }
      }
      if ( (xmmword_140401150 & 0x8000000) == 0 )
        return result;
LABEL_252:
      v52 = v31;
      return EtwTraceIdealProcessor(a2, 1350LL, v15, v52);
    }
    v41 = *(_QWORD *)(v20 + 16);
    if ( !v41 )
      break;
    if ( (*(_DWORD *)(v41 + 120) & 0x400000) != 0 )
    {
      v83 = **(_DWORD **)(v41 + 1512);
      p_AbPropagateBoostsList = (unsigned int)*(char *)(v41 + 563);
      if ( v83 >= (int)p_AbPropagateBoostsList )
      {
        p_AbPropagateBoostsList = (unsigned int)v83;
        if ( v83 >= 16 )
          p_AbPropagateBoostsList = 15LL;
      }
      if ( (_DWORD)p_AbPropagateBoostsList != *(char *)(v41 + 195) )
        KiUpdateThreadPriority(v20, *(_QWORD *)(v20 + 16), p_AbPropagateBoostsList, 1LL);
    }
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v20, v41, a2, &v88) )
        goto LABEL_80;
    }
    else if ( *(_BYTE *)(a2 + 195) <= *(_BYTE *)(v41 + 195) )
    {
      goto LABEL_80;
    }
    *(_BYTE *)(v41 + 565) = 1;
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(a2, v20) )
        v70 = 1;
      else
        v70 = *(_BYTE *)(a2 + 195);
    }
    else
    {
      v70 = *(_BYTE *)(a2 + 195);
    }
    **(_BYTE **)(v20 + 56) = v70;
    v71 = *(_DWORD **)(v20 + 25016);
    if ( v71 )
      *v71 = v70;
    v72 = *(_QWORD *)(v20 + 25016);
    v73 = a2 == *(_QWORD *)(v20 + 24);
    *(_QWORD *)(v20 + 16) = a2;
    if ( v72 )
      *(_BYTE *)(v72 + 8) = v73;
    if ( *(_BYTE *)(a2 + 388) == 1 )
      *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a2 + 388) = 3;
    *(_BYTE *)(v41 + 388) = 7;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
    v74 = *(unsigned int *)(a2 + 588);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a2, 1350LL, v15, v74);
    _interlockedbittestandreset((volatile signed __int32 *)(v41 + 120), 0xCu);
    a2 = v41;
  }
  v42 = *(_QWORD *)(v20 + 8);
  if ( (*(_DWORD *)(v42 + 120) & 0x400000) != 0 )
  {
    v87 = **(_DWORD **)(v42 + 1512);
    p_AbPropagateBoostsList = (unsigned int)*(char *)(v42 + 563);
    if ( v87 >= (int)p_AbPropagateBoostsList )
    {
      p_AbPropagateBoostsList = (unsigned int)v87;
      if ( v87 >= 16 )
        p_AbPropagateBoostsList = 15LL;
    }
    if ( (_DWORD)p_AbPropagateBoostsList != *(char *)(v42 + 195) )
      KiUpdateThreadPriority(v20, *(_QWORD *)(v20 + 8), p_AbPropagateBoostsList, 1LL);
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v20, v42, a2, &v88) )
      goto LABEL_96;
LABEL_80:
    v43 = v88;
    if ( !v17 )
      *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    if ( !v88 )
    {
      v43 = *(_QWORD *)(a2 + 104);
      if ( v43 )
        v43 += *(unsigned int *)(v20 + 216);
    }
    v44 = *(_QWORD *)(v20 + 25016);
    if ( v44 )
      *(_BYTE *)(v44 + 8) = 0;
    v45 = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v96 = 0;
    if ( v43 && (*(_DWORD *)(a2 + 120) & 0xC00) == 0 )
    {
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v43, p_AbPropagateBoostsList, 0, (__int64)&v96) )
      {
        result = KiAddThreadToScbQueue(v20, v43, a2, v97);
        goto LABEL_93;
      }
      v45 = v96;
    }
    v46 = *(char *)(a2 + 195);
    v47 = *(_QWORD *)(v20 + 24896);
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) != 0 && v47 && (v47 & *(_QWORD *)(a2 + 576)) == v47 && !v45 )
    {
      v66 = *(_QWORD *)(v20 + 24904);
      v67 = (_QWORD *)(v66 + 16 * (v46 + 1));
      v94[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v66, 0LL) )
      {
        do
          KeYieldProcessorEx(v94);
        while ( *(_QWORD *)v66 );
      }
      v68 = (_QWORD *)(a2 + 216);
      if ( v97 )
      {
        v78 = *v67;
        if ( *(_QWORD **)(*v67 + 8LL) != v67 )
          __fastfail(3u);
        *v68 = v78;
        *(_QWORD *)(a2 + 224) = v67;
        *(_QWORD *)(v78 + 8) = v68;
        *v67 = v68;
        _bittestandreset((signed __int32 *)(v20 + 22812), v46);
      }
      else
      {
        v69 = (_QWORD *)v67[1];
        if ( (_QWORD *)*v69 != v67 )
          __fastfail(3u);
        *v68 = v67;
        *(_QWORD *)(a2 + 224) = v69;
        *v69 = v68;
        v67[1] = v68;
      }
      *(_DWORD *)(v66 + 8) |= 1 << v46;
      *(_DWORD *)(a2 + 536) |= 0x80000000;
      ++*(_DWORD *)(v66 + 608);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2024) = result;
      *(_QWORD *)(v66 + 616) += result;
      _InterlockedAnd64((volatile signed __int64 *)v66, 0LL);
    }
    else
    {
      v48 = (_QWORD *)(a2 + 216);
      v49 = (_QWORD *)(v20 + 16 * (v46 + 1432));
      if ( v97 )
      {
        v77 = *v49;
        if ( *(_QWORD **)(*v49 + 8LL) != v49 )
          __fastfail(3u);
        *v48 = v77;
        *(_QWORD *)(a2 + 224) = v49;
        *(_QWORD *)(v77 + 8) = v48;
        *v49 = v48;
        _bittestandset((signed __int32 *)(v20 + 22812), v46);
      }
      else
      {
        v50 = (_QWORD *)v49[1];
        if ( (_QWORD *)*v50 != v49 )
          __fastfail(3u);
        *v48 = v49;
        *(_QWORD *)(a2 + 224) = v50;
        *v50 = v48;
        v49[1] = v48;
      }
      v51 = *(_DWORD *)(v20 + 22808);
      ++*(_DWORD *)(v20 + 23476);
      *(_DWORD *)(v20 + 22808) = v51 | (1 << v46);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2024) = result;
      *(_QWORD *)(v20 + 23480) += result;
    }
LABEL_93:
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
    v52 = *(unsigned int *)(a2 + 588);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( (xmmword_140401150 & 0x8000000) == 0 )
      return result;
    return EtwTraceIdealProcessor(a2, 1350LL, v15, v52);
  }
  if ( *(_BYTE *)(a2 + 195) <= *(_BYTE *)(v42 + 195) )
    goto LABEL_80;
LABEL_96:
  if ( *(_BYTE *)(v42 + 388) == 2 )
    *(_BYTE *)(v42 + 565) = 1;
  if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
  {
    if ( (unsigned __int8)KiIsThreadRankNonZero(a2, v20) )
      v53 = 1;
    else
      v53 = *(_BYTE *)(a2 + 195);
  }
  else
  {
    v53 = *(_BYTE *)(a2 + 195);
  }
  **(_BYTE **)(v20 + 56) = v53;
  v54 = *(_DWORD **)(v20 + 25016);
  if ( v54 )
    *v54 = v53;
  v55 = *(_QWORD *)(v20 + 25016);
  v56 = a2 == *(_QWORD *)(v20 + 24);
  *(_QWORD *)(v20 + 16) = a2;
  if ( v55 )
    *(_BYTE *)(v55 + 8) = v56;
  result = *(unsigned __int8 *)(a2 + 388);
  if ( (_BYTE)result == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320]);
    *(_DWORD *)(a2 + 132) = result;
  }
  *(_BYTE *)(a2 + 388) = 3;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
  v31 = *(_DWORD *)(a2 + 588);
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( a1 != v20 )
  {
    v57 = KeGetCurrentPrcb();
    LOBYTE(v54) = 2;
    ++v57->SynchCounters.IpiSendSoftwareInterruptCount;
    result = HalSendSoftwareInterrupt(v21, v54);
  }
  if ( (xmmword_140401150 & 0x8000000) != 0 )
    goto LABEL_252;
  return result;
}
