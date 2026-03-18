/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1400AAB38
 * Callers:
 *     KiProcessPendingForegroundBoosts @ 0x1400AA990 (KiProcessPendingForegroundBoosts.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D14D0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D15AC (KiRemoveThreadFromAnyReadyQueue.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, _QWORD *a2)
{
  char v4; // si
  char v5; // r8
  struct _KPRCB *v6; // rbx
  char v8; // cl
  char v9; // dl
  int v10; // r15d
  signed int v11; // esi
  char v12; // r13
  _KTHREAD **p_NextThread; // r12
  _KTHREAD *NextThread; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 *v17; // rax
  _KTHREAD *v18; // rsi
  char Priority; // cl
  char IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // rdx
  _BYTE *v22; // rcx
  bool v23; // zf
  unsigned __int64 *v24; // rax
  _KTHREAD *v25; // rsi
  char v26; // cl
  char v27; // al
  _DWORD *v28; // rdx
  _BYTE *v29; // rcx
  bool v30; // zf
  __int64 Number; // rcx
  struct _KPRCB *v32; // [rsp+70h] [rbp+50h] BYREF
  volatile signed __int64 *v33; // [rsp+78h] [rbp+58h] BYREF

  v4 = 0;
  v5 = KiAcquireThreadStateLock(a1, (__int64 *)&v32, (volatile signed __int32 **)&v33);
  if ( (unsigned __int8)(v5 - 1) <= 2u || v5 == 7 )
  {
    v4 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1474LL) == 2 )
    {
      if ( *(_BYTE *)(a1 + 564) )
        goto LABEL_25;
      if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
        goto LABEL_25;
      v8 = *(_BYTE *)(a1 + 195);
      if ( v8 <= 0 )
        goto LABEL_25;
      v9 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v9 >= 16 )
        v9 = 15;
      if ( v9 <= v8 )
      {
LABEL_25:
        v6 = v32;
        goto LABEL_26;
      }
      v10 = v8;
      v11 = v9;
      v12 = 0;
      *(_BYTE *)(a1 + 564) = (v9 - v8) & 0xF;
      if ( v5 == 1 )
      {
        v6 = v32;
        KiRemoveThreadFromAnyReadyQueue(v32, v33, a1, (unsigned int)v8);
        KiUpdateThreadPriority(0LL, a1, v11, 0);
        KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v11, a2);
      }
      else
      {
        if ( v5 != 2 )
        {
          if ( v5 == 3 )
          {
            v6 = v32;
            KiUpdateThreadPriority((__int64)v32, a1, v9, 1);
            if ( v11 >= v10 )
              goto LABEL_19;
            v17 = KiSelectReadyThreadEx(v6, (_KTHREAD *)a1, 0LL);
            v18 = (_KTHREAD *)v17;
            if ( !v17 )
              goto LABEL_19;
            if ( (*((_BYTE *)v17 + 2) & 4) != 0 )
            {
              IsThreadRankNonZero = KiIsThreadRankNonZero(v17, v6);
              Priority = 1;
              if ( !IsThreadRankNonZero )
                Priority = v18->Priority;
            }
            else
            {
              Priority = *((_BYTE *)v17 + 195);
            }
            *v6->PriorityState = Priority;
            SchedulerAssist = v6->SchedulerAssist;
            if ( SchedulerAssist )
              *SchedulerAssist = Priority;
            v22 = v6->SchedulerAssist;
            v23 = v18 == v6->IdleThread;
            v6->NextThread = v18;
            if ( v22 )
              v22[8] = v23;
            if ( v18->WaitBlockFill6[68] == 1 )
              v18->ReadyTime = v18->ReadyTime - v18->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v18->WaitBlockFill6[68] = 3;
            _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
            *(_BYTE *)(a1 + 388) = 7;
            *(_QWORD *)(a1 + 216) = *a2;
            *a2 = a1 + 216;
          }
          else
          {
            KiUpdateThreadPriority(0LL, a1, v9, 0);
          }
          goto LABEL_31;
        }
        v6 = v32;
        p_NextThread = &v32->NextThread;
        NextThread = v32->NextThread;
        KiUpdateThreadPriority((__int64)v32, a1, v9, NextThread == 0LL);
        if ( v11 < v10 && !NextThread )
        {
          v6 = v32;
          if ( *(_BYTE *)(a1 + 388) != 2 )
          {
            if ( v32->ReadySummary >> (v11 + 1) )
              *(_BYTE *)(a1 + 112) |= 0x10u;
            goto LABEL_19;
          }
          v24 = KiSelectReadyThreadEx(v32, (_KTHREAD *)a1, 0LL);
          v25 = (_KTHREAD *)v24;
          if ( v24 )
          {
            if ( (*((_BYTE *)v24 + 2) & 4) != 0 )
            {
              v27 = KiIsThreadRankNonZero(v24, v6);
              v26 = 1;
              if ( !v27 )
                v26 = v25->Priority;
            }
            else
            {
              v26 = *((_BYTE *)v24 + 195);
            }
            *v6->PriorityState = v26;
            v28 = v6->SchedulerAssist;
            if ( v28 )
              *v28 = v26;
            v29 = v6->SchedulerAssist;
            v30 = v25 == v6->IdleThread;
            *p_NextThread = v25;
            if ( v29 )
              v29[8] = v30;
            if ( v25->WaitBlockFill6[68] == 1 )
              v25->ReadyTime = v25->ReadyTime - v25->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v25->WaitBlockFill6[68] = 3;
            v12 = 1;
LABEL_31:
            v6 = v32;
          }
        }
      }
LABEL_19:
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      if ( v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
        v6 = v32;
      }
      if ( v33 )
      {
        _InterlockedAnd64(v33, 0LL);
        v6 = v32;
      }
      if ( v12 )
      {
        Number = v6->Number;
        if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
        {
          LOBYTE(v15) = 2;
          KiSendSoftwareInterrupt(Number, v15, v16);
        }
        v6 = v32;
      }
      v4 = 1;
LABEL_26:
      if ( v4 )
        return v4;
      goto LABEL_4;
    }
  }
  v6 = v32;
LABEL_4:
  if ( v6 )
    _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
  if ( v33 )
    _InterlockedAnd64(v33, 0LL);
  return v4;
}
