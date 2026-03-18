/*
 * XREFs of ExSystemTimeToLocalTime @ 0x140131D60
 * Callers:
 *     ExpSetSystemTime @ 0x14043A934 (ExpSetSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405EC790 (CmpUpdateReorganizeRegistryValues.c)
 *     PopDiagTraceActiveCooling @ 0x1407018C0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14070420C (PopDiagTracePassiveCooling.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
