/*
 * XREFs of KiSwapThread @ 0x1400EB0F0
 * Callers:
 *     KiInSwapSingleProcess @ 0x1400B2A20 (KiInSwapSingleProcess.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KiComputeGroupSchedulingRank @ 0x14001C768 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14002A620 (KiRecomputeGroupSchedulingRank.c)
 *     KiInsertDeferredPreemptionApc @ 0x14003FE18 (KiInsertDeferredPreemptionApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400442B8 (KiChargeSchedulingGroupCycleTime.c)
 *     EtwTraceContextSwap @ 0x140086BB0 (EtwTraceContextSwap.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiSearchForNewThread @ 0x1400EB7B0 (KiSearchForNewThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     KiEndCounterAccumulation @ 0x14020207C (KiEndCounterAccumulation.c)
 *     RtlTimelineBitmapUpdate @ 0x140204B38 (RtlTimelineBitmapUpdate.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // r11
  int v11; // ecx
  int v12; // eax
  volatile signed __int64 *v13; // rsi
  volatile signed __int64 *v14; // rbp
  __int64 v15; // rsi
  unsigned int v16; // esi
  char v17; // cl
  unsigned __int8 v18; // bp
  char v19; // r14
  __int64 v20; // rdi
  char v22; // cl
  volatile signed __int32 *v23; // rsi
  char v24; // r12
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  volatile signed __int32 *v27; // r15
  _QWORD *v28; // rcx
  __int64 v29; // r10
  _QWORD *v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // r13d
  volatile signed __int32 *v34; // rcx
  __int64 v35; // rcx
  _QWORD *i; // rcx
  __int64 v37; // rsi
  int v38; // r14d
  char v39; // al
  __int64 v40; // rsi
  unsigned int FrequencyBucket; // eax
  __int64 v42; // r14
  __int64 v43; // rbp
  __int64 v44; // r10
  __int64 v45; // r9
  int v46; // [rsp+30h] [rbp-78h] BYREF
  int v47; // [rsp+34h] [rbp-74h] BYREF
  int v48; // [rsp+38h] [rbp-70h] BYREF
  int v49; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v50; // [rsp+40h] [rbp-68h]
  volatile signed __int64 *v51; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v53[2]; // [rsp+58h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1u, 0, 2u);
  KiAbProcessContextSwitch(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a2 + 23488);
  v8 = v7 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v7;
  v9 = 0xFFFFFFFFLL;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  *(_QWORD *)(a2 + 23488) = v6;
  v10 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v8;
  if ( (v10 & 0x3E) != 0 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 23488) - *(_QWORD *)(a2 + 23496);
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 23504) += v9;
      v10 &= ~0x10u;
      *(_QWORD *)(a2 + 23496) = 0LL;
    }
    if ( (v10 & 0x20) != 0 )
    {
      v40 = *(_QWORD *)(a1 + 1968);
      if ( v40 )
      {
        FrequencyBucket = PoGetFrequencyBucket(a2, v9, v4, v5);
        v42 = *(unsigned __int8 *)(a2 + 23986);
        v43 = FrequencyBucket;
        *(_QWORD *)(v40 + 8 * (v42 + 2LL * FrequencyBucket)) += v44;
        RtlTimelineBitmapUpdate(v40 + 192, (unsigned int)KiTimelineBitmapTime);
        if ( (*(_DWORD *)(a1 + 120) & 4) == 0 )
          *(_QWORD *)(v40 + 16LL * (unsigned int)v43 + 8) += v7;
        if ( *(_QWORD *)(a1 + 1912) )
        {
          *(_QWORD *)(v40 + 8 * (v42 + 16 + 2 * v43)) += v7;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1912) + 1968LL) + 8 * (v42 + 8 + 2 * v43)),
            v7);
        }
      }
      v10 &= ~0x20u;
    }
    if ( (v10 & 0x3E) != 0 )
    {
      v35 = *(_QWORD *)(a1 + 104);
      if ( v35 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v35); i; i = (_QWORD *)i[51] )
          *i += v7;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0
        && (*(_QWORD *)(a1 + 576) & *(_QWORD *)(*(_QWORD *)(a2 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a2 + 192)
                                                                                             + 136LL) )
      {
        *(_QWORD *)(a2 + 23528) += v7;
      }
      if ( KeHeteroSystem != 1 && *(_BYTE *)(a1 + 125) )
      {
        if ( (*(_DWORD *)(a1 + 120) & 4) != 0 )
          *(_QWORD *)(a2 + 23536) += v7;
        else
          *(_QWORD *)(a2 + 23544) += v7;
      }
      if ( *(_QWORD *)(a1 + 360) )
        KiEndCounterAccumulation(a1);
    }
  }
  _enable();
  v11 = *(_DWORD *)(a1 + 80) >> 1;
  v12 = *(_DWORD *)(a1 + 84) >> 1;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v12 + v11;
  v46 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v46);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v13 = *(volatile signed __int64 **)(a1 + 104);
  v51 = v13;
  v14 = v13;
  if ( v13 )
  {
    v37 = (__int64)v13 + *(unsigned int *)(a2 + 216);
    if ( v37 )
    {
      v38 = 0;
      while ( 1 )
      {
        v39 = *(_BYTE *)(v37 + 112);
        if ( (v39 & 4) != 0 )
        {
          if ( (v39 & 0x12) != 0 || !KiChargeSchedulingGroupCycleTime(v14, (_QWORD *)v37) )
          {
            if ( *(_QWORD *)v37 >= *(_QWORD *)(v37 + 24) && (*(_BYTE *)(v37 + 112) & 2) == 0 )
              KiRecomputeGroupSchedulingRank((__int64)v14, v37, a2);
          }
          else
          {
            *(_BYTE *)(v37 + 112) |= 2u;
            if ( (*(_BYTE *)(v37 + 112) & 1) != 0 )
              KiRemoveSchedulingGroupQueue(a2, v37, 1LL, v45);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank((__int64)v14, a2, (__int64 *)v37);
        }
        v38 += *(_DWORD *)(v37 + 116);
        v37 = *(_QWORD *)(v37 + 408);
        if ( !v37 )
          break;
        v14 = (volatile signed __int64 *)(v37 - *(unsigned int *)(a2 + 216));
        v51 = v14;
      }
    }
  }
  v15 = KiSearchForNewThread(a2, 0LL);
  if ( !v15 )
  {
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v16);
      }
      while ( *(_QWORD *)(a2 + 48) );
    }
    v15 = *(_QWORD *)(a2 + 16);
    if ( v15 )
      *(_QWORD *)(a2 + 16) = 0LL;
    else
      v15 = *(_QWORD *)(a2 + 24);
    if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(v15, a2) )
        v17 = 1;
      else
        v17 = *(_BYTE *)(v15 + 195);
    }
    else
    {
      v17 = *(_BYTE *)(v15 + 195);
    }
    **(_BYTE **)(a2 + 56) = v17;
    *(_QWORD *)(a2 + 8) = v15;
    if ( *(_BYTE *)(v15 + 388) == 1 )
      *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v15 + 388) = 2;
  }
  if ( v15 != *(_QWORD *)(a2 + 24) && v15 != a1 && *(_BYTE *)(v15 + 113) )
  {
    if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(v15, a2) )
        v22 = 1;
      else
        v22 = *(_BYTE *)(v15 + 195);
    }
    else
    {
      v22 = *(_BYTE *)(v15 + 195);
    }
    **(_BYTE **)(a2 + 56) = v22;
    *(_QWORD *)(a2 + 16) = v15;
    if ( *(_BYTE *)(v15 + 388) == 1 )
      *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v15 + 388) = 3;
    v15 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v15;
    if ( *(_BYTE *)(v15 + 388) == 1 )
      *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v15 + 388) = 2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v18 = *(_BYTE *)(a1 + 390);
  if ( a1 == v15 )
  {
    v19 = *(_BYTE *)(v15 + 193) && !*(_WORD *)(v15 + 486) && !v18;
    _disable();
    KiStartThreadCycleAccumulation(a2, v15, 0);
    _enable();
    if ( (*(_DWORD *)(v15 + 120) & 0x400) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v15 + 120), 0xAu);
      KiInsertDeferredPreemptionApc(a2, v15, 0);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v19 = KiSwapContext(a1, v15, v18);
  }
  v20 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    v23 = (volatile signed __int32 *)(a1 + 256);
    v24 = 0;
    while ( 1 )
    {
      v47 = 0;
      while ( _interlockedbittestandset(v23, 7u) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( (*v23 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(a1 + 259) & 0xC0) == 0 )
      {
        _InterlockedAnd(v23, 0xFFFFFF7F);
        goto LABEL_45;
      }
      v25 = *(unsigned __int8 *)(a1 + 258);
      v26 = *(unsigned int *)(a1 + 312);
      v48 = 0;
      v50 = KiProcessorBlock[v26] + 13952;
      v27 = (volatile signed __int32 *)(v50 + 32 * (v25 + 16));
      while ( _interlockedbittestandset64(v27, 0LL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( *(_QWORD *)v27 );
      }
      if ( *(char *)(a1 + 259) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v50 + 8LL * (*(_BYTE *)(a1 + 259) & 0x3F)), 0LL) )
      {
        _InterlockedAnd(v23, 0xFFFF7Fu);
        v24 = 1;
        goto LABEL_45;
      }
      _InterlockedAnd(v23, 0xFFFFFF7F);
      v49 = 0;
      while ( *(char *)(a1 + 259) < 0 )
        KeYieldProcessorEx(&v49);
    }
    v28 = *(_QWORD **)(a1 + 288);
    v29 = v50;
    v30 = *(_QWORD **)(a1 + 296);
    v31 = v25;
    if ( v28[1] != a1 + 288 || *v30 != a1 + 288 )
      __fastfail(3u);
    *v30 = v28;
    v28[1] = v30;
    if ( v30 == v28 )
    {
      *(_DWORD *)(32 * (v25 + 16) + v29 + 28) = -1;
      v32 = qword_1403E4FD8[2 * *(unsigned __int8 *)(v29 - 13744)];
      if ( KiSerializeTimerExpiration )
      {
        v33 = v25 & 0x3F;
        v34 = (volatile signed __int32 *)(v32 + 8 * (v31 >> 6));
      }
      else
      {
        v33 = *(unsigned __int8 *)(v29 - 13743);
        v34 = (volatile signed __int32 *)((v31 << 6) + v32);
      }
      _interlockedbittestandreset64(v34, v33);
    }
    _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
    _InterlockedAnd(v23, 0xBFFFFF7F);
    v24 = 1;
LABEL_45:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( !v24 )
      {
LABEL_47:
        *(_BYTE *)(a1 + 481) = 4;
        *(_QWORD *)(a1 + 264) = a1 + 464;
        *(_QWORD *)(a1 + 272) = a1 + 464;
        goto LABEL_23;
      }
      v52 = a1 + 256;
      v53[0] = &v52;
      v53[1] = 8LL;
      EtwTraceKernelEvent((int)v53, 1, 0x40020000u, 3925, 1538);
    }
    if ( v24 )
      goto LABEL_23;
    goto LABEL_47;
  }
LABEL_23:
  if ( v19 )
  {
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  __writecr8(v18);
  return v20;
}
