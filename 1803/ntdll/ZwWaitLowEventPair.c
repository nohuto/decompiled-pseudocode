/*
 * XREFs of ZwWaitLowEventPair @ 0x18009E450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitLowEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 461;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
