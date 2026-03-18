/*
 * XREFs of KiUpdateThreadPriority @ 0x1400EDCB0
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityBoost @ 0x1400A7404 (KiSetPriorityBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x14047AF10 (KiCompleteKernelInit.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 */

void __fastcall KiUpdateThreadPriority(struct _KPRCB *a1, __int64 a2, char a3, char a4)
{
  struct _KDPC *CurrentPrcb; // rcx
  char v7; // di
  _DWORD *SchedulerAssist; // rax
  PVOID *v10; // rdx
  PVOID *p_DpcData; // r8
  int v12; // ecx

  CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
  v7 = a3;
  if ( a3 > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v10 = (PVOID *)(a2 + 1376);
      if ( *v10 == (PVOID)1 )
      {
        p_DpcData = &CurrentPrcb[401].DpcData;
        if ( CurrentPrcb != (struct _KDPC *)-25720LL )
        {
          *v10 = *p_DpcData;
          *p_DpcData = v10;
          _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        }
      }
    }
  }
  *(_BYTE *)(a2 + 195) = v7;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(a2, a1) )
        v7 = 1;
      else
        v7 = *(_BYTE *)(a2 + 195);
    }
    *a1->PriorityState = v7;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v12 = KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)a2 != a1->IdleThread )
        v12 = v7;
      *SchedulerAssist = v12;
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a2 + 1512) + 4LL) = *(char *)(a2 + 195);
}
