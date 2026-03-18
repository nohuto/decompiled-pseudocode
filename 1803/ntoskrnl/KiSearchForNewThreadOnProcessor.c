/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x1400F7A90
 * Callers:
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x1400A7380 (KiCheckThreadAffinity.c)
 *     KiFindReadyThread @ 0x1400A74E0 (KiFindReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400A7660 (KiCheckForMaxOverQuotaScb.c)
 *     KiGroupSchedulingMoveThread @ 0x1400A9020 (KiGroupSchedulingMoveThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiMayStealStandbyThread @ 0x1400F8000 (KiMayStealStandbyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14014C8CC (KiRemoveThreadFromReadyQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140248000 (KiConvertDynamicHeteroPolicy.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  struct _KPRCB *v7; // rbp
  __int64 v8; // rdx
  struct _KPRCB *v9; // rbp
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  unsigned int v13; // r15d
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v15; // r15
  unsigned int v16; // ebp
  _DWORD *v17; // rcx
  __int64 ReadyThread; // rbp
  char v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // r14d
  __int64 v22; // r9
  int v23; // r13d
  unsigned int v24; // eax
  _QWORD **v25; // r15
  _QWORD *v26; // r12
  unsigned int v27; // eax
  __int64 v28; // r8
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  char v34; // al
  char v35; // bl
  int *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  int v53; // eax
  __int64 v54; // r8
  int v55; // eax
  int v56; // ecx
  unsigned int v57; // [rsp+20h] [rbp-58h]
  __int64 v58; // [rsp+28h] [rbp-50h]
  __int64 v59; // [rsp+30h] [rbp-48h]
  int v60; // [rsp+88h] [rbp+10h] BYREF
  int v61; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v4 )
      {
        if ( !*(_DWORD *)(v4 + 22808) && !(unsigned __int8)KiMayStealStandbyThread(v4, a1) && !*(_QWORD *)(v4 + 22896) )
          return 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = a1;
        v12 = v4;
        if ( a1 <= v4 )
        {
          v11 = v4;
          v12 = a1;
        }
        v13 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = SchedulerAssist[5];
            SchedulerAssist[5] = v42 + 1;
            if ( v42 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
        {
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v13);
          }
          while ( *(_QWORD *)(v12 + 48) );
          LOBYTE(v41) = 1;
          KiSetVpThreadSpinLockCount(CurrentPrcb, v41);
        }
        if ( v12 != v11 )
        {
          v15 = KeGetCurrentPrcb();
          v16 = 0;
          v17 = v15->SchedulerAssist;
          if ( v17 )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v43 = v17[5];
              v17[5] = v43 + 1;
              if ( v43 == -1 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
                KiPerformUnboostKick(v15);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
          {
            KiSetVpThreadSpinLockCount(v15, 0LL);
            do
            {
              if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v16);
            }
            while ( *(_QWORD *)(v11 + 48) );
            LOBYTE(v40) = 1;
            KiSetVpThreadSpinLockCount(v15, v40);
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v7 = KeGetCurrentPrcb();
        v60 = 0;
        while ( 1 )
        {
          LOBYTE(a2) = 1;
          KiSetVpThreadSpinLockCount(v7, a2);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v7, 0LL);
          do
            KeYieldProcessorEx(&v60);
          while ( *(_QWORD *)(a1 + 48) );
        }
        v9 = KeGetCurrentPrcb();
        v61 = 0;
        while ( 1 )
        {
          LOBYTE(v8) = 1;
          KiSetVpThreadSpinLockCount(v9, v8);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v9, 0LL);
          do
            KeYieldProcessorEx(&v61);
          while ( *(_QWORD *)a3 );
        }
      }
      ReadyThread = *(_QWORD *)(a1 + 16);
      v19 = 0;
      if ( ReadyThread )
        break;
      if ( !a3 )
      {
        if ( (unsigned __int8)KiMayStealStandbyThread(v4, a1) && KiCheckThreadAffinity(*(_QWORD *)(v4 + 16)) )
        {
          ReadyThread = *(_QWORD *)(v4 + 16);
          if ( *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(ReadyThread + 584)
            && (*(_QWORD *)(a1 + 200) & *(_QWORD *)(ReadyThread + 576)) != 0LL )
          {
            KiSelectNextThread((struct _KPRCB *)v4, 0LL);
            *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36);
            if ( ReadyThread )
            {
LABEL_38:
              _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
              v29 = KeGetCurrentPrcb();
              v30 = v29->SchedulerAssist;
              if ( v30 )
              {
                if ( v29->NestingLevel <= 1u )
                {
                  v53 = v30[5] - 1;
                  v30[5] = v53;
                  if ( !v53 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
                    KiPerformUnboostKick(v29);
                }
              }
              goto LABEL_39;
            }
          }
          else
          {
            ReadyThread = 0LL;
          }
        }
        v21 = *(_DWORD *)(v4 + 22808);
        if ( v21 )
        {
          v22 = *(_QWORD *)(a1 + 200);
          v23 = 64;
          v59 = v22;
LABEL_27:
          _BitScanReverse(&v24, v21);
          v21 ^= 1 << v24;
          v25 = (_QWORD **)(v4 + 22912 + 16LL * v24);
          v57 = v24;
          v26 = *v25;
          while ( 1 )
          {
            v27 = *((unsigned __int8 *)v26 - 91);
            ReadyThread = (__int64)(v26 - 27);
            v28 = v26[45];
            v58 = v28;
            if ( v27 >= 5 )
            {
              v27 = KiConvertDynamicHeteroPolicy(v26 - 27, v20, a1);
              v28 = v58;
              v22 = v59;
            }
            if ( v27 )
            {
              v44 = *(_QWORD *)(a1 + 192);
              v45 = 3 * ((int)v27 + 8LL);
              v20 = v28 & *(_QWORD *)(v44 + 8 * v45);
              if ( v20 )
                v28 &= *(_QWORD *)(v44 + 8 * v45);
            }
            if ( (v28 & v22) != 0 )
            {
              v46 = *(_QWORD *)(ReadyThread + 104);
              if ( !v46 )
                break;
              v47 = *(unsigned int *)(a1 + 216) + v46;
              if ( !v47 || !KiCheckForMaxOverQuotaScb(v47) )
                break;
            }
            v26 = (_QWORD *)*v26;
            --v23;
            if ( v26 == v25 || !v23 )
            {
              if ( !v21 || !v23 )
              {
                ReadyThread = 0LL;
                goto LABEL_35;
              }
              goto LABEL_27;
            }
          }
          KiRemoveThreadFromReadyQueue(v4, v26, v57);
          *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36);
        }
        else
        {
LABEL_35:
          if ( !KiPerfIsoEnabled
            || (v48 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL),
                (unsigned int)((0x101010101010101LL
                              * (((v48 & 0x3333333333333333LL)
                                + ((v48 >> 2) & 0x3333333333333333LL)
                                + (((v48 & 0x3333333333333333LL) + ((v48 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
            && ((v49 = *(_QWORD *)(a1 + 200), v50 = *(_QWORD *)(a1 + 24920), v49 == v50)
             || (v51 = v50 & ~v49, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v51) != 0)
             || (_BitScanForward64(&v52, v51),
                 (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                                  + (int)v52]]
                            + 236) & 0x10) != 0)) )
          {
            ReadyThread = KiGroupSchedulingMoveThread(a1, v4, v4 + 22896);
          }
        }
        v19 = 0;
        goto LABEL_38;
      }
      if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) != 0 )
        ReadyThread = (__int64)KiFindReadyThread(a1, 0LL, a3, *(_DWORD *)(a3 + 8) & 0xFFFFFFFE);
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
LABEL_39:
      if ( !ReadyThread )
      {
        v31 = *(_QWORD *)(a1 + 25016);
        if ( v31 )
          *(_BYTE *)(v31 + 24) = 1;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        if ( v33 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v55 = v33[5] - 1;
            v33[5] = v55;
            if ( !v55 && !*((_BYTE *)v33 + 25) && !*((_BYTE *)v33 + 27) )
              KiPerformUnboostKick(v32);
          }
        }
        return ReadyThread;
      }
      if ( *(_QWORD *)(ReadyThread + 568) == KiCpuSetSequence || (*(_DWORD *)(ReadyThread + 116) & 8) != 0 )
      {
        v34 = 3;
        v35 = 1;
        goto LABEL_46;
      }
      *(_BYTE *)(ReadyThread + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      KiDeferredReadyThread(a1, ReadyThread, v54);
    }
    if ( a3 )
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  v35 = 1;
  v19 = 1;
  v34 = 1;
LABEL_46:
  if ( (v34 & 2) != 0 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) != 0 )
    {
      if ( !KiIsThreadRankNonZero(ReadyThread, (struct _KPRCB *)a1) )
        v35 = *(_BYTE *)(ReadyThread + 195);
    }
    else
    {
      v35 = *(_BYTE *)(ReadyThread + 195);
    }
    **(_BYTE **)(a1 + 56) = v35;
    v36 = *(int **)(a1 + 25016);
    if ( v36 )
    {
      v56 = KiVpThreadSystemWorkPriority;
      if ( ReadyThread != *(_QWORD *)(a1 + 24) )
        v56 = v35;
      *v36 = v56;
    }
  }
  *(_QWORD *)(a1 + 8) = ReadyThread;
  if ( *(_BYTE *)(ReadyThread + 388) == 1 )
    *(_DWORD *)(ReadyThread + 132) = *(_DWORD *)(ReadyThread + 132)
                                   - *(_DWORD *)(ReadyThread + 436)
                                   + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(ReadyThread + 388) = 2;
  if ( !v19 )
  {
    v37 = *(unsigned __int8 *)(a1 + 35);
    v38 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (v37 & 1) != 0 )
      __fastfail(0x21u);
    v39 = v37 + 1;
    *(_BYTE *)(a1 + 35) = v39;
    if ( v39 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v38, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v38 + 16), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 8), ~*(_QWORD *)(a1 + 24920));
  }
  return ReadyThread;
}
