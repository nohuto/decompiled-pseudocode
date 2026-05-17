/*
 * XREFs of ZwOpenDirectoryObject @ 0x18009B5C0
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenDirectoryObject()
{
  __int64 result; // rax

  result = 88LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
