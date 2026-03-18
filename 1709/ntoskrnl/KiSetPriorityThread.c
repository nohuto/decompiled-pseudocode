/*
 * XREFs of KiSetPriorityThread @ 0x14008C460
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140062020 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     KiClearPriorityFloor @ 0x1400A72F4 (KiClearPriorityFloor.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KiSetPriorityFloor @ 0x1400A8CE8 (KiSetPriorityFloor.c)
 *     KiSetPriorityBoost @ 0x1400D1540 (KiSetPriorityBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiComputePriorityFloor @ 0x14008C7D8 (KiComputePriorityFloor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D14D0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D15AC (KiRemoveThreadFromAnyReadyQueue.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  unsigned int v5; // ebp
  char v6; // al
  __int64 v7; // r9
  signed int v8; // r14d
  char v9; // si
  struct _KPRCB *v10; // rdi
  _KTHREAD *NextThread; // r15
  _KTHREAD **p_NextThread; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 *v16; // rax
  _KTHREAD *v17; // rbp
  char Priority; // cl
  _DWORD *SchedulerAssist; // rdx
  _BYTE *v20; // rcx
  bool v21; // zf
  __int64 Number; // rcx
  unsigned __int64 *v23; // rax
  _KTHREAD *v24; // rbp
  char v25; // cl
  _DWORD *v26; // rdx
  _BYTE *v27; // rcx
  bool v28; // zf
  struct _KPRCB *v29; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int64 *v30; // [rsp+68h] [rbp+20h] BYREF

  v5 = (char)KiComputePriorityFloor(a1, a3);
  if ( *(char *)(a1 + 195) == v5 )
    return 0;
  v6 = KiAcquireThreadStateLock(a1, &v29, &v30);
  v8 = *(char *)(a1 + 195);
  v9 = 0;
  switch ( v6 )
  {
    case 2:
      v10 = v29;
      NextThread = v29->NextThread;
      p_NextThread = &v29->NextThread;
      LOBYTE(v7) = NextThread == 0LL;
      KiUpdateThreadPriority(v29, a1, v5, v7);
      if ( (int)v5 < v8 && !NextThread )
      {
        v10 = v29;
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          v16 = KiSelectReadyThreadEx(v29, (_KTHREAD *)a1, 0LL);
          v17 = (_KTHREAD *)v16;
          if ( v16 )
          {
            if ( (*((_BYTE *)v16 + 2) & 4) != 0 )
            {
              if ( (unsigned __int8)KiIsThreadRankNonZero(v16, v10) )
                Priority = 1;
              else
                Priority = v17->Priority;
            }
            else
            {
              Priority = *((_BYTE *)v16 + 195);
            }
            *v10->PriorityState = Priority;
            SchedulerAssist = v10->SchedulerAssist;
            if ( SchedulerAssist )
              *SchedulerAssist = Priority;
            v20 = v10->SchedulerAssist;
            v21 = v17 == v10->IdleThread;
            *p_NextThread = v17;
            if ( v20 )
              v20[8] = v21;
            if ( v17->WaitBlockFill6[68] == 1 )
              v17->ReadyTime = v17->ReadyTime - v17->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v10 = v29;
            v9 = 1;
            v17->WaitBlockFill6[68] = 3;
          }
        }
        else if ( v29->ReadySummary >> (v5 + 1) )
        {
          *(_BYTE *)(a1 + 112) |= 0x10u;
        }
      }
      break;
    case 1:
      v10 = v29;
      KiRemoveThreadFromAnyReadyQueue(v29, v30, a1, (unsigned int)v8);
      KiUpdateThreadPriority(0LL, a1, v5, 0LL);
      KiPrepareReadyThreadForRescheduling(a1, v5, a2);
      break;
    case 3:
      v10 = v29;
      LOBYTE(v7) = 1;
      KiUpdateThreadPriority(v29, a1, v5, v7);
      if ( (int)v5 < v8 )
      {
        v23 = KiSelectReadyThreadEx(v10, (_KTHREAD *)a1, 0LL);
        v24 = (_KTHREAD *)v23;
        if ( v23 )
        {
          if ( (*((_BYTE *)v23 + 2) & 4) != 0 )
          {
            if ( (unsigned __int8)KiIsThreadRankNonZero(v23, v10) )
              v25 = 1;
            else
              v25 = v24->Priority;
          }
          else
          {
            v25 = *((_BYTE *)v23 + 195);
          }
          *v10->PriorityState = v25;
          v26 = v10->SchedulerAssist;
          if ( v26 )
            *v26 = v25;
          v27 = v10->SchedulerAssist;
          v28 = v24 == v10->IdleThread;
          v10->NextThread = v24;
          if ( v27 )
            v27[8] = v28;
          if ( v24->WaitBlockFill6[68] == 1 )
            v24->ReadyTime = v24->ReadyTime - v24->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
          v24->WaitBlockFill6[68] = 3;
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v10 = v29;
          *(_BYTE *)(a1 + 388) = 7;
          *(_QWORD *)(a1 + 216) = *a2;
          *a2 = a1 + 216;
        }
      }
      break;
    default:
      KiUpdateThreadPriority(0LL, a1, v5, 0LL);
      v10 = v29;
      break;
  }
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v10 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&v10->PrcbLock, 0LL);
    v10 = v29;
  }
  if ( v30 )
  {
    _InterlockedAnd64(v30, 0LL);
    v10 = v29;
  }
  if ( v9 )
  {
    Number = v10->Number;
    if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
    {
      LOBYTE(v13) = 2;
      KiSendSoftwareInterrupt(Number, v13, v14);
    }
  }
  return 1;
}
