/*
 * XREFs of ZwQueryInformationJobObject @ 0x1800A7A90
 * Callers:
 *     sub_180080F20 @ 0x180080F20 (sub_180080F20.c)
 *     RtlGetSessionProperties @ 0x1800E5260 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationJobObject()
{
  __int64 result; // rax

  result = 317LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
