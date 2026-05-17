/*
 * XREFs of ZwMakeTemporaryObject @ 0x1800A73D0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

__int64 ZwMakeTemporaryObject()
{
  __int64 result; // rax

  result = 263LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
