/*
 * XREFs of ZwSetInformationObject @ 0x1800A5E70
 * Callers:
 *     sub_180013164 @ 0x180013164 (sub_180013164.c)
 *     sub_1800865E8 @ 0x1800865E8 (sub_1800865E8.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationObject()
{
  __int64 result; // rax

  result = 92LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
