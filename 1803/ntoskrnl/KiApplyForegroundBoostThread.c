/*
 * XREFs of KiApplyForegroundBoostThread @ 0x14006B508
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x14006B340 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400A6D68 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A7488 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400EE044 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, _QWORD *a2)
{
  char v4; // si
  __int64 Number; // rcx
  char v6; // r8
  struct _KPRCB *v7; // rbx
  __int64 v9; // r9
  char v10; // dl
  int v11; // r15d
  int v12; // r13d
  int v13; // esi
  _KTHREAD **p_NextThread; // r12
  _KTHREAD *NextThread; // r14
  bool v16; // cc
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _KTHREAD *v20; // rsi
  int v21; // ecx
  bool v22; // al
  _BYTE *v23; // rax
  __int64 ready; // rax
  _KTHREAD *v25; // rsi
  int v26; // ecx
  bool IsThreadRankNonZero; // al
  _BYTE *SchedulerAssist; // rax
  __int64 v29; // [rsp+20h] [rbp-10h] BYREF
  char v30; // [rsp+80h] [rbp+50h]
  struct _KPRCB *v31; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v6 = KiAcquireThreadStateLock(a1, &v31, &v29);
  if ( (unsigned __int8)(v6 - 1) <= 2u || v6 == 7 )
  {
    v4 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 )
    {
      if ( *(_BYTE *)(a1 + 564) )
        goto LABEL_24;
      if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
        goto LABEL_24;
      LOBYTE(Number) = *(_BYTE *)(a1 + 195);
      if ( (char)Number <= 0 )
        goto LABEL_24;
      v9 = 15LL;
      v10 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v10 >= 16 )
        v10 = 15;
      if ( v10 <= (char)Number )
      {
LABEL_24:
        v7 = v31;
        goto LABEL_25;
      }
      v11 = (char)Number;
      v12 = 0;
      v13 = v10;
      v30 = 0;
      *(_BYTE *)(a1 + 564) = (v10 - Number) & 0xF;
      switch ( v6 )
      {
        case 1:
          v7 = v31;
          KiRemoveThreadFromAnyReadyQueue(v31, v29, a1, (unsigned int)(char)Number);
          KiUpdateThreadPriority(0LL, a1, (unsigned int)v13, 0LL);
          KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v13, a2);
          break;
        case 2:
          v7 = v31;
          p_NextThread = &v31->NextThread;
          NextThread = v31->NextThread;
          LOBYTE(v9) = NextThread == 0LL;
          KiUpdateThreadPriority(v31, a1, (unsigned int)v10, v9);
          v16 = v13 <= v11;
          if ( v13 >= v11 )
          {
LABEL_16:
            if ( v16 )
              break;
            if ( NextThread )
              break;
            v7 = v31;
            if ( *(_BYTE *)(a1 + 388) != 2 )
              break;
            goto LABEL_19;
          }
          if ( NextThread )
          {
            v16 = v13 <= v11;
            goto LABEL_16;
          }
          v7 = v31;
          if ( *(_BYTE *)(a1 + 388) != 2 )
          {
            if ( v31->ReadySummary >> (v13 + 1) )
              *(_BYTE *)(a1 + 112) |= 0x10u;
            break;
          }
          ready = KiSelectReadyThreadEx(v31, a1, 0LL);
          v25 = (_KTHREAD *)ready;
          if ( ready )
          {
            if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
            {
              IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v7);
              LOBYTE(v26) = 1;
              if ( !IsThreadRankNonZero )
                LOBYTE(v26) = v25->Priority;
            }
            else
            {
              LOBYTE(v26) = *(_BYTE *)(ready + 195);
            }
            *v7->PriorityState = v26;
            SchedulerAssist = v7->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v25 == v7->IdleThread )
                v26 = KiVpThreadSystemWorkPriority;
              else
                v26 = (char)v26;
              *(_DWORD *)SchedulerAssist = v26;
              SchedulerAssist = v7->SchedulerAssist;
            }
            *p_NextThread = v25;
            if ( SchedulerAssist )
              SchedulerAssist[24] = v25 == v7->IdleThread;
            if ( v25->WaitBlockFill6[68] == 1 )
              v25->ReadyTime = v25->ReadyTime - v25->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v25->WaitBlockFill6[68] = 3;
            v30 = 1;
            goto LABEL_30;
          }
          break;
        case 3:
          v7 = v31;
          LOBYTE(v9) = 1;
          KiUpdateThreadPriority(v31, a1, (unsigned int)v10, v9);
          if ( v13 >= v11 )
          {
LABEL_19:
            v12 = v13;
            break;
          }
          v19 = KiSelectReadyThreadEx(v7, a1, 0LL);
          v20 = (_KTHREAD *)v19;
          if ( v19 )
          {
            if ( (*(_BYTE *)(v19 + 2) & 4) != 0 )
            {
              v22 = KiIsThreadRankNonZero(v19, v7);
              LOBYTE(v21) = 1;
              if ( !v22 )
                LOBYTE(v21) = v20->Priority;
            }
            else
            {
              LOBYTE(v21) = *(_BYTE *)(v19 + 195);
            }
            *v7->PriorityState = v21;
            v23 = v7->SchedulerAssist;
            if ( v23 )
            {
              if ( v20 == v7->IdleThread )
                v21 = KiVpThreadSystemWorkPriority;
              else
                v21 = (char)v21;
              *(_DWORD *)v23 = v21;
              v23 = v7->SchedulerAssist;
            }
            v7->NextThread = v20;
            if ( v23 )
              v23[24] = v20 == v7->IdleThread;
            if ( v20->WaitBlockFill6[68] == 1 )
              v20->ReadyTime = v20->ReadyTime - v20->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v20->WaitBlockFill6[68] = 3;
            *(_BYTE *)(a1 + 388) = 7;
            *(_QWORD *)(a1 + 216) = *a2;
            *a2 = a1 + 216;
            goto LABEL_30;
          }
          break;
        default:
          KiUpdateThreadPriority(0LL, a1, (unsigned int)v10, 0LL);
LABEL_30:
          v7 = v31;
          break;
      }
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      KiReleaseThreadStateLock(v17, v7, v29);
      if ( v30 )
      {
        v7 = v31;
        Number = v31->Number;
        if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
        {
          LOBYTE(v18) = 2;
          KiSendSoftwareInterrupt(Number, v18);
        }
      }
      if ( v12 > 0 )
      {
        v7 = v31;
        KiHvEnlightenedGuestPriorityKick(KeGetCurrentPrcb(), v31, (unsigned int)v12);
      }
      v4 = 1;
LABEL_25:
      if ( v4 )
        return v4;
      goto LABEL_4;
    }
  }
  v7 = v31;
LABEL_4:
  KiReleaseThreadStateLock(Number, v7, v29);
  return v4;
}
