/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x1400A8330
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x1400A7CCC (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A7E68 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiComputeGroupSchedulingRank @ 0x1400B1940 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(struct _KPRCB *a1, __int64 a2)
{
  __int64 NextThread; // rbx
  __int64 v4; // r8
  bool IsThreadRankNonZero; // al
  char v6; // cl
  _DWORD *SchedulerAssist; // rdx
  int v8; // eax

  NextThread = (__int64)a1->NextThread;
  if ( !NextThread )
    NextThread = (__int64)a1->CurrentThread;
  v4 = *(_QWORD *)(NextThread + 104);
  if ( v4 )
  {
    for ( v4 += a1->ScbOffset; v4; v4 = *(_QWORD *)(v4 + 408) )
    {
      if ( v4 == a2 )
        goto LABEL_9;
    }
  }
  if ( v4 == a2 )
  {
LABEL_9:
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, a1);
      v6 = 1;
      if ( !IsThreadRankNonZero )
        v6 = *(_BYTE *)(NextThread + 195);
    }
    else
    {
      v6 = *(_BYTE *)(NextThread + 195);
    }
    *a1->PriorityState = v6;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v8 = KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != a1->IdleThread )
        v8 = v6;
      *SchedulerAssist = v8;
    }
  }
}
