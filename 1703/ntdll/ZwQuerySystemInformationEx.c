/*
 * XREFs of ZwQuerySystemInformationEx @ 0x1800A7D70
 * Callers:
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     RtlWow64GetProcessMachines @ 0x180068580 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180084FA0 (RtlWow64IsWowGuestMachineSupported.c)
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

  result = 340;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
