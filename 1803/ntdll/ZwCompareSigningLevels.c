/*
 * XREFs of ZwCompareSigningLevels @ 0x18009BDF0
 * Callers:
 *     sub_180082248 @ 0x180082248 (sub_180082248.c)
 *     sub_1800877B0 @ 0x1800877B0 (sub_1800877B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  NTSTATUS result; // eax

  result = 154;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
