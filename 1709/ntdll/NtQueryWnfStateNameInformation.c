/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A2BF0
 * Callers:
 *     SignalStartWerSvc @ 0x1800027D0 (SignalStartWerSvc.c)
 *     RtlWaitForWnfMetaNotification @ 0x18006D800 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180087A90 (RtlQueryWnfMetaNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  NTSTATUS result; // eax

  result = 346;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
