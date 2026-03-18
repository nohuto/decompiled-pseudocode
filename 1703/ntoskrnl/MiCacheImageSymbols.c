/*
 * XREFs of MiCacheImageSymbols @ 0x1404B1270
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall MiCacheImageSymbols(void *a1)
{
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 6u, &Size);
}
