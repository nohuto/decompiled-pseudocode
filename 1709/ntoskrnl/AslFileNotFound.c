/*
 * XREFs of AslFileNotFound @ 0x140542AA4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140541F70 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x140545E54 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x14076EAE4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
