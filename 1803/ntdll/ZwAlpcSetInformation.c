/*
 * XREFs of ZwAlpcSetInformation @ 0x18009BC10
 * Callers:
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     TpCallbackIndependent @ 0x1800675F0 (TpCallbackIndependent.c)
 *     AlpcRegisterCompletionList @ 0x180082500 (AlpcRegisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800DAAE0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     AlpcRundownCompletionList @ 0x1800DAE20 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x1800DAE40 (AlpcUnregisterCompletionList.c)
 *     sub_180107F84 @ 0x180107F84 (sub_180107F84.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  NTSTATUS result; // eax

  result = 139;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
