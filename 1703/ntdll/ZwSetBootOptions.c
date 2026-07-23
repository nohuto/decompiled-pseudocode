/*
 * XREFs of ZwSetBootOptions @ 0x1800A8250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  NTSTATUS result; // eax

  result = 379;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
