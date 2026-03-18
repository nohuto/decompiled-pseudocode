/*
 * XREFs of MiCacheImageSymbols @ 0x1405F98C8
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall MiCacheImageSymbols(void *a1)
{
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 6u, &Size);
}
