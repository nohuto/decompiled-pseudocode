/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x1400C268C
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1400C2454 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50 (KiUpdateSharedReadyQueueAffinityThread.c)
 */

__int64 __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, struct _KPRCB *a3)
{
  __int64 result; // rax
  char v6; // r9
  char v7; // cl
  _DWORD *SchedulerAssist; // rdx
  bool IsThreadRankNonZero; // al

  result = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !a3->NextThread || v6 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a3);
      v7 = 1;
      if ( !IsThreadRankNonZero )
        v7 = *(_BYTE *)(a1 + 195);
    }
    else
    {
      v7 = *(_BYTE *)(a1 + 195);
    }
    result = (__int64)a3->PriorityState;
    *(_BYTE *)result = v7;
    SchedulerAssist = a3->SchedulerAssist;
    if ( SchedulerAssist )
    {
      result = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)a1 != a3->IdleThread )
        result = (unsigned int)v7;
      *SchedulerAssist = result;
    }
  }
  return result;
}
