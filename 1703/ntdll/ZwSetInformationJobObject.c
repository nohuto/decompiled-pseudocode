/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A8430
 * Callers:
 *     sub_180080F20 @ 0x180080F20 (sub_180080F20.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 394LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
