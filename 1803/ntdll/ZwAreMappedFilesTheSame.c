/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x18009BC30
 * Callers:
 *     sub_18002C388 @ 0x18002C388 (sub_18002C388.c)
 * Callees:
 *     <none>
 */

__int64 ZwAreMappedFilesTheSame()
{
  __int64 result; // rax

  result = 140LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
