/*
 * XREFs of MiLockPagableSections @ 0x1408296B4
 * Callers:
 *     MiCancelPhase0Locking @ 0x140516B34 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x1408295D8 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140829664 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 *     MiImagePagable @ 0x140516BA8 (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x14051703C (MmImageSectionPagable.c)
 */

void __fastcall MiLockPagableSections(__int64 a1, int a2)
{
  char *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = *(char **)(a1 + 48);
  if ( MiImagePagable((PVOID *)a1, (unsigned __int64)v2) )
  {
    v4 = RtlImageNtHeader(v2);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v6 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( (unsigned int)MmImageSectionPagable(v6) )
        {
          if ( a2 == 1 )
            MmLockPagableDataSection(&v2[*(unsigned int *)(v6 + 12)]);
          else
            MiLockPagableImageSection(v6, 0);
        }
        v6 += 40LL;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
}
