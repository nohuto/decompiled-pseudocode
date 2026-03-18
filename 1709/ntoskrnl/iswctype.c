/*
 * XREFs of iswctype @ 0x140161120
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140124360 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1401243F0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140124AF0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140124C20 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x14015F210 (iswalnum.c)
 *     iswdigit @ 0x14015F230 (iswdigit.c)
 *     iswspace @ 0x14015F250 (iswspace.c)
 *     towlower @ 0x1401602D0 (towlower.c)
 *     _whiteout @ 0x140167750 (_whiteout.c)
 *     _winput_s @ 0x1401677A8 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1402555F0 (RtlEthernetStringToAddressW.c)
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
