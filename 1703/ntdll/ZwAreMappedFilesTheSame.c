/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1800A6450
 * Callers:
 *     sub_18001BC68 @ 0x18001BC68 (sub_18001BC68.c)
 * Callees:
 *     <none>
 */

__int64 ZwAreMappedFilesTheSame()
{
  __int64 result; // rax

  result = 139LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
