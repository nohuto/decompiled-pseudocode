/*
 * XREFs of KiSwapThread @ 0x1400F6B40
 * Callers:
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x1400AA560 (KiInSwapSingleProcess.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400439A8 (KiInsertDeferredPreemptionApc.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400A8494 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1400B1940 (KiComputeGroupSchedulingRank.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1400BEE64 (KiCheckMaxOverQuotaTransition.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceContextSwap @ 0x140172870 (EtwTraceContextSwap.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x14024627C (KiEndCounterAccumulation.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402487EC (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  char v7; // r11
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int v21; // ecx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v24; // rsi
  volatile signed __int64 *v25; // rbp
  __int64 v26; // rsi
  struct _KPRCB *v27; // rsi
  unsigned int v28; // ebp
  _DWORD *v29; // rcx
  int v30; // ecx
  int *v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  unsigned __int8 v34; // bp
  char v35; // r14
  __int64 v36; // rdi
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rsi
  char v41; // r12
  unsigned int v42; // r13d
  struct _KPRCB *v43; // rdx
  __int64 v44; // r11
  __int64 v45; // rax
  _DWORD *v46; // rcx
  volatile signed __int32 *v47; // r15
  struct _KPRCB *v48; // rsi
  _QWORD *v49; // rcx
  __int64 v50; // r10
  _QWORD *v51; // rax
  __int64 v52; // r8
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r9
  __int64 v57; // rcx
  _QWORD *i; // rcx
  int v59; // r14d
  __int64 v60; // rdx
  char v61; // r11
  int v62; // eax
  int v63; // eax
  struct _KPRCB *v64; // rbp
  int v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned int v68; // [rsp+30h] [rbp-98h]
  __int64 v69; // [rsp+30h] [rbp-98h]
  int v70; // [rsp+38h] [rbp-90h] BYREF
  int v71; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v72; // [rsp+40h] [rbp-88h] BYREF
  int v73; // [rsp+44h] [rbp-84h] BYREF
  int v74; // [rsp+48h] [rbp-80h] BYREF
  __int64 v75; // [rsp+50h] [rbp-78h]
  __int64 v76; // [rsp+58h] [rbp-70h]
  struct _KPRCB *v77; // [rsp+60h] [rbp-68h]
  __int64 v78; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v79[2]; // [rsp+70h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1u, 0);
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
      v8 = *(_QWORD *)(a1 + 1976);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a2 + 24176);
        v10 = *(_QWORD *)(a2 + 24184);
        if ( v9 && v10 )
        {
          if ( *(_BYTE *)(v10 + 100) )
          {
            v11 = *(_DWORD *)(v10 + 116);
          }
          else
          {
            v11 = *(_DWORD *)(v10 + 72);
            if ( v11 >= *(_DWORD *)(v9 + 368) )
              v11 = *(_DWORD *)(v9 + 368);
          }
        }
        else
        {
          v11 = 100;
        }
        if ( v11 < 0x4B )
          v12 = v11 / 0x19;
        else
          v12 = 3;
        v13 = *(unsigned __int8 *)(a2 + 23858);
        v14 = v12;
        v15 = v13 + 2LL * v12;
        v16 = *(_QWORD *)(v8 + 8 * v15);
        v17 = (_QWORD *)(v8 + 8 * v15);
        v18 = KiTimelineBitmapTime;
        *v17 = v5 + v16;
        v19 = *(_DWORD *)(v8 + 192);
        if ( v18 > v19 )
        {
          LODWORD(v69) = v18;
          if ( v18 - v19 >= 0x20 )
            HIDWORD(v69) = 1;
          else
            HIDWORD(v69) = (*(_DWORD *)(v8 + 196) << (v18 - v19)) | 1;
          *(_QWORD *)(v8 + 192) = v69;
        }
        else
        {
          v20 = v19 - v18;
          if ( v20 < 0x20 )
            *(_DWORD *)(v8 + 196) |= 1 << v20;
        }
        if ( (*(_DWORD *)(a1 + 120) & 3) == 2 )
          *(_QWORD *)(16 * v14 + v8 + 8) += v5;
        if ( *(_QWORD *)(a1 + 1920) )
        {
          *(_QWORD *)(v8 + 8 * (v13 + 16 + 2 * v14)) += v5;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1920) + 1976LL) + 8 * (v13 + 8 + 2 * v14)),
            v5);
        }
      }
      v7 &= ~0x20u;
    }
    if ( (v7 & 0x40) != 0 )
    {
      KiSetVpThreadSystemWork(a2, 1LL);
      v7 = v61 & 0xBF;
    }
    if ( (v7 & 0x3E) != 0 )
    {
      v57 = *(_QWORD *)(a1 + 104);
      if ( v57 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v57); i; i = (_QWORD *)i[51] )
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
  v21 = (*(_DWORD *)(a1 + 80) >> 1) + (*(_DWORD *)(a1 + 84) >> 1);
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v21;
  CurrentPrcb = KeGetCurrentPrcb();
  v70 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v62 = SchedulerAssist[5];
      SchedulerAssist[5] = v62 + 1;
      if ( v62 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v70);
    while ( *(_QWORD *)(a2 + 48) );
    KiSetVpThreadSpinLockCount(CurrentPrcb, 1LL);
  }
  v24 = *(_QWORD *)(a1 + 104);
  v76 = v24;
  v25 = (volatile signed __int64 *)v24;
  if ( v24 )
    v24 += *(unsigned int *)(a2 + 216);
  if ( v24 )
  {
    v59 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v24 + 112) & 4) != 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(v24, v25) )
        {
          if ( (*(_BYTE *)(v24 + 112) & 1) != 0 )
            KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a2, v24, 1);
        }
        else if ( *(_QWORD *)v24 >= *(_QWORD *)(v24 + 24) && (*(_BYTE *)(v24 + 112) & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank((__int64)v25, v24, a2);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank((__int64)v25, (struct _KPRCB *)a2, v24);
      }
      v59 += *(_DWORD *)(v24 + 116);
      v24 = *(_QWORD *)(v24 + 408);
      if ( !v24 )
        break;
      v25 = (volatile signed __int64 *)(v24 - *(unsigned int *)(a2 + 216));
      v76 = (__int64)v25;
    }
  }
  v26 = KiSearchForNewThread(a2, 0LL);
  if ( !v26 )
  {
    v27 = KeGetCurrentPrcb();
    v28 = 0;
    v29 = v27->SchedulerAssist;
    if ( v29 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v63 = v29[5];
        v29[5] = v63 + 1;
        if ( v63 == -1 && !*((_BYTE *)v29 + 25) && !*((_BYTE *)v29 + 27) )
          KiPerformUnboostKick(v27);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      KiSetVpThreadSpinLockCount(v27, 0LL);
      do
      {
        if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v28);
      }
      while ( *(_QWORD *)(a2 + 48) );
      KiSetVpThreadSpinLockCount(v27, 1LL);
    }
    v26 = *(_QWORD *)(a2 + 16);
    if ( !v26 )
    {
      v26 = *(_QWORD *)(a2 + 24);
      if ( !KeHeteroSystem )
        goto LABEL_38;
      if ( KeHeteroSystemVirtual )
        goto LABEL_38;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      KiSendHeteroRescheduleIntRequest(a2);
      v64 = KeGetCurrentPrcb();
      v71 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount(v64, 1LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v64, 0LL);
        do
          KeYieldProcessorEx(&v71);
        while ( *(_QWORD *)(a2 + 48) );
      }
      if ( !*(_QWORD *)(a2 + 16) )
      {
LABEL_38:
        if ( (*(_BYTE *)(v26 + 2) & 4) != 0 )
        {
          if ( KiIsThreadRankNonZero(v26, (struct _KPRCB *)a2) )
            LOBYTE(v30) = 1;
          else
            LOBYTE(v30) = *(_BYTE *)(v26 + 195);
        }
        else
        {
          LOBYTE(v30) = *(_BYTE *)(v26 + 195);
        }
        **(_BYTE **)(a2 + 56) = v30;
        v31 = *(int **)(a2 + 25016);
        if ( v31 )
        {
          if ( v26 == *(_QWORD *)(a2 + 24) )
            v30 = KiVpThreadSystemWorkPriority;
          else
            v30 = (char)v30;
          *v31 = v30;
        }
        *(_QWORD *)(a2 + 8) = v26;
        if ( *(_BYTE *)(v26 + 388) == 1 )
          *(_DWORD *)(v26 + 132) = *(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v26 + 388) = 2;
        goto LABEL_44;
      }
      v26 = *(_QWORD *)(a2 + 16);
    }
    *(_QWORD *)(a2 + 16) = 0LL;
    goto LABEL_38;
  }
LABEL_44:
  if ( v26 != *(_QWORD *)(a2 + 24) && v26 != a1 && *(_BYTE *)(v26 + 113) )
  {
    if ( (*(_BYTE *)(v26 + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(v26, (struct _KPRCB *)a2) )
        LOBYTE(v38) = 1;
      else
        LOBYTE(v38) = *(_BYTE *)(v26 + 195);
    }
    else
    {
      LOBYTE(v38) = *(_BYTE *)(v26 + 195);
    }
    **(_BYTE **)(a2 + 56) = v38;
    v39 = *(_QWORD *)(a2 + 25016);
    if ( v39 )
    {
      if ( v26 == *(_QWORD *)(a2 + 24) )
        v38 = KiVpThreadSystemWorkPriority;
      else
        v38 = (char)v38;
      *(_DWORD *)v39 = v38;
      v39 = *(_QWORD *)(a2 + 25016);
    }
    *(_QWORD *)(a2 + 16) = v26;
    if ( v39 )
      *(_BYTE *)(v39 + 24) = v26 == *(_QWORD *)(a2 + 24);
    if ( *(_BYTE *)(v26 + 388) == 1 )
      *(_DWORD *)(v26 + 132) = *(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v26 + 388) = 3;
    v26 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v26;
    if ( *(_BYTE *)(v26 + 388) == 1 )
      *(_DWORD *)(v26 + 132) = *(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v26 + 388) = 2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v32 = KeGetCurrentPrcb();
  v33 = v32->SchedulerAssist;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      v65 = v33[5] - 1;
      v33[5] = v65;
      if ( !v65 && !*((_BYTE *)v33 + 25) && !*((_BYTE *)v33 + 27) )
        KiPerformUnboostKick(v32);
    }
  }
  v34 = *(_BYTE *)(a1 + 390);
  if ( a1 == v26 )
  {
    v35 = *(_BYTE *)(v26 + 193) && !*(_WORD *)(v26 + 486) && !v34;
    _disable();
    KiStartThreadCycleAccumulation(a2, v26, 0);
    _enable();
    if ( (*(_DWORD *)(v26 + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v26 + 120), 0xBu);
      KiInsertDeferredPreemptionApc(a2, v26, 0);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v35 = KiSwapContext(a1, v26, v34);
  }
  v36 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    v40 = a1 + 256;
    v41 = 0;
    v42 = -129;
    while ( 1 )
    {
      v72 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v40, 7u) )
      {
        do
          KeYieldProcessorEx(&v72);
        while ( (*(_DWORD *)v40 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(v40 + 3) & 0xC0) == 0 )
        break;
      v43 = KeGetCurrentPrcb();
      v44 = *(unsigned __int8 *)(v40 + 2);
      v45 = *(unsigned int *)(v40 + 56);
      v68 = *(unsigned __int8 *)(v40 + 2);
      v77 = v43;
      v73 = 0;
      v46 = v43->SchedulerAssist;
      v47 = (volatile signed __int32 *)(KiProcessorBlock[v45] + 13952 + 32 * (v44 + 16));
      v75 = KiProcessorBlock[v45] + 13952;
      if ( v46 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v66 = v46[5];
          v46[5] = v66 + 1;
          if ( v66 == -1 && !*((_BYTE *)v46 + 25) && !*((_BYTE *)v46 + 27) )
            KiPerformUnboostKick(v43);
        }
      }
      v48 = v77;
      while ( _interlockedbittestandset64(v47, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v48, 0LL);
        do
          KeYieldProcessorEx(&v73);
        while ( *(_QWORD *)v47 );
        LOBYTE(v60) = 1;
        KiSetVpThreadSpinLockCount(v48, v60);
      }
      v40 = a1 + 256;
      if ( *(char *)(a1 + 259) >= 0 )
      {
        v49 = *(_QWORD **)(a1 + 288);
        v50 = v75;
        v51 = *(_QWORD **)(a1 + 296);
        v52 = v75 + 32 * (v68 + 16LL);
        if ( v49[1] != a1 + 288 || *v51 != a1 + 288 )
          __fastfail(3u);
        *v51 = v49;
        v49[1] = v51;
        if ( v51 == v49 )
        {
          *(_DWORD *)(v52 + 28) = -1;
          if ( KiSerializeTimerExpiration )
          {
            v55 = v68 & 0x3F;
            v56 = 8LL * (v68 >> 6);
          }
          else
          {
            v55 = *(unsigned __int8 *)(v50 - 13743);
            v56 = (unsigned __int64)v68 << 6;
          }
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(qword_14044D448[2 * *(unsigned __int8 *)(v50 - 13744)] + v56),
            v55);
        }
        _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
        v53 = KeGetCurrentPrcb();
        v54 = v53->SchedulerAssist;
        if ( v54 )
        {
          if ( v53->NestingLevel <= 1u )
          {
            v67 = v54[5] - 1;
            v54[5] = v67;
            if ( !v67 && !*((_BYTE *)v54 + 25) && !*((_BYTE *)v54 + 27) )
              KiPerformUnboostKick(v53);
          }
        }
        v42 = -1073741953;
        goto LABEL_76;
      }
      _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v75 + 8LL * (*(_BYTE *)(a1 + 259) & 0x3F)), 0LL) )
      {
        v42 = 16777087;
LABEL_76:
        v41 = 1;
        break;
      }
      _InterlockedAnd((volatile signed __int32 *)v40, 0xFFFFFF7F);
      v74 = 0;
      while ( *(char *)(a1 + 259) < 0 )
        KeYieldProcessorEx(&v74);
    }
    _InterlockedAnd((volatile signed __int32 *)v40, v42);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( !v41 )
        goto LABEL_91;
      v78 = v40;
      v79[0] = &v78;
      v79[1] = 8LL;
      EtwTraceKernelEvent((int)v79, 1, 0x40020000u, 3925, 1538);
    }
    if ( v41 )
      goto LABEL_49;
LABEL_91:
    *(_BYTE *)(a1 + 481) = 4;
    *(_QWORD *)(a1 + 264) = a1 + 464;
    *(_QWORD *)(a1 + 272) = a1 + 464;
  }
LABEL_49:
  if ( v35 )
  {
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  __writecr8(v34);
  return v36;
}
