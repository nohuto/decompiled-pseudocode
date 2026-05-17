/*
 * XREFs of ZwMakeTemporaryObject @ 0x18009CBD0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

__int64 ZwMakeTemporaryObject()
{
  __int64 result; // rax

  result = 265LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
