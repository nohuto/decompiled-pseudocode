/*
 * XREFs of wcstol @ 0x14016C0C4
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x14002DEF0 (RtlIpv6StringToAddressW.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14058FB54 (DrvDbSplitDeviceIdDriverInfMatch.c)
 * Callees:
 *     wcstoxlX @ 0x14016BEB4 (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 0, 0);
}
