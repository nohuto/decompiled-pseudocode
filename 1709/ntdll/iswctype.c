/*
 * XREFs of iswctype @ 0x180094520
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x18004E170 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18004E2E0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x18004EB00 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18004EC40 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x180094450 (iswalnum.c)
 *     iswalpha @ 0x180094460 (iswalpha.c)
 *     iswdigit @ 0x180094490 (iswdigit.c)
 *     iswgraph @ 0x1800944A0 (iswgraph.c)
 *     iswlower @ 0x1800944B0 (iswlower.c)
 *     iswprint @ 0x1800944C0 (iswprint.c)
 *     iswspace @ 0x1800944D0 (iswspace.c)
 *     iswxdigit @ 0x1800944E0 (iswxdigit.c)
 *     towlower @ 0x1800966D0 (towlower.c)
 *     _whiteout @ 0x18009EE84 (_whiteout.c)
 *     _winput_s @ 0x18009EED4 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBD58 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800F5070 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
