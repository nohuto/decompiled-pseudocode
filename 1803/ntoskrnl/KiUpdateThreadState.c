/*
 * XREFs of KiUpdateThreadState @ 0x14024902C
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 */

char __fastcall KiUpdateThreadState(struct _KPRCB *a1, __int64 a2, int a3, char a4)
{
  char v7; // cl
  bool IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // rdx
  int v10; // eax
  _BYTE *v11; // rcx
  bool v12; // zf
  int v13; // eax

  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(a2, a1);
      v7 = 1;
      if ( !IsThreadRankNonZero )
        v7 = *(_BYTE *)(a2 + 195);
    }
    else
    {
      v7 = *(_BYTE *)(a2 + 195);
    }
    *a1->PriorityState = v7;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v10 = KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)a2 != a1->IdleThread )
        v10 = v7;
      *SchedulerAssist = v10;
    }
  }
  if ( a3 == 2 )
  {
    a1->CurrentThread = (_KTHREAD *)a2;
  }
  else if ( a3 == 3 )
  {
    v11 = a1->SchedulerAssist;
    v12 = (_KTHREAD *)a2 == a1->IdleThread;
    a1->NextThread = (_KTHREAD *)a2;
    if ( v11 )
      v11[24] = v12;
  }
  LOBYTE(v13) = *(_BYTE *)(a2 + 388);
  if ( (_BYTE)v13 == 1 )
  {
    v13 = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a2 + 132) = v13;
  }
  *(_BYTE *)(a2 + 388) = a3;
  return v13;
}
