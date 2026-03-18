/*
 * XREFs of NtSetIntervalProfile @ 0x14056DF2C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x14056DF7C (KeSetIntervalProfile.c)
 */

NTSTATUS __stdcall NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE ClockSource)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  KeSetIntervalProfile(Interval, (unsigned int)ClockSource);
  return 0;
}
