/*
 * XREFs of ZwCreateUserProcess @ 0x1800A6AF0
 * Callers:
 *     sub_18008D520 @ 0x18008D520 (sub_18008D520.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateUserProcess()
{
  __int64 result; // rax

  result = 192LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
