/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x180084340
 * Callers:
 *     sub_1800841E4 @ 0x1800841E4 (sub_1800841E4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl LdrSetDefaultDllDirectories(ULONG DirectoryFlags)
{
  int v1; // eax

  if ( !DirectoryFlags )
    return -1073741811;
  v1 = 32512;
  if ( (dword_180158674 & 4) == 0 )
    v1 = 31488;
  if ( ((~v1 | 0x100) & DirectoryFlags) != 0 )
    return -1073741811;
  dword_18015BF58 = DirectoryFlags;
  return 0;
}
