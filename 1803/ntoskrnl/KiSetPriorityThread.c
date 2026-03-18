/*
 * XREFs of KiSetPriorityThread @ 0x1400ED840
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiSetPriorityFloor @ 0x140064D80 (KiSetPriorityFloor.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiSetPriorityBoost @ 0x1400A7404 (KiSetPriorityBoost.c)
 *     KiClearPriorityFloor @ 0x1400BA210 (KiClearPriorityFloor.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140128300 (KiTryUnwaitThreadWithPriority.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400A6D68 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A7488 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiComputePriorityFloor @ 0x1400EDBBC (KiComputePriorityFloor.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400EE044 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, __int64 *a2, unsigned __int8 a3)
{
  int v5; // ebp
  char v6; // al
  __int64 v7; // r9
  signed int v8; // r15d
  int v9; // edi
  char v10; // r14
  struct _KPRCB *v11; // rsi
  _KTHREAD *NextThread; // r12
  _KTHREAD **p_NextThread; // r13
  bool v14; // cc
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // rax
  _KTHREAD *v19; // rbp
  char v20; // r15
  int v21; // ecx
  _BYTE *v22; // rax
  __int64 Number; // rcx
  __int64 ready; // rax
  _KTHREAD *v25; // rbp
  char v26; // r15
  int v27; // ecx
  _BYTE *SchedulerAssist; // rax
  struct _KPRCB *v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v5 = (char)KiComputePriorityFloor(a1, a3);
  if ( *(char *)(a1 + 195) == v5 )
    return 0;
  v6 = KiAcquireThreadStateLock(a1, &v29, &v30);
  v8 = *(char *)(a1 + 195);
  v9 = 0;
  v10 = 0;
  if ( v6 != 2 )
  {
    if ( v6 == 1 )
    {
      v11 = v29;
      KiRemoveThreadFromAnyReadyQueue((__int64)v29, v30, a1, v8);
      KiUpdateThreadPriority(0LL, a1, (unsigned int)v5, 0LL);
      KiPrepareReadyThreadForRescheduling(a1, v5, a2);
    }
    else if ( v6 == 3 )
    {
      v11 = v29;
      LOBYTE(v7) = 1;
      KiUpdateThreadPriority(v29, a1, (unsigned int)v5, v7);
      if ( v5 < v8 )
      {
        ready = KiSelectReadyThreadEx(v11, a1, 0LL);
        v25 = (_KTHREAD *)ready;
        if ( ready )
        {
          v26 = 1;
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            if ( KiIsThreadRankNonZero(ready, v11) )
              LOBYTE(v27) = 1;
            else
              LOBYTE(v27) = v25->Priority;
          }
          else
          {
            LOBYTE(v27) = *(_BYTE *)(ready + 195);
          }
          *v11->PriorityState = v27;
          SchedulerAssist = v11->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v25 == v11->IdleThread )
              v27 = KiVpThreadSystemWorkPriority;
            else
              v27 = (char)v27;
            *(_DWORD *)SchedulerAssist = v27;
            SchedulerAssist = v11->SchedulerAssist;
          }
          v11->NextThread = v25;
          if ( v25 != v11->IdleThread )
            v26 = 0;
          if ( SchedulerAssist )
            SchedulerAssist[24] = v26;
          if ( v25->WaitBlockFill6[68] == 1 )
            v25->ReadyTime = v25->ReadyTime - v25->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
          v11 = v29;
          v25->WaitBlockFill6[68] = 3;
          *(_BYTE *)(a1 + 388) = 7;
          *(_QWORD *)(a1 + 216) = *a2;
          *a2 = a1 + 216;
        }
      }
      else
      {
        v9 = v5;
      }
    }
    else
    {
      KiUpdateThreadPriority(0LL, a1, (unsigned int)v5, 0LL);
      v11 = v29;
    }
    goto LABEL_9;
  }
  v11 = v29;
  NextThread = v29->NextThread;
  p_NextThread = &v29->NextThread;
  LOBYTE(v7) = NextThread == 0LL;
  KiUpdateThreadPriority(v29, a1, (unsigned int)v5, v7);
  v14 = v5 <= v8;
  if ( v5 >= v8 )
    goto LABEL_4;
  if ( NextThread )
  {
    v14 = v5 <= v8;
LABEL_4:
    if ( v14 || NextThread )
      goto LABEL_9;
    if ( *(_BYTE *)(a1 + 388) == 2 )
      v9 = v5;
    goto LABEL_8;
  }
  v11 = v29;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    if ( v29->ReadySummary >> (v5 + 1) )
      *(_BYTE *)(a1 + 112) |= 0x10u;
    goto LABEL_9;
  }
  v18 = KiSelectReadyThreadEx(v29, a1, 0LL);
  v19 = (_KTHREAD *)v18;
  if ( v18 )
  {
    v20 = 1;
    if ( (*(_BYTE *)(v18 + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(v18, v11) )
        LOBYTE(v21) = 1;
      else
        LOBYTE(v21) = v19->Priority;
    }
    else
    {
      LOBYTE(v21) = *(_BYTE *)(v18 + 195);
    }
    *v11->PriorityState = v21;
    v22 = v11->SchedulerAssist;
    if ( v22 )
    {
      if ( v19 == v11->IdleThread )
        v21 = KiVpThreadSystemWorkPriority;
      else
        v21 = (char)v21;
      *(_DWORD *)v22 = v21;
      v22 = v11->SchedulerAssist;
    }
    *p_NextThread = v19;
    if ( v19 != v11->IdleThread )
      v20 = 0;
    if ( v22 )
      v22[24] = v20;
    if ( v19->WaitBlockFill6[68] == 1 )
      v19->ReadyTime = v19->ReadyTime - v19->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    v19->WaitBlockFill6[68] = 3;
    v10 = 1;
LABEL_8:
    v11 = v29;
  }
LABEL_9:
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  KiReleaseThreadStateLock(v15, v11, v30);
  if ( v10 )
  {
    LODWORD(v16) = KeGetPcr()->Prcb.Number;
    Number = v29->Number;
    if ( (_DWORD)v16 != (_DWORD)Number )
    {
      LOBYTE(v16) = 2;
      KiSendSoftwareInterrupt(Number, v16);
    }
  }
  if ( v9 > 0 )
    KiHvEnlightenedGuestPriorityKick(KeGetCurrentPrcb(), v29, (unsigned int)v9);
  return 1;
}
