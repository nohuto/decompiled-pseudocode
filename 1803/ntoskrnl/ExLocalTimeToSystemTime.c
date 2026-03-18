/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14014D0A0
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x14047140C (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
