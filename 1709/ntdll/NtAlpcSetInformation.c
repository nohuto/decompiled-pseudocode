/*
 * XREFs of NtAlpcSetInformation @ 0x1800A11F0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18000F0A0 (TppAlpcpExecuteCallback.c)
 *     TppAllocAlpcCompletion @ 0x180013B30 (TppAllocAlpcCompletion.c)
 *     TpCallbackIndependent @ 0x18006CA50 (TpCallbackIndependent.c)
 *     AlpcRegisterCompletionList @ 0x1800873D0 (AlpcRegisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFBB0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     AlpcRundownCompletionList @ 0x1800DFEF0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x1800DFF10 (AlpcUnregisterCompletionList.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18010A784 (TppFastAlpcAdjustConcurrencyCount.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcSetInformation(
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
