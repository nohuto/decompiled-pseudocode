/*
 * XREFs of ZwQueryFullAttributesFile @ 0x1800A7A10
 * Callers:
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryFullAttributesFile()
{
  __int64 result; // rax

  result = 313LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
