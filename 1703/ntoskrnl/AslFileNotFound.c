/*
 * XREFs of AslFileNotFound @ 0x1405CF7D4
 * Callers:
 *     AslFileMappingCreate @ 0x1404B445C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x1405BB5C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x14072BDB4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
