/*
 * XREFs of ZwQuerySystemInformationEx @ 0x1800A7D70
 * Callers:
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     RtlWow64GetProcessMachines @ 0x180068580 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180084FA0 (RtlWow64IsWowGuestMachineSupported.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 340LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
