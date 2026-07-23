/*
 * XREFs of ZwRegisterProtocolAddressInformation @ 0x18009D730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRegisterProtocolAddressInformation(
        HANDLE ResourceManager,
        PCRM_PROTOCOL_ID ProtocolId,
        ULONG ProtocolInformationSize,
        PVOID ProtocolInformation,
        ULONG CreateOptions)
{
  NTSTATUS result; // eax

  result = 356;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
