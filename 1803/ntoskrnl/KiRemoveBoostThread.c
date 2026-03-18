/*
 * XREFs of KiRemoveBoostThread @ 0x1400EE080
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x14007BCF4 (KeSetEventBoostPriorityEx.c)
 *     KiCompleteDirectSwitchThread @ 0x140084F38 (KiCompleteDirectSwitchThread.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeRemovePriorityBoost @ 0x14023FEC4 (KeRemovePriorityBoost.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v5; // esi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v7; // dl
  char v8; // r8
  char v9; // cl
  char v10; // bp
  char v11; // dl
  unsigned int v12; // eax
  char v13; // si
  char v14; // r14
  struct _KPRCB *v15; // r15
  _DWORD *v16; // rcx
  char v17; // r12
  __int64 ready; // rax
  __int64 v19; // r15
  struct _KDPC *v20; // rcx
  int *v21; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // r8
  __int64 v27; // rdx
  int v28; // edx
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  PVOID *v34; // rdx
  PVOID *p_DpcData; // r8
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // [rsp+68h] [rbp+10h] BYREF
  int v40; // [rsp+70h] [rbp+18h]

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v32 = SchedulerAssist[5];
      SchedulerAssist[5] = v32 + 1;
      if ( v32 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(_QWORD *)(a2 + 64) );
    LOBYTE(v27) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v27);
  }
  v7 = *(_BYTE *)(a2 + 564);
  v8 = *(_BYTE *)(a2 + 195);
  v9 = v7 & 0xF;
  v10 = v8 - (v7 & 0xF);
  if ( (v7 & 0xF) == 0 )
    v10 = *(_BYTE *)(a2 + 195);
  v11 = v7 >> 4;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a2 + 1408);
    v13 = v8 - v11;
    *(_BYTE *)(a2 + 564) = v9;
    if ( v12 )
    {
      _BitScanReverse((unsigned int *)&v28, v12);
      if ( v13 < v28 )
        v13 = v28;
      v40 = v28;
    }
    if ( v13 != v8 )
    {
      v14 = 0;
      v15 = KeGetCurrentPrcb();
      v39 = 0;
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v33 = v16[5];
          v16[5] = v33 + 1;
          if ( v33 == -1 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
            KiPerformUnboostKick(v15);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        KiSetVpThreadSpinLockCount(v15, 0LL);
        do
          KeYieldProcessorEx(&v39);
        while ( *(_QWORD *)(a1 + 48) );
        LOBYTE(v29) = 1;
        KiSetVpThreadSpinLockCount(v15, v29);
      }
      v17 = 1;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        ready = KiSelectReadyThreadEx(a1, a2, 1LL);
        v19 = ready;
        if ( ready )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            if ( KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1) )
              LOBYTE(v30) = 1;
            else
              LOBYTE(v30) = *(_BYTE *)(v19 + 195);
          }
          else
          {
            LOBYTE(v30) = *(_BYTE *)(ready + 195);
          }
          **(_BYTE **)(a1 + 56) = v30;
          v31 = *(_QWORD *)(a1 + 25016);
          if ( v31 )
          {
            if ( v19 == *(_QWORD *)(a1 + 24) )
              v30 = KiVpThreadSystemWorkPriority;
            else
              v30 = (char)v30;
            *(_DWORD *)v31 = v30;
            v31 = *(_QWORD *)(a1 + 25016);
          }
          *(_QWORD *)(a1 + 16) = v19;
          if ( v31 )
            *(_BYTE *)(v31 + 24) = v19 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v19 + 388) == 1 )
            *(_DWORD *)(v19 + 132) = *(_DWORD *)(v19 + 132) - *(_DWORD *)(v19 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v19 + 388) = 3;
        }
        else
        {
          v14 = 1;
        }
      }
      v20 = (struct _KDPC *)KeGetCurrentPrcb();
      if ( v13 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v34 = (PVOID *)(a2 + 1376);
          if ( *(_QWORD *)(a2 + 1376) == 1LL )
          {
            p_DpcData = &v20[401].DpcData;
            if ( v20 != (struct _KDPC *)-25720LL )
            {
              *v34 = *p_DpcData;
              *p_DpcData = v34;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
              KiAbQueueAutoBoostDpc(v20);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v13;
      if ( v14 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          if ( !KiIsThreadRankNonZero(a2, (struct _KPRCB *)a1) )
            v17 = *(_BYTE *)(a2 + 195);
          v13 = v17;
        }
        **(_BYTE **)(a1 + 56) = v13;
        v21 = *(int **)(a1 + 25016);
        if ( v21 )
        {
          v36 = KiVpThreadSystemWorkPriority;
          if ( a2 != *(_QWORD *)(a1 + 24) )
            v36 = v13;
          *v21 = v36;
        }
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
        *(_DWORD *)(*(_QWORD *)(a2 + 1512) + 4LL) = *(char *)(a2 + 195);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v37 = v23[5] - 1;
          v23[5] = v37;
          if ( !v37 && !*((_BYTE *)v23 + 25) && !*((_BYTE *)v23 + 27) )
            KiPerformUnboostKick(v22);
        }
      }
    }
  }
  else
  {
    ++v10;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v38 = v25[5] - 1;
      v25[5] = v38;
      if ( !v38 && !*((_BYTE *)v25 + 25) && !*((_BYTE *)v25 + 27) )
        KiPerformUnboostKick(v24);
    }
  }
  return v10;
}
