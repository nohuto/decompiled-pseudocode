/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A28B0
 * Callers:
 *     TppJobpRundownJob @ 0x180013F30 (TppJobpRundownJob.c)
 *     RtlGetSessionProperties @ 0x1800E4B90 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 320;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
