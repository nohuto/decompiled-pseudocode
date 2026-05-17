/*
 * XREFs of wcstol @ 0x18009BF60
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x18006A520 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     sub_18009BD48 @ 0x18009BD48 (sub_18009BD48.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18009BD48((__int64)&off_180110B08, (unsigned __int16 *)String, EndPtr, Radix, 0, 0);
}
