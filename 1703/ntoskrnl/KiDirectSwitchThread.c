/*
 * XREFs of KiDirectSwitchThread @ 0x1400E1C90
 * Callers:
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x140027714 (KiScheduleNextForegroundBoost.c)
 *     KiGetComparisonRanks @ 0x14002F988 (KiGetComparisonRanks.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14010EEB4 (KiCheckForMaxOverQuotaScb.c)
 *     KiShouldPreemptionBeDeferred @ 0x14011387C (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x140201F5C (KiBeginCounterAccumulation.c)
 *     EtwTraceReadyThread @ 0x140253B0C (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // r9
  char v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // rbp
  bool v15; // si
  unsigned __int64 v16; // rax
  unsigned __int64 p_AbPropagateBoostsList; // r8
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r11
  bool v23; // cc
  char v24; // si
  unsigned int v25; // eax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // al
  unsigned int v28; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  char v30; // bp
  char v31; // dl
  int v32; // r10d
  int v33; // ebp
  bool v34; // si
  int v35; // r15d
  int v36; // ebp
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned __int64 v39; // rax
  bool result; // al
  unsigned __int64 v41; // rcx
  unsigned int v42; // ecx
  unsigned __int64 v43; // rax
  struct _KPRCB *v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // edx
  __int64 v47; // r10
  __int64 v48; // r10
  __int64 v49; // r10
  char v50; // cl
  struct _KPRCB *v51; // rcx
  _QWORD *v52; // rdx
  volatile signed __int32 *v53; // r15
  __int64 *v54; // rcx
  __int64 **v55; // rax
  _QWORD *p_Next; // rdx
  unsigned __int64 *v57; // rdx
  __int64 v58; // r10
  int v59; // edx
  _QWORD *v60; // rdx
  unsigned int v61; // [rsp+30h] [rbp-88h] BYREF
  unsigned int ThreadEffectiveRankNonZero; // [rsp+34h] [rbp-84h] BYREF
  int v63; // [rsp+38h] [rbp-80h]
  unsigned __int64 v64; // [rsp+40h] [rbp-78h]
  int v65; // [rsp+48h] [rbp-70h] BYREF
  _DWORD v66[3]; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v67; // [rsp+58h] [rbp-60h]
  unsigned __int64 v68; // [rsp+60h] [rbp-58h]
  bool v69; // [rsp+C0h] [rbp+8h]
  char v72; // [rsp+D8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 11528) - 216LL;
  v5 = *(__int64 **)(a1 + 11528);
  v6 = *v5;
  *(_QWORD *)(a1 + 11528) = *v5;
  if ( *(_QWORD *)(a1 + 16) || (*(_DWORD *)(v4 + 120) & 0x90000) != 0x10000 )
  {
    *v5 = v6;
    result = 0;
    *(_QWORD *)(a1 + 11528) = v5;
    return result;
  }
  v7 = 1;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v4, 1LL, a2, 1LL);
  v8 = *(_QWORD *)(v4 + 104);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 )
    v8 += *(unsigned int *)(a1 + 216);
  v10 = 0LL;
  v11 = 0xFFFFFFFFLL;
  v61 = 0;
  ThreadEffectiveRankNonZero = 0;
  if ( v8 )
  {
    LODWORD(v45) = v8;
    v46 = 0;
    if ( *(char *)(v4 + 195) < 16
      && (*(_DWORD *)(v4 + 120) & 0x100) == 0
      && !(unsigned __int8)KiShouldPreemptionBeDeferred(v4) )
    {
      if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v8) )
      {
        v61 = v11;
LABEL_99:
        v47 = *(_QWORD *)(v9 + 104);
        if ( v47 )
        {
          v48 = *(unsigned int *)(a1 + 216) + v47;
          if ( v48 )
          {
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v9, v48, v45, 1, v10);
            if ( ThreadEffectiveRankNonZero )
              KiGetComparisonRanks(v8, v49, &v61, &ThreadEffectiveRankNonZero);
          }
        }
        goto LABEL_8;
      }
      do
      {
        v46 += *(_DWORD *)(v45 + 116);
        if ( v46 )
          break;
        v45 = *(_QWORD *)(v45 + 408);
      }
      while ( v45 );
    }
    v61 = v46;
    if ( !v46 )
      goto LABEL_8;
    goto LABEL_99;
  }
LABEL_8:
  v12 = *(unsigned __int8 *)(v4 + 587);
  v13 = *(__int64 **)(v4 + 208);
  v72 = 0;
  v63 = 1;
  v14 = &v13[6 * v12];
  do
  {
    if ( *((unsigned __int8 *)v13 + 17) < 5u )
    {
      v53 = (volatile signed __int32 *)v13[4];
      KiAcquireKobjectLockSafe(v53);
      if ( *((_BYTE *)v13 + 17) == 4 )
      {
        v54 = (__int64 *)*v13;
        v55 = (__int64 **)v13[1];
        if ( *(__int64 **)(*v13 + 8) != v13 || *v55 != v13 )
          __fastfail(3u);
        *v55 = v54;
        v54[1] = (__int64)v55;
      }
      _InterlockedAnd(v53, 0xFFFFFF7F);
    }
    v13 += 6;
  }
  while ( v13 != v14 );
  v15 = *(_QWORD *)(a1 + 11528) == 0LL;
  v69 = v15;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v16 = __rdtsc();
  p_AbPropagateBoostsList = v16 - *(_QWORD *)(a1 + 23488);
  v67 = p_AbPropagateBoostsList + *(_QWORD *)(v9 + 72);
  *(_QWORD *)(v9 + 72) = v67;
  v18 = p_AbPropagateBoostsList + *(unsigned int *)(v9 + 80);
  if ( v18 > 0xFFFFFFFF )
    v18 = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 23488) = v16;
  v19 = (*(_BYTE *)(v9 + 2) & 0x3E) == 0;
  *(_DWORD *)(v9 + 80) = v18;
  if ( !v19 )
    KiEndThreadAccountingPeriod(a1, v9, p_AbPropagateBoostsList);
  v20 = __rdtsc();
  v21 = v20;
  *(_QWORD *)(a1 + 23672) += v20 - *(_QWORD *)(a1 + 23488);
  if ( (*(_BYTE *)(v9 + 2) & 0x20) != 0 )
  {
    v57 = (unsigned __int64 *)(a1
                             + 8
                             * (*(unsigned __int8 *)(a1 + 23986)
                              + 2960LL
                              + 2LL
                              * (unsigned int)PoGetFrequencyBucket(
                                                a1,
                                                (unsigned __int64)HIDWORD(v20) << 32,
                                                p_AbPropagateBoostsList,
                                                v11)));
    v18 = v58 + *v57;
    *v57 = v18;
  }
  *(_QWORD *)(a1 + 23488) = v21;
  if ( (*(_BYTE *)(v9 + 2) & 0x10) != 0 )
    *(_QWORD *)(a1 + 23496) = v21;
  if ( (*(_BYTE *)(v9 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(v9, 0LL);
  v19 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v19 )
  {
    LOBYTE(v18) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v18);
  }
  _enable();
  v22 = *(_QWORD *)(v4 + 72);
  v68 = *(_QWORD *)(v9 + 32);
  v64 = v22;
  v65 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v65);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 208) != *(_WORD *)(v4 + 584) || (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v4 + 576)) == 0LL )
    goto LABEL_73;
  v23 = *(_BYTE *)(v4 + 195) < 16;
  v63 = 0;
  if ( v23 )
  {
    v24 = 0;
    v25 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436);
    if ( v64 >= *(_QWORD *)(v4 + 32) )
    {
      v24 = 4;
      if ( v25 < 2 )
        v24 = 5;
    }
    if ( (v24 & 4) != 0 || *(char *)(v4 + 563) >= 14 || v25 >= 2 && !*(_BYTE *)(v4 + 564) )
    {
      p_AbPropagateBoostsList = *(unsigned __int8 *)(v4 + 195);
      v24 |= 8u;
      if ( (char)p_AbPropagateBoostsList < 16 )
      {
        v26 = *(_BYTE *)(v4 + 564);
        v11 = v26;
        LOBYTE(v11) = v26 & 0xF;
        v27 = -1 - (v26 >> 4) - (v26 & 0xF) + p_AbPropagateBoostsList;
        if ( v27 < *(_BYTE *)(v4 + 563) )
          v27 = *(_BYTE *)(v4 + 563);
        p_AbPropagateBoostsList = v27;
        if ( v26 )
        {
          if ( (_BYTE)v11 )
            *(_DWORD *)(v4 + 1424) = MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v4 + 564) = 0;
        }
        v28 = *(_DWORD *)(v4 + 1408);
        if ( v28 )
        {
          _BitScanReverse((unsigned int *)&v59, v28);
          p_AbPropagateBoostsList = (unsigned __int8)p_AbPropagateBoostsList;
          if ( (char)p_AbPropagateBoostsList < v59 )
            p_AbPropagateBoostsList = (unsigned __int8)v59;
          v66[1] = v59;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = p_AbPropagateBoostsList;
      if ( (char)p_AbPropagateBoostsList > *(char *)(v4 + 195) )
      {
        if ( *(_BYTE *)(v4 + 793) )
        {
          v60 = (_QWORD *)(v4 + 1376);
          if ( *(_QWORD *)(v4 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = (unsigned __int64)&CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-26040LL )
            {
              *v60 = *(_QWORD *)p_AbPropagateBoostsList;
              *(_QWORD *)p_AbPropagateBoostsList = v60;
              _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
      *(_BYTE *)(v4 + 195) = v30;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 544) + 1474LL) == 2 )
      v24 |= 2u;
    if ( (((*(_BYTE *)(v4 + 120) & 2) == 0) & (unsigned __int8)~v24) != 0
      && (v31 = *(_BYTE *)(v4 + 195), v31 > 0)
      && ((p_AbPropagateBoostsList = *(unsigned __int8 *)(v4 + 564), !(_BYTE)p_AbPropagateBoostsList)
       || (p_AbPropagateBoostsList & 0xF0) == 0 && (v24 & 2) != 0) )
    {
      v32 = *(char *)(v4 + 563);
      v11 = (unsigned int)(v32 + (char)a2);
      v33 = v32 + (char)a2;
      if ( (v24 & 2) != 0 )
        v33 += (char)PsPrioritySeparation;
      if ( v33 >= 16 )
        v33 = 15;
      if ( v33 > v31 )
      {
        v50 = 0;
        if ( v33 > (int)v11 )
          v50 = v33 - v32 - a2;
        *(_BYTE *)(v4 + 564) = p_AbPropagateBoostsList ^ (v50 ^ p_AbPropagateBoostsList) & 0xF;
        v51 = KeGetCurrentPrcb();
        if ( (char)v33 > v31 )
        {
          if ( *(_BYTE *)(v4 + 793) )
          {
            p_AbPropagateBoostsList = v4 + 1376;
            if ( *(_QWORD *)(v4 + 1376) == 1LL )
            {
              p_Next = &v51->AbPropagateBoostsList.Next;
              if ( v51 != (struct _KPRCB *)-26040LL )
              {
                *(_QWORD *)p_AbPropagateBoostsList = *p_Next;
                *p_Next = p_AbPropagateBoostsList;
                _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
                KiAbQueueAutoBoostDpc(v51);
              }
            }
          }
        }
        *(_BYTE *)(v4 + 195) = v33;
      }
    }
    else if ( (v24 & 6) == 6 && (*(_BYTE *)(v4 + 120) & 2) == 0 && *(char *)(v4 + 195) > 0 )
    {
      KiScheduleNextForegroundBoost(v4);
    }
    v34 = (v24 & 8) != 0;
  }
  else
  {
    v34 = 1;
  }
  v35 = *(char *)(v4 + 195);
  v66[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(v66);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v36 = *(char *)(v9 + 195);
  if ( *(_QWORD *)(a1 + 16) )
    goto LABEL_71;
  if ( v61 <= ThreadEffectiveRankNonZero && (v61 != ThreadEffectiveRankNonZero || v35 > v36) )
  {
    *(_BYTE *)(v9 + 565) = 1;
    goto LABEL_66;
  }
  v11 = v67;
  v37 = 1 << v35;
  p_AbPropagateBoostsList = (unsigned int)KiDirectQuantumTarget;
  v38 = *(_DWORD *)(*(_QWORD *)(a1 + 25160) + 8LL) | *(_DWORD *)(a1 + 22808);
  if ( (unsigned __int64)(unsigned int)KiDirectQuantumTarget + v67 <= v68 && !v61 )
  {
    if ( v36 >= 16 )
    {
      v36 = 15;
      if ( v35 >= 16 )
        v36 = v35;
    }
    if ( (v38 & v37) != 0 )
    {
      v39 = (unsigned int)KiDirectQuantumTarget + v64;
      v11 = v68 - (unsigned int)KiDirectQuantumTarget;
    }
    else
    {
      v39 = v68 + v64 - v67;
    }
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 4u);
    v34 = 0;
    *(_QWORD *)(v4 + 32) = v39;
    *(_QWORD *)(v9 + 32) = v11;
    if ( a3 && v35 != v36 )
    {
      v44 = KeGetCurrentPrcb();
      if ( (char)v36 > *(char *)(v4 + 195) )
      {
        if ( *(_BYTE *)(v4 + 793) )
        {
          p_AbPropagateBoostsList = v4 + 1376;
          if ( *(_QWORD *)(v4 + 1376) == 1LL )
          {
            v52 = &v44->AbPropagateBoostsList.Next;
            if ( v44 != (struct _KPRCB *)-26040LL )
            {
              *(_QWORD *)p_AbPropagateBoostsList = *v52;
              *v52 = p_AbPropagateBoostsList;
              _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
              KiAbQueueAutoBoostDpc(v44);
            }
          }
        }
      }
      *(_BYTE *)(v4 + 195) = v36;
      *(_BYTE *)(v4 + 564) += 16 * (v36 - v35);
    }
    goto LABEL_66;
  }
  if ( v37 <= v38 )
    goto LABEL_71;
  if ( !v61 )
    goto LABEL_66;
  if ( v38 > 1 )
    goto LABEL_71;
  v42 = *(_DWORD *)(*(_QWORD *)(v8 + 416) + 116LL);
  v43 = *(_QWORD *)(a1 + 22904) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v43 )
  {
LABEL_66:
    *(_BYTE *)(v4 + 565) = 0;
    *(_DWORD *)(v4 + 536) = *(_DWORD *)(a1 + 36);
    v72 = 1;
    if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
    {
      if ( !(unsigned __int8)KiIsThreadRankNonZero(v4, a1) )
        v7 = *(_BYTE *)(v4 + 195);
    }
    else
    {
      v7 = *(_BYTE *)(v4 + 195);
    }
    **(_BYTE **)(a1 + 56) = v7;
    *(_QWORD *)(a1 + 16) = v4;
    if ( *(_BYTE *)(v4 + 388) == 1 )
      *(_DWORD *)(v4 + 132) = *(_DWORD *)(v4 + 132) - *(_DWORD *)(v4 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v4 + 388) = 3;
    goto LABEL_71;
  }
  p_AbPropagateBoostsList = *(unsigned int *)(v43 + 28);
  if ( (_DWORD)p_AbPropagateBoostsList != v42 )
  {
    if ( (unsigned int)p_AbPropagateBoostsList <= v42 )
      goto LABEL_71;
    goto LABEL_66;
  }
  if ( *(unsigned __int16 *)(v43 + 26) < v37 )
    goto LABEL_66;
LABEL_71:
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  if ( v34 )
  {
    v41 = v64 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
    if ( (*(_DWORD *)(v4 + 120) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 4u);
    *(_QWORD *)(v4 + 32) = v41;
  }
  v15 = v69;
LABEL_73:
  *(_QWORD *)(v4 + 64) = 0LL;
  if ( !v72 )
  {
    *(_BYTE *)(v4 + 566) = v63;
    *(_BYTE *)(v4 + 567) = a2;
    KiDeferredReadyThread(a1, v4, p_AbPropagateBoostsList, v11);
  }
  return v15;
}
