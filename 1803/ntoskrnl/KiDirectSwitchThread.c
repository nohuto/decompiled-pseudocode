/*
 * XREFs of KiDirectSwitchThread @ 0x1400399E0
 * Callers:
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x14003A994 (KiScheduleNextForegroundBoost.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     KiGetComparisonRanks @ 0x1400CBC04 (KiGetComparisonRanks.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeReadGuestSchedulerAssistPriority @ 0x1401A5A6C (KeReadGuestSchedulerAssistPriority.c)
 *     KiBeginCounterAccumulation @ 0x14024615C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x14024627C (KiEndCounterAccumulation.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 *     EtwTraceReadyThread @ 0x1402AF168 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // r13
  int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 *v17; // rdi
  __int64 *v18; // r14
  volatile signed __int32 *v19; // rbp
  __int64 *v20; // rcx
  __int64 **v21; // rax
  bool v22; // r14
  unsigned __int64 v23; // rax
  unsigned int v24; // ebp
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  char v28; // r11
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  __int64 v34; // r10
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  char v37; // r11
  __int64 v38; // rcx
  _QWORD *i; // rcx
  unsigned __int64 v40; // r11
  unsigned __int64 p_DpcData; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rdx
  char v46; // al
  bool v47; // zf
  unsigned __int64 v48; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v50; // r15
  _DWORD *SchedulerAssist; // rcx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  unsigned int GuestSchedulerAssistPriority; // edi
  char v56; // r11
  char v57; // bp
  unsigned __int8 v58; // bp
  unsigned int v59; // eax
  char v60; // cl
  unsigned __int8 v61; // dl
  char v62; // r10
  unsigned int v63; // eax
  int v64; // r9d
  int v65; // edi
  struct _KDPC *v66; // r9
  _QWORD *v67; // rdx
  char v68; // r9
  char v69; // dl
  struct _KPRCB *v70; // rdi
  int v71; // r14d
  _DWORD *v72; // rcx
  int v73; // eax
  __int64 v74; // rdx
  int v75; // r11d
  int v76; // edi
  char v77; // al
  struct _KDPC *v78; // rcx
  _QWORD *v79; // rdx
  int v80; // eax
  int v81; // edi
  unsigned __int64 v82; // r10
  unsigned int v83; // edx
  unsigned int v84; // ecx
  __int64 v85; // r9
  int v86; // ecx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // r15
  struct _KDPC *v89; // rcx
  _QWORD *v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned int v93; // ecx
  char v94; // dl
  char IsThreadRankNonZero; // al
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rax
  struct _KPRCB *v99; // rcx
  _DWORD *v100; // rdx
  int v101; // eax
  unsigned __int64 v102; // rcx
  struct _KPRCB *v103; // rcx
  _DWORD *v104; // rdx
  int v105; // eax
  unsigned int ThreadEffectiveRankNonZero; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v108; // [rsp+34h] [rbp-84h] BYREF
  int v109; // [rsp+38h] [rbp-80h]
  int v110; // [rsp+3Ch] [rbp-7Ch] BYREF
  int v111; // [rsp+40h] [rbp-78h] BYREF
  __int64 v112; // [rsp+48h] [rbp-70h]
  __int64 v113; // [rsp+50h] [rbp-68h]
  unsigned __int64 v114; // [rsp+58h] [rbp-60h]
  int v115; // [rsp+60h] [rbp-58h]
  bool v116; // [rsp+C0h] [rbp+8h]
  char v117; // [rsp+C8h] [rbp+10h]
  char v119; // [rsp+D8h] [rbp+20h]

  v117 = a2;
  v4 = *(_QWORD *)(a1 + 11528) - 216LL;
  v5 = a2;
  v6 = *(__int64 **)(a1 + 11528);
  v7 = *v6;
  *(_QWORD *)(a1 + 11528) = *v6;
  if ( *(_QWORD *)(a1 + 16) || (v8 = *(_DWORD *)(v4 + 120), (v8 & 0x20000) == 0) || (v8 & 0x100000) != 0 )
  {
    *v6 = v7;
    *(_QWORD *)(a1 + 11528) = v6;
    return 0;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v4, 1LL, v5);
  v9 = *(_QWORD *)(v4 + 104);
  v10 = *(_QWORD *)(a1 + 8);
  v113 = v9;
  if ( v9 )
  {
    v9 += *(unsigned int *)(a1 + 216);
    v113 = v9;
  }
  ThreadEffectiveRankNonZero = 0;
  v108 = 0;
  if ( v9 )
  {
    ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v4, v9, v5, 1, 0LL);
    if ( ThreadEffectiveRankNonZero )
    {
      v12 = *(_QWORD *)(v10 + 104);
      if ( v12 )
      {
        v13 = *(unsigned int *)(a1 + 216) + v12;
        if ( v13 )
        {
          v108 = KiGetThreadEffectiveRankNonZero(v10, v13, v11, 1, 0LL);
          if ( v108 )
            KiGetComparisonRanks(v9, v14, &ThreadEffectiveRankNonZero, &v108);
        }
      }
    }
  }
  v15 = *(unsigned __int8 *)(v4 + 587);
  v16 = 3;
  v17 = *(__int64 **)(v4 + 208);
  v119 = 0;
  v109 = 1;
  v18 = &v17[6 * v15];
  do
  {
    if ( *((_BYTE *)v17 + 17) < 5u )
    {
      v19 = (volatile signed __int32 *)v17[4];
      KiAcquireKobjectLockSafe(v19);
      if ( *((_BYTE *)v17 + 17) == 4 )
      {
        v20 = (__int64 *)*v17;
        v21 = (__int64 **)v17[1];
        if ( *(__int64 **)(*v17 + 8) != v17 || *v21 != v17 )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = (__int64)v21;
      }
      _InterlockedAnd(v19, 0xFFFFFF7F);
    }
    v17 += 6;
  }
  while ( v17 != v18 );
  v22 = *(_QWORD *)(a1 + 11528) == 0LL;
  v116 = v22;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v23 = __rdtsc();
  v24 = 100;
  v25 = v23 - *(_QWORD *)(a1 + 23488);
  v26 = v25 + *(_QWORD *)(v10 + 72);
  v27 = v25 + *(unsigned int *)(v10 + 80);
  *(_QWORD *)(v10 + 72) = v26;
  *(_QWORD *)(a1 + 23488) = v23;
  v28 = *(_BYTE *)(v10 + 2);
  v114 = v26;
  if ( v27 > 0xFFFFFFFF )
    LODWORD(v27) = -1;
  *(_DWORD *)(v10 + 80) = v27;
  if ( (v28 & 0x3E) != 0 )
  {
    if ( (v28 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v10 + 124) + 23504) += *(_QWORD *)(a1 + 23488)
                                                                       - *(_QWORD *)(a1 + 23496);
      v28 &= ~0x10u;
      *(_QWORD *)(a1 + 23496) = 0LL;
    }
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *(_QWORD *)(v10 + 1976);
      if ( v29 )
      {
        v30 = *(_QWORD *)(a1 + 24176);
        v31 = *(_QWORD *)(a1 + 24184);
        if ( v30 && v31 )
        {
          if ( *(_BYTE *)(v31 + 100) )
          {
            v32 = *(_DWORD *)(v31 + 116);
          }
          else
          {
            v32 = *(_DWORD *)(v31 + 72);
            if ( v32 >= *(_DWORD *)(v30 + 368) )
              v32 = *(_DWORD *)(v30 + 368);
          }
        }
        else
        {
          v32 = 100;
        }
        if ( v32 >= 0x4B )
          v33 = 3;
        else
          v33 = v32 / 0x19;
        v34 = *(unsigned __int8 *)(a1 + 23858);
        *(_QWORD *)(v29 + 8 * (v34 + 2LL * v33)) += v25;
        v35 = *(_DWORD *)(v29 + 192);
        if ( KiTimelineBitmapTime <= v35 )
        {
          v36 = v35 - KiTimelineBitmapTime;
          if ( v36 < 0x20 )
            *(_DWORD *)(v29 + 196) |= 1 << v36;
        }
        else
        {
          LODWORD(v112) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v35 >= 0x20 )
            HIDWORD(v112) = 1;
          else
            HIDWORD(v112) = (*(_DWORD *)(v29 + 196) << (KiTimelineBitmapTime - v35)) | 1;
          *(_QWORD *)(v29 + 192) = v112;
        }
        if ( (*(_DWORD *)(v10 + 120) & 3) == 2 )
          *(_QWORD *)(v29 + 16LL * v33 + 8) += v25;
        if ( *(_QWORD *)(v10 + 1920) )
        {
          *(_QWORD *)(v29 + 8 * (v34 + 16 + 2LL * v33)) += v25;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v10 + 1920) + 1976LL) + 8 * (v34 + 8 + 2LL * v33)),
            v25);
        }
      }
      v28 &= ~0x20u;
    }
    if ( (v28 & 0x40) != 0 )
    {
      KiSetVpThreadSystemWork(a1, 1LL);
      v28 = v37 & 0xBF;
    }
    if ( (v28 & 0x3E) != 0 )
    {
      v38 = *(_QWORD *)(v10 + 104);
      if ( v38 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v38); i; i = (_QWORD *)i[51] )
          *i += v25;
      }
      if ( (*(_BYTE *)(v10 + 2) & 8) != 0
        && (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL) & *(_QWORD *)(v10 + 576)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                              + 136LL) )
      {
        *(_QWORD *)(a1 + 23528) += v25;
      }
      if ( *(_BYTE *)(v10 + 125) )
      {
        if ( (*(_DWORD *)(v10 + 120) & 3) == 2 )
          *(_QWORD *)(a1 + 23544) += v25;
        else
          *(_QWORD *)(a1 + 23536) += v25;
      }
      if ( *(_QWORD *)(v10 + 360) )
        KiEndCounterAccumulation(v10);
    }
  }
  v40 = __rdtsc();
  p_DpcData = v40 - *(_QWORD *)(a1 + 23488);
  *(_QWORD *)(a1 + 23608) += p_DpcData;
  v42 = *(unsigned __int8 *)(v10 + 2);
  if ( (v42 & 0x20) != 0 )
  {
    v43 = *(_QWORD *)(a1 + 24176);
    v44 = *(_QWORD *)(a1 + 24184);
    if ( v43 && v44 )
    {
      if ( *(_BYTE *)(v44 + 100) )
      {
        v24 = *(_DWORD *)(v44 + 116);
      }
      else
      {
        v24 = *(_DWORD *)(v44 + 72);
        if ( v24 >= *(_DWORD *)(v43 + 368) )
          v24 = *(_DWORD *)(v43 + 368);
      }
    }
    if ( v24 < 0x4B )
      v16 = v24 / 0x19;
    v45 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v16));
    *v45 += p_DpcData;
    v42 = *(unsigned __int8 *)(v10 + 2);
  }
  if ( (v42 & 0x40) != 0 )
    KiSetVpThreadSystemWork(a1, 0LL);
  *(_QWORD *)(a1 + 23488) = v40;
  v46 = *(_BYTE *)(v10 + 2);
  if ( (v46 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 23496) = v40;
    v46 = *(_BYTE *)(v10 + 2);
  }
  if ( (v46 & 2) != 0 )
    KiBeginCounterAccumulation(v10, 0LL);
  v47 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v47 )
  {
    LOBYTE(v42) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v42);
  }
  _enable();
  v48 = *(_QWORD *)(v4 + 72);
  CurrentPrcb = KeGetCurrentPrcb();
  v50 = *(_QWORD *)(v10 + 32);
  v110 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v52 = SchedulerAssist[5];
      SchedulerAssist[5] = v52 + 1;
      if ( v52 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v110);
    while ( *(_QWORD *)(v4 + 64) );
    LOBYTE(v53) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v53);
  }
  if ( *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(v4 + 584) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v4 + 576)) != 0LL )
  {
    v54 = *(_DWORD *)(v4 + 120);
    v109 = 0;
    if ( (v54 & 0x400000) != 0 )
    {
      GuestSchedulerAssistPriority = KeReadGuestSchedulerAssistPriority(v4);
      if ( GuestSchedulerAssistPriority != *(char *)(v4 + 195) )
      {
        KiSetBasePriorityAndClearDecrement(v4, 0LL, 0LL);
        KiUpdateThreadPriority(0LL, v4, GuestSchedulerAssistPriority, 0LL);
      }
      v56 = 1;
    }
    else
    {
      v56 = 0;
    }
    if ( *(char *)(v4 + 195) >= 16 )
    {
      v57 = 1;
LABEL_142:
      v70 = KeGetCurrentPrcb();
      v71 = *(char *)(v4 + 195);
      v111 = 0;
      v72 = v70->SchedulerAssist;
      if ( v72 )
      {
        if ( v70->NestingLevel <= 1u )
        {
          v73 = v72[5];
          v72[5] = v73 + 1;
          if ( v73 == -1 && !*((_BYTE *)v72 + 25) && !*((_BYTE *)v72 + 27) )
            KiPerformUnboostKick(v70);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        KiSetVpThreadSpinLockCount(v70, 0LL);
        do
          KeYieldProcessorEx(&v111);
        while ( *(_QWORD *)(a1 + 48) );
        LOBYTE(v74) = 1;
        KiSetVpThreadSpinLockCount(v70, v74);
      }
      v81 = *(char *)(v10 + 195);
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_217;
      if ( ThreadEffectiveRankNonZero <= v108 && (ThreadEffectiveRankNonZero != v108 || v71 > v81) )
      {
        *(_BYTE *)(v10 + 565) = 1;
LABEL_204:
        *(_BYTE *)(v4 + 565) = 0;
        *(_DWORD *)(v4 + 536) = *(_DWORD *)(a1 + 36);
        v119 = 1;
        if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
        {
          IsThreadRankNonZero = KiIsThreadRankNonZero(v4, a1);
          v94 = 1;
          if ( !IsThreadRankNonZero )
            v94 = *(_BYTE *)(v4 + 195);
        }
        else
        {
          v94 = *(_BYTE *)(v4 + 195);
        }
        **(_BYTE **)(a1 + 56) = v94;
        v96 = *(_QWORD *)(a1 + 25016);
        if ( v96 )
        {
          v97 = KiVpThreadSystemWorkPriority;
          if ( v4 != *(_QWORD *)(a1 + 24) )
            v97 = v94;
          *(_DWORD *)v96 = v97;
          v96 = *(_QWORD *)(a1 + 25016);
        }
        v98 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = v4;
        if ( v96 )
          *(_BYTE *)(v96 + 24) = v4 == v98;
        if ( *(_BYTE *)(v4 + 388) == 1 )
          *(_DWORD *)(v4 + 132) = *(_DWORD *)(v4 + 132) - *(_DWORD *)(v4 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v4 + 388) = 3;
        goto LABEL_217;
      }
      v82 = v114;
      v83 = 1 << v71;
      v84 = *(_DWORD *)(*(_QWORD *)(a1 + 24904) + 8LL) | *(_DWORD *)(a1 + 22808);
      v85 = (unsigned int)KiDirectQuantumTarget;
      p_DpcData = ThreadEffectiveRankNonZero;
      if ( (unsigned int)KiDirectQuantumTarget + v114 <= v50 && !ThreadEffectiveRankNonZero )
      {
        if ( v81 >= 16 )
        {
          v81 = 15;
          if ( v71 >= 16 )
            v81 = v71;
        }
        v86 = v83 & v84;
        if ( v86 )
          v87 = (unsigned int)KiDirectQuantumTarget + v48;
        else
          v87 = v50 + v48 - v114;
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 5u);
        v88 = v50 - v85;
        *(_QWORD *)(v4 + 32) = v87;
        v57 = 0;
        if ( v86 )
          v82 = v88;
        *(_QWORD *)(v10 + 32) = v82;
        if ( a3 && v71 != v81 )
        {
          v89 = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (char)v81 > *(char *)(v4 + 195) )
          {
            if ( *(_BYTE *)(v4 + 793) )
            {
              v90 = (_QWORD *)(v4 + 1376);
              if ( *(_QWORD *)(v4 + 1376) == 1LL )
              {
                p_DpcData = (unsigned __int64)&v89[401].DpcData;
                if ( v89 != (struct _KDPC *)-25720LL )
                {
                  *v90 = *(_QWORD *)p_DpcData;
                  *(_QWORD *)p_DpcData = v90;
                  _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
                  KiAbQueueAutoBoostDpc(v89);
                }
              }
            }
          }
          v47 = (*(_DWORD *)(v4 + 120) & 0x400000) == 0;
          *(_BYTE *)(v4 + 195) = v81;
          if ( !v47 )
            *(_DWORD *)(*(_QWORD *)(v4 + 1512) + 4LL) = (char)v81;
          *(_BYTE *)(v4 + 564) += 16 * (v81 - v71);
        }
        goto LABEL_204;
      }
      if ( v83 > v84 )
      {
        if ( !ThreadEffectiveRankNonZero )
          goto LABEL_204;
        if ( v84 <= 1 )
        {
          p_DpcData = *(unsigned int *)(*(_QWORD *)(v113 + 416) + 116LL);
          v91 = *(_QWORD *)(a1 + 22904);
          if ( (v91 & 1) != 0 )
          {
            if ( v91 == 1 )
              goto LABEL_204;
            v92 = v91 ^ ((a1 + 22896) | 1);
          }
          else
          {
            v92 = *(_QWORD *)(a1 + 22904);
          }
          if ( !v92 )
            goto LABEL_204;
          v93 = *(_DWORD *)(v92 + 28);
          if ( v93 == (_DWORD)p_DpcData )
          {
            if ( *(unsigned __int16 *)(v92 + 26) < v83 )
              goto LABEL_204;
          }
          else if ( v93 > (unsigned int)p_DpcData )
          {
            goto LABEL_204;
          }
        }
      }
LABEL_217:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v99 = KeGetCurrentPrcb();
      v100 = v99->SchedulerAssist;
      if ( v100 )
      {
        if ( v99->NestingLevel <= 1u )
        {
          v101 = v100[5] - 1;
          v100[5] = v101;
          if ( !v101 )
          {
            p_DpcData = *((unsigned __int8 *)v100 + 27);
            if ( !*((_BYTE *)v100 + 25) && !(_BYTE)p_DpcData )
              KiPerformUnboostKick(v99);
          }
        }
      }
      if ( v57 )
      {
        v102 = v48 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
        if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
        *(_QWORD *)(v4 + 32) = v102;
      }
      v22 = v116;
      goto LABEL_228;
    }
    v58 = 0;
    v59 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436);
    if ( v48 >= *(_QWORD *)(v4 + 32) )
    {
      v58 = 4;
      if ( v59 < 2 )
        v58 = 5;
    }
    if ( v58 >= 4u || *(char *)(v4 + 563) >= 14 || !*(_BYTE *)(v4 + 564) && v59 >= 2 )
    {
      p_DpcData = *(unsigned __int8 *)(v4 + 195);
      v58 |= 8u;
      v60 = p_DpcData;
      if ( (char)p_DpcData < 16 )
      {
        v61 = *(_BYTE *)(v4 + 564);
        v62 = *(_BYTE *)(v4 + 563);
        if ( (char)(p_DpcData - (v61 >> 4) - (v61 & 0xF) - 1) >= v62 )
          v62 = p_DpcData - (*(_BYTE *)(v4 + 564) >> 4) - (v61 & 0xF) - 1;
        if ( v61 )
        {
          if ( (v61 & 0xF) != 0 )
          {
            LOBYTE(p_DpcData) = *(_BYTE *)(v4 + 195);
            *(_DWORD *)(v4 + 1424) = MEMORY[0xFFFFF78000000320];
          }
          *(_BYTE *)(v4 + 564) = 0;
        }
        v63 = *(_DWORD *)(v4 + 1408);
        v60 = p_DpcData;
        p_DpcData = (unsigned __int8)v62;
        if ( v63 )
        {
          _BitScanReverse((unsigned int *)&v64, v63);
          v115 = v64;
          if ( v62 < v64 )
            p_DpcData = (unsigned __int8)v64;
        }
      }
      v65 = (char)p_DpcData;
      if ( !v56 )
      {
        v66 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (char)p_DpcData > v60 )
        {
          if ( *(_BYTE *)(v4 + 793) )
          {
            v67 = (_QWORD *)(v4 + 1376);
            if ( *(_QWORD *)(v4 + 1376) == 1LL )
            {
              p_DpcData = (unsigned __int64)&v66[401].DpcData;
              if ( v66 != (struct _KDPC *)-25720LL )
              {
                *v67 = *(_QWORD *)p_DpcData;
                *(_QWORD *)p_DpcData = v67;
                _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
                KiAbQueueAutoBoostDpc(v66);
              }
            }
          }
        }
        v47 = (*(_DWORD *)(v4 + 120) & 0x400000) == 0;
        *(_BYTE *)(v4 + 195) = v65;
        if ( !v47 )
          *(_DWORD *)(*(_QWORD *)(v4 + 1512) + 4LL) = v65;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 544) + 1466LL) == 2 )
      v58 |= 2u;
    if ( (v58 & 1) != 0 )
      goto LABEL_137;
    if ( (*(_DWORD *)(v4 + 120) & 8) != 0 )
      goto LABEL_137;
    v68 = *(_BYTE *)(v4 + 195);
    if ( v68 <= 0 )
      goto LABEL_137;
    p_DpcData = *(unsigned __int8 *)(v4 + 564);
    if ( (_BYTE)p_DpcData )
    {
      if ( (p_DpcData & 0xF0) != 0 || (v69 = v58 >> 1, (v58 & 2) == 0) )
      {
LABEL_137:
        if ( (v58 & 6) == 6 && (*(_DWORD *)(v4 + 120) & 8) == 0 && *(char *)(v4 + 195) > 0 )
          KiScheduleNextForegroundBoost(v4);
LABEL_141:
        v57 = v58 >> 3;
        goto LABEL_142;
      }
    }
    else
    {
      v69 = v58 >> 1;
    }
    v75 = *(char *)(v4 + 563);
    v76 = v75 + v117;
    if ( (v69 & 1) != 0 )
      v76 += (char)PsPrioritySeparation;
    if ( v76 >= 16 )
      v76 = 15;
    if ( v76 > v68 )
    {
      v77 = 0;
      if ( v76 > v75 + v117 )
        v77 = v76 - v117 - v75;
      *(_BYTE *)(v4 + 564) = p_DpcData ^ (p_DpcData ^ v77) & 0xF;
      v78 = (struct _KDPC *)KeGetCurrentPrcb();
      if ( (char)v76 > v68 )
      {
        if ( *(_BYTE *)(v4 + 793) )
        {
          v79 = (_QWORD *)(v4 + 1376);
          if ( *(_QWORD *)(v4 + 1376) == 1LL )
          {
            p_DpcData = (unsigned __int64)&v78[401].DpcData;
            if ( v78 != (struct _KDPC *)-25720LL )
            {
              *v79 = *(_QWORD *)p_DpcData;
              *(_QWORD *)p_DpcData = v79;
              _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
              KiAbQueueAutoBoostDpc(v78);
            }
          }
        }
      }
      v80 = *(_DWORD *)(v4 + 120);
      *(_BYTE *)(v4 + 195) = v76;
      if ( (v80 & 0x400000) != 0 )
        *(_DWORD *)(*(_QWORD *)(v4 + 1512) + 4LL) = (char)v76;
    }
    goto LABEL_141;
  }
LABEL_228:
  *(_QWORD *)(v4 + 64) = 0LL;
  v103 = KeGetCurrentPrcb();
  v104 = v103->SchedulerAssist;
  if ( v104 )
  {
    if ( v103->NestingLevel <= 1u )
    {
      v105 = v104[5] - 1;
      v104[5] = v105;
      if ( !v105 )
      {
        p_DpcData = *((unsigned __int8 *)v104 + 27);
        if ( !*((_BYTE *)v104 + 25) && !(_BYTE)p_DpcData )
          KiPerformUnboostKick(v103);
      }
    }
  }
  if ( !v119 )
  {
    *(_BYTE *)(v4 + 566) = v109;
    *(_BYTE *)(v4 + 567) = v117;
    KiDeferredReadyThread(a1, v4, p_DpcData);
  }
  return v22;
}
