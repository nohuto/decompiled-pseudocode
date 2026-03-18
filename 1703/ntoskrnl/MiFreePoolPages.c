/*
 * XREFs of MiFreePoolPages @ 0x1400AA840
 * Callers:
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousMemoryInPool @ 0x1401241D8 (MiFindContiguousMemoryInPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140133984 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14025ADD0 (ExGetBigPoolInfo.c)
 *     ExDeferredFreePool @ 0x140285C90 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCheckSessionPoolAllocations @ 0x14057A97C (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x1400A7AB0 (MiClearNonPagedPtes.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DD2E0 (MiInsertNonPagedPoolOnSlist.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiReturnPhysicalPoolPages @ 0x140125E80 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 */

__int64 __fastcall MiFreePoolPages(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8

  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) != 5 )
    return MiFreePagedPoolPages(BugCheckParameter2);
  v4 = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  result = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v4);
  if ( (_DWORD)result != 1 )
  {
    v5 = MiClearNonPagedPtes(BugCheckParameter2, v4);
    if ( v5 )
      MiReturnPhysicalPoolPages(v5);
    return MiReturnNonPagedPoolVa(BugCheckParameter2, v4, v6);
  }
  return result;
}
