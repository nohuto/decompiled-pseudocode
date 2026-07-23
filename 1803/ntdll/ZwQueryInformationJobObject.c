/*
 * XREFs of ZwQueryInformationJobObject @ 0x18009D2F0
 * Callers:
 *     sub_180056190 @ 0x180056190 (sub_180056190.c)
 *     RtlGetSessionProperties @ 0x1800DFD10 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 322;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
