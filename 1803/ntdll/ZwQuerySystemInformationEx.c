/*
 * XREFs of ZwQuerySystemInformationEx @ 0x18009D5D0
 * Callers:
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     RtlWow64GetProcessMachines @ 0x18007BFC0 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007E420 (RtlWow64IsWowGuestMachineSupported.c)
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 345;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
