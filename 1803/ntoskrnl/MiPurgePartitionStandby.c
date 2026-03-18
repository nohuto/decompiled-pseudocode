/*
 * XREFs of MiPurgePartitionStandby @ 0x14014FB3C
 * Callers:
 *     MiFinishResume @ 0x14014F670 (MiFinishResume.c)
 *     MiTrimAllSystemPagableMemory @ 0x14025A32C (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 i; // r14
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 PteTimeStamp; // rax
  __int16 v7; // dx
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR v9; // rsi
  __int64 result; // rax

  v2 = a2;
  for ( i = a1; ; a1 = i )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = MiRemoveLowestPriorityStandbyPage(a1, a2, 0x2000LL);
    if ( v9 == -1LL )
      break;
    v4 = 48 * v9 - 0x58000000000LL;
    MiLockPageAtDpcInline(v4);
    v5 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
    PteTimeStamp = MiGetPteTimeStamp(v5);
    v7 = 2;
    if ( PteTimeStamp == 4294967293LL )
      v7 = 1026;
    MiInsertPageInFreeOrZeroedList(v9, v7);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    a2 = v2;
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
