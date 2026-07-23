/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180087330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  NTSTATUS v4; // eax
  void *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = sub_180032C0C((unsigned __int64)BaseOfImage, MappedAsImage, DirectoryEntry, Size, (char **)&v7);
  v5 = (void *)v7;
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
