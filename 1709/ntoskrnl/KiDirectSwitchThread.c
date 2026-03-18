/*
 * XREFs of KiDirectSwitchThread @ 0x14008DBB0
 * Callers:
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140003620 (PpmPerfGetCurrentFrequency.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x14011D4F8 (KiScheduleNextForegroundBoost.c)
 *     KiGetComparisonRanks @ 0x140128258 (KiGetComparisonRanks.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 *     EtwTraceReadyThread @ 0x14027B7EC (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 *v11; // rbp
  bool v12; // si
  unsigned __int64 v13; // rax
  __int64 p_AbPropagateBoostsList; // r8
  unsigned __int64 v15; // rcx
  bool v16; // zf
  unsigned __int64 v17; // r10
  unsigned int CurrentFrequency; // edx
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // r12
  int v23; // eax
  char v24; // r10
  unsigned __int8 v25; // si
  unsigned int v26; // eax
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // al
  unsigned int v29; // eax
  char v30; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  int v32; // edx
  char v33; // r9
  int v34; // r10d
  int v35; // ebp
  char v36; // cl
  struct _KPRCB *v37; // rcx
  char v38; // si
  int v39; // r15d
  int v40; // ebp
  __int64 v41; // r9
  unsigned int v42; // edx
  unsigned int v43; // ecx
  unsigned __int64 v44; // rax
  char v45; // cl
  _DWORD *v46; // rdx
  __int64 v47; // rcx
  bool result; // al
  unsigned __int64 v49; // rcx
  struct _KPRCB *v50; // rcx
  char v51; // r8
  int v52; // r9d
  __int64 v53; // rsi
  __int64 v54; // rsi
  char IsThreadRankNonZero; // al
  unsigned int v56; // ecx
  unsigned __int64 v57; // rax
  volatile signed __int32 *v58; // r15
  __int64 *v59; // rcx
  __int64 **v60; // rax
  _QWORD *v61; // rdx
  _QWORD *p_Next; // rdx
  int v63; // ecx
  int v64; // edx
  _QWORD *v65; // rdx
  unsigned int ThreadEffectiveRankNonZero; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+34h] [rbp-74h] BYREF
  int v68; // [rsp+38h] [rbp-70h]
  int v69; // [rsp+3Ch] [rbp-6Ch] BYREF
  _DWORD v70[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-60h]
  __int64 v72; // [rsp+50h] [rbp-58h]
  bool v73; // [rsp+B0h] [rbp+8h]
  char v76; // [rsp+C8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 11528) - 216LL;
  v5 = *(__int64 **)(a1 + 11528);
  v6 = *v5;
  *(_QWORD *)(a1 + 11528) = *v5;
  if ( *(_QWORD *)(a1 + 16) || (*(_DWORD *)(v4 + 120) & 0x120000) != 0x20000 )
  {
    *v5 = v6;
    result = 0;
    *(_QWORD *)(a1 + 11528) = v5;
    return result;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v4, 1LL, a2, 1LL);
  v7 = *(_QWORD *)(v4 + 104);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v7 )
    v7 += *(unsigned int *)(a1 + 216);
  ThreadEffectiveRankNonZero = 0;
  v67 = 0;
  if ( v7 )
  {
    ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v4, v7, a3, 1, 0LL);
    if ( ThreadEffectiveRankNonZero )
    {
      v53 = *(_QWORD *)(v8 + 104);
      if ( v53 )
      {
        v54 = *(unsigned int *)(a1 + 216) + v53;
        if ( v54 )
        {
          v67 = KiGetThreadEffectiveRankNonZero(v8, v54, v51, v52, 0LL);
          if ( v67 )
            KiGetComparisonRanks(v7, v54, &ThreadEffectiveRankNonZero, &v67);
        }
      }
    }
  }
  v9 = *(unsigned __int8 *)(v4 + 587);
  v10 = *(__int64 **)(v4 + 208);
  v68 = 1;
  v76 = 0;
  v11 = &v10[6 * v9];
  do
  {
    if ( *((_BYTE *)v10 + 17) < 5u )
    {
      v58 = (volatile signed __int32 *)v10[4];
      KiAcquireKobjectLockSafe(v58);
      if ( *((_BYTE *)v10 + 17) == 4 )
      {
        v59 = (__int64 *)*v10;
        v60 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v60 != v10 )
          __fastfail(3u);
        *v60 = v59;
        v59[1] = (__int64)v60;
      }
      _InterlockedAnd(v58, 0xFFFFFF7F);
    }
    v10 += 6;
  }
  while ( v10 != v11 );
  v12 = *(_QWORD *)(a1 + 11528) == 0LL;
  v73 = v12;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v13 = __rdtsc();
  p_AbPropagateBoostsList = v13 - *(_QWORD *)(a1 + 23488);
  v72 = p_AbPropagateBoostsList + *(_QWORD *)(v8 + 72);
  *(_QWORD *)(v8 + 72) = v72;
  v15 = p_AbPropagateBoostsList + *(unsigned int *)(v8 + 80);
  if ( v15 > 0xFFFFFFFF )
    v15 = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 23488) = v13;
  v16 = (*(_BYTE *)(v8 + 2) & 0x3E) == 0;
  *(_DWORD *)(v8 + 80) = v15;
  if ( !v16 )
    KiEndThreadAccountingPeriod(a1, v8);
  v17 = __rdtsc();
  *(_QWORD *)(a1 + 23608) += v17 - *(_QWORD *)(a1 + 23488);
  if ( (*(_BYTE *)(v8 + 2) & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0);
    if ( CurrentFrequency < 0x4B )
      v20 = CurrentFrequency / 0x19;
    else
      v20 = 3;
    v21 = (unsigned __int64 *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v20));
    v15 = v19 + *v21;
    *v21 = v15;
  }
  *(_QWORD *)(a1 + 23488) = v17;
  if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
    *(_QWORD *)(a1 + 23496) = v17;
  if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(v8, 0LL);
  v16 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v16 )
  {
    LOBYTE(v15) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v15);
  }
  _enable();
  v22 = *(_QWORD *)(v8 + 32);
  v71 = *(_QWORD *)(v4 + 72);
  v69 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v69);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(v4 + 584) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v4 + 576)) != 0LL )
  {
    v23 = *(_DWORD *)(v4 + 120);
    v68 = 0;
    if ( (v23 & 0x400000) != 0 )
    {
      v63 = **(_DWORD **)(v4 + 1512);
      p_AbPropagateBoostsList = (unsigned int)*(char *)(v4 + 563);
      if ( v63 >= (int)p_AbPropagateBoostsList )
      {
        p_AbPropagateBoostsList = (unsigned int)v63;
        if ( v63 >= 16 )
          p_AbPropagateBoostsList = 15LL;
      }
      if ( (_DWORD)p_AbPropagateBoostsList != *(char *)(v4 + 195) )
        KiUpdateThreadPriority(0LL, v4, p_AbPropagateBoostsList, 0);
      v24 = 1;
    }
    else
    {
      v24 = 0;
    }
    if ( *(char *)(v4 + 195) >= 16 )
    {
      v38 = 1;
    }
    else
    {
      v25 = 0;
      v26 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436);
      if ( v71 >= *(_QWORD *)(v4 + 32) )
      {
        v25 = 4;
        if ( v26 < 2 )
          v25 = 5;
      }
      if ( v25 >= 4u || *(char *)(v4 + 563) >= 14 || v26 >= 2 && !*(_BYTE *)(v4 + 564) )
      {
        p_AbPropagateBoostsList = *(unsigned __int8 *)(v4 + 195);
        v25 |= 8u;
        if ( (char)p_AbPropagateBoostsList < 16 )
        {
          v27 = *(_BYTE *)(v4 + 564);
          v28 = -1 - (v27 >> 4) - (v27 & 0xF) + p_AbPropagateBoostsList;
          if ( v28 < *(_BYTE *)(v4 + 563) )
            v28 = *(_BYTE *)(v4 + 563);
          p_AbPropagateBoostsList = v28;
          if ( v27 )
          {
            if ( (v27 & 0xF) != 0 )
              *(_DWORD *)(v4 + 1424) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v4 + 564) = 0;
          }
          v29 = *(_DWORD *)(v4 + 1408);
          if ( v29 )
          {
            _BitScanReverse((unsigned int *)&v64, v29);
            p_AbPropagateBoostsList = (unsigned __int8)p_AbPropagateBoostsList;
            if ( (char)p_AbPropagateBoostsList < v64 )
              p_AbPropagateBoostsList = (unsigned __int8)v64;
            v70[1] = v64;
          }
        }
        v30 = p_AbPropagateBoostsList;
        if ( !v24 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (char)p_AbPropagateBoostsList > *(char *)(v4 + 195) )
          {
            if ( *(_BYTE *)(v4 + 793) )
            {
              v65 = (_QWORD *)(v4 + 1376);
              if ( *(_QWORD *)(v4 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&CurrentPrcb->AbPropagateBoostsList;
                if ( CurrentPrcb != (struct _KPRCB *)-25720LL )
                {
                  *v65 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v65;
                  _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
                  KiAbQueueAutoBoostDpc(CurrentPrcb);
                }
              }
            }
          }
          *(_BYTE *)(v4 + 195) = v30;
        }
      }
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 544) + 1474LL) == 2 )
        v25 |= 2u;
      v32 = *(_DWORD *)(v4 + 120);
      if ( ((unsigned __int8)~v25 & ((v32 & 8) == 0)) != 0
        && (p_AbPropagateBoostsList = *(unsigned __int8 *)(v4 + 195), (char)p_AbPropagateBoostsList > 0)
        && ((v33 = *(_BYTE *)(v4 + 564)) == 0 || (v33 & 0xF0) == 0 && (v25 & 2) != 0) )
      {
        v34 = *(char *)(v4 + 563);
        v35 = v34 + (char)a2;
        if ( (v25 & 2) != 0 )
          v35 += (char)PsPrioritySeparation;
        if ( v35 >= 16 )
          v35 = 15;
        if ( v35 > (char)p_AbPropagateBoostsList )
        {
          v36 = 0;
          if ( v35 > v34 + (char)a2 )
            v36 = v35 - v34 - a2;
          *(_BYTE *)(v4 + 564) = v33 ^ (v36 ^ v33) & 0xF;
          v37 = KeGetCurrentPrcb();
          if ( (char)v35 > (char)p_AbPropagateBoostsList )
          {
            if ( *(_BYTE *)(v4 + 793) )
            {
              p_AbPropagateBoostsList = v4 + 1376;
              if ( *(_QWORD *)(v4 + 1376) == 1LL )
              {
                p_Next = &v37->AbPropagateBoostsList.Next;
                if ( v37 != (struct _KPRCB *)-25720LL )
                {
                  *(_QWORD *)p_AbPropagateBoostsList = *p_Next;
                  *p_Next = p_AbPropagateBoostsList;
                  _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
                  KiAbQueueAutoBoostDpc(v37);
                }
              }
            }
          }
          *(_BYTE *)(v4 + 195) = v35;
        }
      }
      else if ( (v25 & 6) == 6 && (v32 & 8) == 0 && *(char *)(v4 + 195) > 0 )
      {
        KiScheduleNextForegroundBoost(v4);
      }
      v38 = v25 >> 3;
    }
    v39 = *(char *)(v4 + 195);
    v70[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(v70);
      while ( *(_QWORD *)(a1 + 48) );
    }
    v40 = *(char *)(v8 + 195);
    if ( *(_QWORD *)(a1 + 16) )
      goto LABEL_81;
    if ( ThreadEffectiveRankNonZero > v67 || ThreadEffectiveRankNonZero == v67 && v39 <= v40 )
    {
      v41 = v72;
      v42 = 1 << v39;
      v43 = *(_DWORD *)(*(_QWORD *)(a1 + 24904) + 8LL) | *(_DWORD *)(a1 + 22808);
      p_AbPropagateBoostsList = (unsigned int)KiDirectQuantumTarget;
      if ( (unsigned __int64)(unsigned int)KiDirectQuantumTarget + v72 <= v22 && !ThreadEffectiveRankNonZero )
      {
        if ( v40 >= 16 )
        {
          v40 = 15;
          if ( v39 >= 16 )
            v40 = v39;
        }
        if ( (v43 & v42) != 0 )
        {
          v44 = (unsigned int)KiDirectQuantumTarget + v71;
          v41 = v22 - (unsigned int)KiDirectQuantumTarget;
        }
        else
        {
          v44 = v22 + v71 - v72;
        }
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 5u);
        v38 = 0;
        *(_QWORD *)(v4 + 32) = v44;
        *(_QWORD *)(v8 + 32) = v41;
        if ( a3 && v39 != v40 )
        {
          v50 = KeGetCurrentPrcb();
          if ( (char)v40 > *(char *)(v4 + 195) )
          {
            if ( *(_BYTE *)(v4 + 793) )
            {
              p_AbPropagateBoostsList = v4 + 1376;
              if ( *(_QWORD *)(v4 + 1376) == 1LL )
              {
                v61 = &v50->AbPropagateBoostsList.Next;
                if ( v50 != (struct _KPRCB *)-25720LL )
                {
                  *(_QWORD *)p_AbPropagateBoostsList = *v61;
                  *v61 = p_AbPropagateBoostsList;
                  _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
                  KiAbQueueAutoBoostDpc(v50);
                }
              }
            }
          }
          *(_BYTE *)(v4 + 195) = v40;
          *(_BYTE *)(v4 + 564) += 16 * (v40 - v39);
        }
        goto LABEL_72;
      }
      if ( v42 <= v43 )
        goto LABEL_81;
      if ( !ThreadEffectiveRankNonZero )
        goto LABEL_72;
      if ( v43 > 1 )
      {
LABEL_81:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        if ( v38 )
        {
          v49 = v71 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
          if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
          *(_QWORD *)(v4 + 32) = v49;
        }
        v12 = v73;
        goto LABEL_83;
      }
      v56 = *(_DWORD *)(*(_QWORD *)(v7 + 416) + 116LL);
      v57 = *(_QWORD *)(a1 + 22904) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v57 )
      {
        p_AbPropagateBoostsList = *(unsigned int *)(v57 + 28);
        if ( (_DWORD)p_AbPropagateBoostsList == v56 )
        {
          if ( *(unsigned __int16 *)(v57 + 26) >= v42 )
            goto LABEL_81;
        }
        else if ( (unsigned int)p_AbPropagateBoostsList <= v56 )
        {
          goto LABEL_81;
        }
      }
    }
    else
    {
      *(_BYTE *)(v8 + 565) = 1;
    }
LABEL_72:
    *(_BYTE *)(v4 + 565) = 0;
    *(_DWORD *)(v4 + 536) = *(_DWORD *)(a1 + 36);
    v76 = 1;
    if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(v4, a1);
      v45 = 1;
      if ( !IsThreadRankNonZero )
        v45 = *(_BYTE *)(v4 + 195);
    }
    else
    {
      v45 = *(_BYTE *)(v4 + 195);
    }
    **(_BYTE **)(a1 + 56) = v45;
    v46 = *(_DWORD **)(a1 + 25016);
    if ( v46 )
      *v46 = v45;
    *(_QWORD *)(a1 + 16) = v4;
    v47 = *(_QWORD *)(a1 + 25016);
    if ( v47 )
      *(_BYTE *)(v47 + 8) = v4 == *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v4 + 388) == 1 )
      *(_DWORD *)(v4 + 132) = *(_DWORD *)(v4 + 132) - *(_DWORD *)(v4 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v4 + 388) = 3;
    goto LABEL_81;
  }
LABEL_83:
  *(_QWORD *)(v4 + 64) = 0LL;
  if ( !v76 )
  {
    *(_BYTE *)(v4 + 566) = v68;
    *(_BYTE *)(v4 + 567) = a2;
    KiDeferredReadyThread(a1, v4, p_AbPropagateBoostsList);
  }
  return v12;
}
