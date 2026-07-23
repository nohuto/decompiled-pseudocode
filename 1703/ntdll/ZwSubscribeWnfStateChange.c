/*
 * XREFs of ZwSubscribeWnfStateChange @ 0x1800A8890
 * Callers:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 *     sub_180019A2C @ 0x180019A2C (sub_180019A2C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  NTSTATUS result; // eax

  result = 429;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
