/*
 * XREFs of KiAcquireThreadStateLock @ 0x1400EDDA0
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x1400025D8 (KeTryToFreezeThreadStack.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C2454 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     KeUpdateThreadTag @ 0x140143DE0 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x140181670 (KiUpdateThreadCpuSets.c)
 *     KeSetThreadSchedulerAssist @ 0x140247B84 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402488A8 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  __int64 *v6; // rdx
  int v7; // ebx
  __int64 v8; // rdi
  volatile signed __int32 *v9; // r14
  __int64 v10; // rax
  struct _KPRCB *v11; // r13
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  char v14; // al
  __int64 v15; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  struct _KPRCB *v19; // r13
  __int64 v20; // rdx
  struct _KPRCB *v21; // r13
  int v22; // eax
  int v23; // [rsp+20h] [rbp-48h] BYREF
  int v24[17]; // [rsp+24h] [rbp-44h] BYREF
  int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+20h] BYREF

LABEL_1:
  while ( 2 )
  {
    v6 = KiProcessorBlock;
    do
    {
      while ( 1 )
      {
        v7 = *(unsigned __int8 *)(a1 + 388);
        v8 = 0LL;
        v9 = 0LL;
        if ( v7 == 2 )
          goto LABEL_3;
        if ( *(_BYTE *)(a1 + 388) == 1 )
        {
          v15 = *(unsigned int *)(a1 + 536);
          if ( (int)v15 < 0 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = (unsigned int)v15;
            LODWORD(v17) = v15 & 0x7FFFFFFF;
            v26 = 0;
            v9 = *(volatile signed __int32 **)(KiProcessorBlock[v17] + 24904);
            while ( 1 )
            {
              LOBYTE(v6) = 1;
              KiSetVpThreadSpinLockCount(CurrentPrcb, v6);
              if ( !_interlockedbittestandset64(v9, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
              do
                KeYieldProcessorEx(&v26);
              while ( *(_QWORD *)v9 );
            }
            if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
            {
              v8 = 0LL;
              goto LABEL_7;
            }
            _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
            goto LABEL_26;
          }
          v21 = KeGetCurrentPrcb();
          v8 = KiProcessorBlock[v15];
          v23 = 0;
          while ( 1 )
          {
            LOBYTE(v6) = 1;
            KiSetVpThreadSpinLockCount(v21, v6);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v21, 0LL);
            do
              KeYieldProcessorEx(&v23);
            while ( *(_QWORD *)(v8 + 48) );
          }
          if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v15 )
            goto LABEL_25;
          goto LABEL_7;
        }
        if ( *(_BYTE *)(a1 + 388) != 3 )
          break;
        v18 = *(unsigned int *)(a1 + 536);
        if ( (int)v18 >= 0 )
        {
          v19 = KeGetCurrentPrcb();
          v8 = KiProcessorBlock[v18];
          v25 = 0;
          while ( 1 )
          {
            LOBYTE(v6) = 1;
            KiSetVpThreadSpinLockCount(v19, v6);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v19, 0LL);
            do
              KeYieldProcessorEx(&v25);
            while ( *(_QWORD *)(v8 + 48) );
          }
          if ( a1 != *(_QWORD *)(v8 + 16) )
          {
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v18 )
              __fastfail(0x1Eu);
LABEL_25:
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
LABEL_26:
            KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
            goto LABEL_1;
          }
          goto LABEL_7;
        }
      }
      if ( *(_BYTE *)(a1 + 388) != 5 )
        goto LABEL_7;
      v14 = *(_BYTE *)(a1 + 112) & 7;
      if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
        goto LABEL_7;
      LOBYTE(v7) = 2;
LABEL_3:
      v10 = *(unsigned int *)(a1 + 536);
    }
    while ( (int)v10 < 0 );
    v11 = KeGetCurrentPrcb();
    v8 = KiProcessorBlock[v10];
    v24[0] = 0;
    SchedulerAssist = v11->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[5];
        SchedulerAssist[5] = v22 + 1;
        if ( v22 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(v11);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
    {
      KiSetVpThreadSpinLockCount(v11, 0LL);
      do
        KeYieldProcessorEx(v24);
      while ( *(_QWORD *)(v8 + 48) );
      LOBYTE(v20) = 1;
      KiSetVpThreadSpinLockCount(v11, v20);
    }
    if ( a1 != *(_QWORD *)(v8 + 8) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      continue;
    }
    break;
  }
LABEL_7:
  result = (unsigned __int8)v7;
  *a2 = v8;
  *a3 = v9;
  return result;
}
