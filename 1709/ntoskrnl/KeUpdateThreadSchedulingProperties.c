/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x1400D269C
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1400D2460 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400D2520 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 */

char __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, struct _KPRCB *a3)
{
  char *PriorityState; // rax
  char v6; // r9
  char v7; // cl
  _DWORD *SchedulerAssist; // rdx
  bool IsThreadRankNonZero; // al

  LOBYTE(PriorityState) = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
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
    PriorityState = a3->PriorityState;
    *PriorityState = v7;
    SchedulerAssist = a3->SchedulerAssist;
    if ( SchedulerAssist )
    {
      LOBYTE(PriorityState) = v7;
      *SchedulerAssist = v7;
    }
  }
  return (char)PriorityState;
}
