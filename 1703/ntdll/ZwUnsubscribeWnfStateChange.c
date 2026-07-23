/*
 * XREFs of ZwUnsubscribeWnfStateChange @ 0x1800A8AD0
 * Callers:
 *     sub_1800129DC @ 0x1800129DC (sub_1800129DC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  NTSTATUS result; // eax

  result = 447;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
