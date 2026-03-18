/*
 * XREFs of MiFreePoolPages @ 0x140032824
 * Callers:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousMemoryInPool @ 0x140119800 (MiFindContiguousMemoryInPool.c)
 *     ExpResizeBigPageTable @ 0x140143DE4 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14028451C (ExGetBigPoolInfo.c)
 *     ExDeferredFreePool @ 0x1402B2010 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiCheckSessionPoolAllocations @ 0x1406E3020 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     MiInsertNonPagedPoolOnSlist @ 0x14002EE40 (MiInsertNonPagedPoolOnSlist.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiClearNonPagedPtes @ 0x1400BC1C0 (MiClearNonPagedPtes.c)
 *     MiReturnPhysicalPoolPages @ 0x1400C0230 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 */

__int64 __fastcall MiFreePoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8

  if ( BugCheckParameter2 < 0xFFFF800000000000uLL || byte_1403899D0[((BugCheckParameter2 >> 39) & 0x1FF) - 256] != 5 )
    return MiFreePagedPoolPages(BugCheckParameter2);
  v4 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  result = MiInsertNonPagedPoolOnSlist((unsigned __int64 *)BugCheckParameter2, v4);
  if ( (_DWORD)result != 1 )
  {
    v5 = MiClearNonPagedPtes(BugCheckParameter2, v4);
    if ( v5 )
      MiReturnPhysicalPoolPages(v5);
    return MiReturnNonPagedPoolVa(BugCheckParameter2, v4, v6);
  }
  return result;
}
