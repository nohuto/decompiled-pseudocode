/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1800A7DD0
 * Callers:
 *     sub_1800040A0 @ 0x1800040A0 (sub_1800040A0.c)
 *     RtlWaitForWnfMetaNotification @ 0x180087110 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180088F70 (RtlQueryWnfMetaNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  NTSTATUS result; // eax

  result = 343;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
