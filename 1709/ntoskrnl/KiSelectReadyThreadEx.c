/*
 * XREFs of KiSelectReadyThreadEx @ 0x14008B420
 * Callers:
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x1400A8B20 (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x1400AB7D4 (KiChooseLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 */

unsigned __int64 *__fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, unsigned __int64 *a3)
{
  char v3; // si
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  signed int v7; // ecx
  unsigned __int64 *result; // rax
  __int64 v9; // rdx
  bool v10; // r9

  v3 = (char)a3;
  if ( a2 )
  {
    if ( a2->Priority == 31 )
      return 0LL;
    SchedulingGroup = a2->SchedulingGroup;
    if ( SchedulingGroup )
    {
      v9 = (__int64)SchedulingGroup + a1->ScbOffset;
      if ( v9 )
      {
        v10 = a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v9, (_DWORD)a3, v10, 0LL) )
          return (unsigned __int64 *)KiChooseLowestRankedThread(a1, a2, (unsigned int)(a2->Priority + 1));
      }
    }
    v7 = a2->Priority + 1;
    return KiSelectReadyThread(v7, (__int64)a1, a3);
  }
  result = KiSelectReadyThread(1, (__int64)a1, a3);
  if ( !result )
  {
    result = (unsigned __int64 *)KiSelectLowestRankedThread(a1);
    if ( !result && !v3 )
    {
      v7 = 0;
      return KiSelectReadyThread(v7, (__int64)a1, a3);
    }
  }
  return result;
}
