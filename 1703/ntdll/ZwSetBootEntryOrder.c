/*
 * XREFs of ZwSetBootEntryOrder @ 0x1800A8230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  NTSTATUS result; // eax

  result = 378;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
