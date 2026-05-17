/*
 * XREFs of iswctype @ 0x18008EA80
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1800683C0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x180068500 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x180068730 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x180068940 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x18008E9B0 (iswalnum.c)
 *     iswalpha @ 0x18008E9C0 (iswalpha.c)
 *     iswdigit @ 0x18008E9F0 (iswdigit.c)
 *     iswgraph @ 0x18008EA00 (iswgraph.c)
 *     iswlower @ 0x18008EA10 (iswlower.c)
 *     iswprint @ 0x18008EA20 (iswprint.c)
 *     iswspace @ 0x18008EA30 (iswspace.c)
 *     iswxdigit @ 0x18008EA40 (iswxdigit.c)
 *     towlower @ 0x180090BA0 (towlower.c)
 *     sub_180099698 @ 0x180099698 (sub_180099698.c)
 *     sub_1800996E8 @ 0x1800996E8 (sub_1800996E8.c)
 *     sub_1800E81C8 @ 0x1800E81C8 (sub_1800E81C8.c)
 *     RtlEthernetStringToAddressW @ 0x1800F15A0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & *((_WORD *)off_180156008 + C);
}
