/*
 * XREFs of ZwGetCompleteWnfStateSubscription @ 0x18009C7F0
 * Callers:
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 *     Callback @ 0x1800D8F60 (Callback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  NTSTATUS result; // eax

  result = 234;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
