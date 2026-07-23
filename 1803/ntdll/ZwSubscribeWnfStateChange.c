/*
 * XREFs of ZwSubscribeWnfStateChange @ 0x18009E0F0
 * Callers:
 *     sub_18004983C @ 0x18004983C (sub_18004983C.c)
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
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

  result = 434;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
