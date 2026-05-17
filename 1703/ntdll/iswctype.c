/*
 * XREFs of iswctype @ 0x180099620
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18006A050 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18006A190 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x18006A3B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18006A520 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x180099550 (iswalnum.c)
 *     iswalpha @ 0x180099560 (iswalpha.c)
 *     iswdigit @ 0x180099590 (iswdigit.c)
 *     iswgraph @ 0x1800995A0 (iswgraph.c)
 *     iswlower @ 0x1800995B0 (iswlower.c)
 *     iswprint @ 0x1800995C0 (iswprint.c)
 *     iswspace @ 0x1800995D0 (iswspace.c)
 *     iswxdigit @ 0x1800995E0 (iswxdigit.c)
 *     towlower @ 0x18009B8C0 (towlower.c)
 *     sub_1800A40C8 @ 0x1800A40C8 (sub_1800A40C8.c)
 *     sub_1800A4118 @ 0x1800A4118 (sub_1800A4118.c)
 *     sub_1800EC1D8 @ 0x1800EC1D8 (sub_1800EC1D8.c)
 *     RtlEthernetStringToAddressW @ 0x1800F4410 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & *((_WORD *)off_180155008 + C);
}
