/*
 * XREFs of iswctype @ 0x14016C840
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x14002DE60 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x14002DEF0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x14002EA80 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x14002EBB0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x14016A7D0 (iswalnum.c)
 *     iswdigit @ 0x14016A7E0 (iswdigit.c)
 *     iswspace @ 0x14016A7F0 (iswspace.c)
 *     towlower @ 0x14016B9F0 (towlower.c)
 *     _whiteout @ 0x140172E50 (_whiteout.c)
 *     _winput_s @ 0x140172EA8 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14023F440 (RtlEthernetStringToAddressW.c)
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
