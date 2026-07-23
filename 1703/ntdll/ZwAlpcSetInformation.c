/*
 * XREFs of ZwAlpcSetInformation @ 0x1800A6430
 * Callers:
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     TpCallbackIndependent @ 0x180067460 (TpCallbackIndependent.c)
 *     sub_18007F1E0 @ 0x18007F1E0 (sub_18007F1E0.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     AlpcRegisterCompletionList @ 0x18008A540 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x18008ACF0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x18008AD10 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800E1260 (AlpcAdjustCompletionListConcurrencyCount.c)
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

  result = 138;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
