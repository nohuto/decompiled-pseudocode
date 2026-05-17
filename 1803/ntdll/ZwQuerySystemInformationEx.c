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

__int64 ZwQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 345LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
