/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14003C460
 * Callers:
 *     ExpSetSystemTime @ 0x140409E44 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405A57F4 (ExpRefreshSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405D1584 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTraceActiveCooling @ 0x1405D8210 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x1406CDA58 (PopDiagTracePassiveCooling.c)
 *     NtSetSystemTime @ 0x140716E0C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
