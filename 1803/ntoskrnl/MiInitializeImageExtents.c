/*
 * XREFs of MiInitializeImageExtents @ 0x14074E70C
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x14004B184 (MiDeleteSegmentPages.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeImageExtents(_QWORD *a1)
{
  ULONG_PTR v2; // rbx
  int FileExtents; // esi
  __int64 CommittedPages; // rbx

  v2 = (ULONG_PTR)(a1 + 16);
  FileExtents = 0;
  while ( v2 )
  {
    FileExtents = MiAllocateFileExtents(v2, 0, *(_QWORD *)(v2 + 8), *(_DWORD *)(v2 + 44), 0);
    if ( FileExtents < 0 )
    {
      CommittedPages = MiGetCommittedPages(a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16LL) = 0LL;
      MiDeleteSegmentPages((__int64)a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16LL) = CommittedPages;
      return (unsigned int)FileExtents;
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  return (unsigned int)FileExtents;
}
