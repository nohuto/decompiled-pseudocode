/*
 * XREFs of ZwModifyBootEntry @ 0x18009CC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  NTSTATUS result; // eax

  result = 270;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
