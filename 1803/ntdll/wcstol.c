/*
 * XREFs of wcstol @ 0x1800911B0
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x180068940 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     sub_180090F98 @ 0x180090F98 (sub_180090F98.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_180090F98((__int64)&off_180110AF8, (unsigned __int16 *)String, EndPtr, Radix, 0, 0);
}
