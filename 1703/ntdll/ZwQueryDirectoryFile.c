/*
 * XREFs of ZwQueryDirectoryFile @ 0x1800A59A0
 * Callers:
 *     sub_1800E18A4 @ 0x1800E18A4 (sub_1800E18A4.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 *     sub_18010CFA0 @ 0x18010CFA0 (sub_18010CFA0.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDirectoryFile()
{
  __int64 result; // rax

  result = 53LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
