/*
 * XREFs of ZwSetSecurityObject @ 0x1800A8630
 * Callers:
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetSecurityObject()
{
  __int64 result; // rax

  result = 410LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
