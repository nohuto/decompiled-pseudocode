/*
 * XREFs of KiSelectReadyThreadEx @ 0x1400EE3A0
 * Callers:
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x1400A723C (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x1400A8E28 (KiChooseLowestRankedThread.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v4; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  char v10; // r9

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 195) == 31 )
      return 0LL;
    v6 = *(_QWORD *)(a2 + 104);
    if ( v6 )
    {
      v9 = a1->ScbOffset + v6;
      if ( v9 )
      {
        v10 = a1 == KeGetCurrentPrcb() || (_KTHREAD *)v4 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v4, v9, a3, v10, 0LL) )
          return KiChooseLowestRankedThread(a1, v4, (unsigned int)(*(char *)(v4 + 195) + 1));
      }
    }
    v7 = (unsigned int)(*(char *)(v4 + 195) + 1);
    return KiSelectReadyThread(v7, a1);
  }
  result = KiSelectReadyThread(1LL, a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread((__int64)a1);
    if ( !result && !v3 )
    {
      v7 = 0LL;
      return KiSelectReadyThread(v7, a1);
    }
  }
  return result;
}
