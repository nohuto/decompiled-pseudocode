/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140145660
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x14043A854 (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
