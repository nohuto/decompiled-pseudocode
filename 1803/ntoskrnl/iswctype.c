/*
 * XREFs of iswctype @ 0x14018B2C0
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1400C72B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1400C7340 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1400C84E0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1400C8550 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x140188F60 (iswalnum.c)
 *     iswdigit @ 0x140188F80 (iswdigit.c)
 *     iswspace @ 0x140188FA0 (iswspace.c)
 *     towlower @ 0x14018A470 (towlower.c)
 *     _whiteout @ 0x140191764 (_whiteout.c)
 *     _winput_s @ 0x1401917BC (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14028D630 (RtlEthernetStringToAddressW.c)
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
