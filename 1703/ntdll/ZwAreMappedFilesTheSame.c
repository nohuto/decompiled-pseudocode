/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1800A6450
 * Callers:
 *     sub_18001BC68 @ 0x18001BC68 (sub_18001BC68.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  NTSTATUS result; // eax

  result = 139;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
