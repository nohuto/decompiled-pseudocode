/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x18007F690
 * Callers:
 *     sub_18007F528 @ 0x18007F528 (sub_18007F528.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl LdrSetDefaultDllDirectories(ULONG DirectoryFlags)
{
  if ( !DirectoryFlags || ((~((dword_1801596D4 & 4 | 0x7A) << 8) | 0x100) & DirectoryFlags) != 0 )
    return -1073741811;
  dword_18015CFE0 = DirectoryFlags;
  return 0;
}
