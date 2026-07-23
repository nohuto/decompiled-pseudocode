/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x18007B7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
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

  v4 = sub_18001014C((unsigned __int64)BaseOfImage, MappedAsImage, DirectoryEntry, Size, (char **)&v7);
  v5 = (void *)v7;
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
