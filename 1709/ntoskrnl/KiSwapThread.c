/*
 * XREFs of KiSwapThread @ 0x14006E1D0
 * Callers:
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x1400BFC20 (KiInSwapSingleProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSearchForNewThread @ 0x14006EA10 (KiSearchForNewThread.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiStartThreadCycleAccumulation @ 0x14008D5D0 (KiStartThreadCycleAccumulation.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AB178 (KiInsertDeferredPreemptionApc.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D1370 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400D28C8 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14011E1CC (KiCheckMaxOverQuotaTransition.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x14020864C (KiEndCounterAccumulation.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14020AA0C (KiSendHeteroRescheduleIntRequest.c)
 *     EtwTraceContextSwap @ 0x14027AFE0 (EtwTraceContextSwap.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  char v7; // r8
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rsi
  unsigned int v14; // esi
  char v15; // cl
  _DWORD *v16; // rdx
  unsigned __int8 v17; // bp
  char v18; // r14
  __int64 v19; // rdi
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // rcx
  char v35; // cl
  _DWORD *v36; // rdx
  __int64 v37; // rcx
  bool v38; // al
  volatile signed __int32 *v39; // rsi
  char v40; // r12
  unsigned __int64 v41; // r10
  __int64 v42; // rax
  unsigned __int64 v43; // r13
  volatile signed __int32 *v44; // r15
  _QWORD *v45; // rcx
  __int64 v46; // r9
  _QWORD *v47; // rax
  unsigned int v48; // r10d
  __int64 v49; // r13
  _QWORD *i; // rcx
  int v51; // r14d
  __int64 v52; // [rsp+30h] [rbp-88h]
  int v53; // [rsp+38h] [rbp-80h] BYREF
  int v54; // [rsp+3Ch] [rbp-7Ch] BYREF
  int v55; // [rsp+40h] [rbp-78h] BYREF
  int v56; // [rsp+44h] [rbp-74h] BYREF
  __int64 v57; // [rsp+48h] [rbp-70h]
  __int64 v58; // [rsp+50h] [rbp-68h]
  __int64 v59; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v60[2]; // [rsp+60h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1LL, 0LL, 2LL);
  KiAbProcessContextSwitch(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v4 = __rdtsc();
  v5 = v4 - *(_QWORD *)(a2 + 23488);
  v6 = v5 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v5;
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  *(_QWORD *)(a2 + 23488) = v4;
  v7 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v6;
  if ( (v7 & 0x3E) != 0 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 23504) += *(_QWORD *)(a2 + 23488)
                                                                      - *(_QWORD *)(a2 + 23496);
      v7 &= ~0x10u;
      *(_QWORD *)(a2 + 23496) = 0LL;
    }
    if ( (v7 & 0x20) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 1976);
      if ( v21 )
      {
        v22 = *(_QWORD *)(a2 + 24176);
        v23 = *(_QWORD *)(a2 + 24184);
        if ( v22 && v23 )
        {
          if ( *(_BYTE *)(v23 + 100) )
          {
            v24 = *(_DWORD *)(v23 + 116);
          }
          else
          {
            v24 = *(_DWORD *)(v23 + 72);
            if ( v24 >= *(_DWORD *)(v22 + 368) )
              v24 = *(_DWORD *)(v22 + 368);
          }
        }
        else
        {
          v24 = 100;
        }
        if ( v24 < 0x4B )
          v25 = v24 / 0x19;
        else
          v25 = 3;
        v26 = *(unsigned __int8 *)(a2 + 23858);
        v27 = v25;
        v28 = v26 + 2LL * v25;
        v29 = *(_QWORD *)(v21 + 8 * v28);
        v30 = (_QWORD *)(v21 + 8 * v28);
        v31 = KiTimelineBitmapTime;
        *v30 = v5 + v29;
        v32 = *(_DWORD *)(v21 + 192);
        if ( v31 > v32 )
        {
          LODWORD(v52) = v31;
          if ( v31 - v32 >= 0x20 )
            HIDWORD(v52) = 1;
          else
            HIDWORD(v52) = (*(_DWORD *)(v21 + 196) << (v31 - v32)) | 1;
          *(_QWORD *)(v21 + 192) = v52;
        }
        else
        {
          v33 = v32 - v31;
          if ( v33 < 0x20 )
            *(_DWORD *)(v21 + 196) |= 1 << v33;
        }
        if ( (*(_DWORD *)(a1 + 120) & 3) == 2 )
          *(_QWORD *)(v21 + 16 * v27 + 8) += v5;
        if ( *(_QWORD *)(a1 + 1920) )
        {
          *(_QWORD *)(v21 + 8 * (v26 + 16 + 2 * v27)) += v5;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1920) + 1976LL) + 8 * (v26 + 8 + 2 * v27)),
            v5);
        }
      }
      v7 &= ~0x20u;
    }
    if ( (v7 & 0x3E) != 0 )
    {
      v34 = *(_QWORD *)(a1 + 104);
      if ( v34 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v34); i; i = (_QWORD *)i[51] )
          *i += v5;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0
        && (*(_QWORD *)(a1 + 576) & *(_QWORD *)(*(_QWORD *)(a2 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a2 + 192)
                                                                                             + 136LL) )
      {
        *(_QWORD *)(a2 + 23528) += v5;
      }
      if ( *(_BYTE *)(a1 + 125) )
      {
        if ( (*(_DWORD *)(a1 + 120) & 3) == 2 )
          *(_QWORD *)(a2 + 23544) += v5;
        else
          *(_QWORD *)(a2 + 23536) += v5;
      }
      if ( *(_QWORD *)(a1 + 360) )
        KiEndCounterAccumulation(a1);
    }
  }
  _enable();
  v8 = 0;
  v9 = *(_DWORD *)(a1 + 84) >> 1;
  v10 = *(_DWORD *)(a1 + 80) >> 1;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v10 + v9;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( *(_QWORD *)(a2 + 48) );
  }
  v11 = *(_QWORD *)(a1 + 104);
  v58 = v11;
  v12 = v11;
  if ( v11 )
    v11 += *(unsigned int *)(a2 + 216);
  if ( v11 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v11 + 112) & 4) != 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v11, v12) )
        {
          if ( (*(_BYTE *)(v11 + 112) & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a2, v11, 1LL);
        }
        else if ( *(_QWORD *)v11 >= *(_QWORD *)(v11 + 24) && (*(_BYTE *)(v11 + 112) & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank(v12, v11, a2);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank(v12, a2, v11);
      }
      v51 += *(_DWORD *)(v11 + 116);
      v11 = *(_QWORD *)(v11 + 408);
      if ( !v11 )
        break;
      v12 = v11 - *(unsigned int *)(a2 + 216);
      v58 = v12;
    }
  }
  v13 = KiSearchForNewThread(a2, 0LL);
  if ( !v13 )
  {
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
      while ( *(_QWORD *)(a2 + 48) );
    }
    v13 = *(_QWORD *)(a2 + 16);
    if ( !v13 )
    {
      v13 = *(_QWORD *)(a2 + 24);
      if ( !KeHeteroSystem )
        goto LABEL_16;
      if ( KeHeteroSystemVirtual )
        goto LABEL_16;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      KiSendHeteroRescheduleIntRequest(a2);
      v53 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v53);
        while ( *(_QWORD *)(a2 + 48) );
      }
      if ( !*(_QWORD *)(a2 + 16) )
      {
LABEL_16:
        if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
        {
          if ( (unsigned __int8)KiIsThreadRankNonZero(v13, a2) )
            v15 = 1;
          else
            v15 = *(_BYTE *)(v13 + 195);
        }
        else
        {
          v15 = *(_BYTE *)(v13 + 195);
        }
        **(_BYTE **)(a2 + 56) = v15;
        v16 = *(_DWORD **)(a2 + 25016);
        if ( v16 )
          *v16 = v15;
        *(_QWORD *)(a2 + 8) = v13;
        if ( *(_BYTE *)(v13 + 388) == 1 )
          *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v13 + 388) = 2;
        goto LABEL_23;
      }
      v13 = *(_QWORD *)(a2 + 16);
    }
    *(_QWORD *)(a2 + 16) = 0LL;
    goto LABEL_16;
  }
LABEL_23:
  if ( v13 != *(_QWORD *)(a2 + 24) && v13 != a1 && *(_BYTE *)(v13 + 113) )
  {
    if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(v13, a2) )
        v35 = 1;
      else
        v35 = *(_BYTE *)(v13 + 195);
    }
    else
    {
      v35 = *(_BYTE *)(v13 + 195);
    }
    **(_BYTE **)(a2 + 56) = v35;
    v36 = *(_DWORD **)(a2 + 25016);
    if ( v36 )
      *v36 = v35;
    v37 = *(_QWORD *)(a2 + 25016);
    v38 = v13 == *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 16) = v13;
    if ( v37 )
      *(_BYTE *)(v37 + 8) = v38;
    if ( *(_BYTE *)(v13 + 388) == 1 )
      *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v13 + 388) = 3;
    v13 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v13;
    if ( *(_BYTE *)(v13 + 388) == 1 )
      *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v13 + 388) = 2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v17 = *(_BYTE *)(a1 + 390);
  if ( a1 == v13 )
  {
    v18 = *(_BYTE *)(v13 + 193) && !*(_WORD *)(v13 + 486) && !v17;
    _disable();
    KiStartThreadCycleAccumulation(a2, v13, 0LL);
    _enable();
    if ( (*(_DWORD *)(v13 + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 0xBu);
      KiInsertDeferredPreemptionApc(a2, v13, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v18 = KiSwapContext(a1, v13, v17);
  }
  v19 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    v39 = (volatile signed __int32 *)(a1 + 256);
    v40 = 0;
    while ( 1 )
    {
      v54 = 0;
      while ( _interlockedbittestandset(v39, 7u) )
      {
        do
          KeYieldProcessorEx(&v54);
        while ( (*v39 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(a1 + 259) & 0xC0) == 0 )
        break;
      v41 = *(unsigned __int8 *)(a1 + 258);
      v42 = *(unsigned int *)(a1 + 312);
      v43 = v41;
      v55 = 0;
      v57 = KiProcessorBlock[v42] + 13952;
      v44 = (volatile signed __int32 *)(v57 + 32 * (v41 + 16));
      while ( _interlockedbittestandset64(v44, 0LL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( *(_QWORD *)v44 );
      }
      if ( *(char *)(a1 + 259) >= 0 )
      {
        v45 = *(_QWORD **)(a1 + 288);
        v46 = v57;
        v47 = *(_QWORD **)(a1 + 296);
        if ( v45[1] != a1 + 288 || *v47 != a1 + 288 )
          __fastfail(3u);
        *v47 = v45;
        v45[1] = v47;
        if ( v47 == v45 )
        {
          *(_DWORD *)(32 * (v43 + 16) + v46 + 28) = -1;
          if ( KiSerializeTimerExpiration )
          {
            v48 = v43 & 0x3F;
            v49 = 8 * (v43 >> 6);
          }
          else
          {
            v48 = *(unsigned __int8 *)(v46 - 13743);
            v49 = v43 << 6;
          }
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(qword_140402288[2 * *(unsigned __int8 *)(v46 - 13744)] + v49),
            v48);
        }
        _InterlockedAnd64((volatile signed __int64 *)v44, 0LL);
        _InterlockedAnd(v39, 0xBFFFFF7F);
        goto LABEL_83;
      }
      _InterlockedAnd64((volatile signed __int64 *)v44, 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v57 + 8LL * (*(_BYTE *)(a1 + 259) & 0x3F)), 0LL) )
      {
        _InterlockedAnd(v39, 0xFFFF7Fu);
LABEL_83:
        v40 = 1;
        goto LABEL_84;
      }
      _InterlockedAnd(v39, 0xFFFFFF7F);
      v56 = 0;
      while ( *(char *)(a1 + 259) < 0 )
        KeYieldProcessorEx(&v56);
    }
    _InterlockedAnd(v39, 0xFFFFFF7F);
LABEL_84:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( !v40 )
      {
LABEL_86:
        *(_BYTE *)(a1 + 481) = 4;
        *(_QWORD *)(a1 + 264) = a1 + 464;
        *(_QWORD *)(a1 + 272) = a1 + 464;
        goto LABEL_27;
      }
      v59 = a1 + 256;
      v60[0] = &v59;
      v60[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v60, 1, 1073872896, 3925, 1538);
    }
    if ( v40 )
      goto LABEL_27;
    goto LABEL_86;
  }
LABEL_27:
  if ( v18 )
  {
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  __writecr8(v17);
  return v19;
}
