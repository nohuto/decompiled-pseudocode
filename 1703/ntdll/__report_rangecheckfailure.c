/*
 * XREFs of __report_rangecheckfailure @ 0x180096038
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     sub_18005DD3C @ 0x18005DD3C (sub_18005DD3C.c)
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 *     RtlIdnToUnicode @ 0x18006A930 (RtlIdnToUnicode.c)
 *     strcspn @ 0x18009A870 (strcspn.c)
 *     strpbrk @ 0x18009ADF0 (strpbrk.c)
 *     strspn @ 0x18009AED0 (strspn.c)
 *     strtok_s @ 0x1800A1410 (strtok_s.c)
 *     sub_1800F5558 @ 0x1800F5558 (sub_1800F5558.c)
 * Callees:
 *     __report_securityfailure @ 0x18009604C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
