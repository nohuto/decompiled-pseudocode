/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A2B90
 * Callers:
 *     TppPoolUpdateNodeRelation @ 0x18000B078 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x180016520 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800820E0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008B7E0 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 343LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
