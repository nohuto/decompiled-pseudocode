/*
 * XREFs of ZwQueryInformationFile @ 0x18009ACE0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800DDC78 @ 0x1800DDC78 (sub_1800DDC78.c)
 *     sub_1800DE93C @ 0x1800DE93C (sub_1800DE93C.c)
 *     sub_1800F2824 @ 0x1800F2824 (sub_1800F2824.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800F4750 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
