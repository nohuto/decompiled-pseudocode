/*
 * XREFs of ZwFreezeRegistry @ 0x18009C790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreezeRegistry(ULONG TimeOutInSeconds)
{
  NTSTATUS result; // eax

  result = 231;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
