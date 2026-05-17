/*
 * XREFs of ZwSetSecurityObject @ 0x18009DE90
 * Callers:
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 *     sub_18008A0A4 @ 0x18008A0A4 (sub_18008A0A4.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetSecurityObject()
{
  __int64 result; // rax

  result = 415LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
