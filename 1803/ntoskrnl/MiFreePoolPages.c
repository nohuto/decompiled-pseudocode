/*
 * XREFs of MiFreePoolPages @ 0x1400E1834
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousMemoryInPool @ 0x1400BE770 (MiFindContiguousMemoryInPool.c)
 *     ExFreeHeapPages @ 0x1400E17DC (ExFreeHeapPages.c)
 * Callees:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DBD80 (MiInsertNonPagedPoolOnSlist.c)
 *     MiReturnNonPagedPoolVa @ 0x1400DC534 (MiReturnNonPagedPoolVa.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

void __fastcall MiFreePoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rdx
  int v5; // r8d
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = BugCheckParameter2;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 5 )
  {
    if ( (unsigned int)MiInsertNonPagedPoolOnSlist((_SLIST_ENTRY *)v3, (a2 >> 12) + ((a2 & 0xFFF) != 0)) != 1 )
    {
      v12 = v3;
      v6 = (((v3 + a2 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v7 = ((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v7 <= v6 )
      {
        v8 = v3;
        do
        {
          v9 = v8 & 0x1FFFFF;
          v10 = a2;
          if ( a2 > 0x200000 - v9 )
            v10 = 0x200000 - v9;
          v11 = v10;
          if ( (MI_READ_PTE_LOCK_FREE(v7) & 0x80u) == 0LL )
            MmFreePoolMemory(&v12, &v11);
          MiReturnNonPagedPoolVa(v3, v10 >> 12);
          v3 = v8 + v10;
          a2 -= v10;
          v7 += 8LL;
          v12 = v8 + v10;
          v8 += v10;
        }
        while ( v7 <= v6 );
      }
    }
  }
  else
  {
    MiFreePagedPoolPages(v3, v4, v5, 0);
  }
}
