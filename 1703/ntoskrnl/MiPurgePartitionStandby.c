/*
 * XREFs of MiPurgePartitionStandby @ 0x140138E54
 * Callers:
 *     MiFinishResume @ 0x140138A60 (MiFinishResume.c)
 *     MiTrimAllSystemPagableMemory @ 0x140215758 (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = MiRemoveLowestPriorityStandbyPage(a1, a2, 2048LL);
    v6 = v5;
    if ( v5 == -1 )
      break;
    v7 = 48 * v5 - 0x58000000000LL;
    MiLockPageAtDpcInline(v7);
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v6, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
