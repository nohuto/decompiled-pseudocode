/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1400D25F0
 * Callers:
 *     ExpSetSystemTime @ 0x1404710F4 (ExpSetSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x140643FE0 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14065068C (CmpUpdateReorganizeRegistryValues.c)
 *     PopDiagTracePassiveCooling @ 0x1407683A0 (PopDiagTracePassiveCooling.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
