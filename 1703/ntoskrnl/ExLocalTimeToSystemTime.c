/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140136510
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x140409AF8 (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x1405A57F4 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x140716E0C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
