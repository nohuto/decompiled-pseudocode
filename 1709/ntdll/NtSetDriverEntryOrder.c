/*
 * XREFs of NtSetDriverEntryOrder @ 0x1800A3170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  NTSTATUS result; // eax

  result = 390;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
