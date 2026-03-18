/*
 * XREFs of MiEndingOffset @ 0x14002B178
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiCanFileBeTruncatedInternal @ 0x14011042C (MiCanFileBeTruncatedInternal.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEndingOffset(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(unsigned int *)(a1 + 36);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v2 = (v1 + *(unsigned int *)(a1 + 40)) << 9;
  else
    v2 = (*(unsigned int *)(a1 + 40) + (v1 | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26))) << 12;
  return v2 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 34) >> 4);
}
