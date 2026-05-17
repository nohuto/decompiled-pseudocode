/*
 * XREFs of ZwOpenKeyEx @ 0x1800A7590
 * Callers:
 *     sub_1800D4168 @ 0x1800D4168 (sub_1800D4168.c)
 *     sub_1800D5FB0 @ 0x1800D5FB0 (sub_1800D5FB0.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenKeyEx()
{
  __int64 result; // rax

  result = 277LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
