/*
 * XREFs of KiSelectReadyThreadEx @ 0x1400ECE00
 * Callers:
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006515C (KiApplyForegroundBoostThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 * Callees:
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x140113F6C (KiSelectLowestRankedThread.c)
 */

_QWORD *__fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, _QWORD *a3)
{
  char v3; // di
  _KTHREAD *v4; // r10
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  signed int v7; // ecx
  _QWORD *result; // rax
  __int64 v9; // rdx
  bool v10; // r9

  v3 = (char)a3;
  v4 = a2;
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
        v10 = a1 == KeGetCurrentPrcb() || v4 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)v4, v9, (_DWORD)a3, v10, 0LL) )
          return (_QWORD *)KiChooseLowestRankedThread(a1, v4, (unsigned int)(v4->Priority + 1));
      }
    }
    v7 = v4->Priority + 1;
    return KiSelectReadyThread(v7, (__int64)a1, a3);
  }
  result = KiSelectReadyThread(1, (__int64)a1, a3);
  if ( !result )
  {
    result = (_QWORD *)KiSelectLowestRankedThread(a1);
    if ( !result && !v3 )
    {
      v7 = 0;
      return KiSelectReadyThread(v7, (__int64)a1, a3);
    }
  }
  return result;
}
