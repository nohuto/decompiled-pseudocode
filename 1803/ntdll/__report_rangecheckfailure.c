/*
 * XREFs of __report_rangecheckfailure @ 0x18008B278
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlCanonicalizeDomainName @ 0x180067E20 (RtlCanonicalizeDomainName.c)
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 *     strcspn @ 0x18008FBF0 (strcspn.c)
 *     strpbrk @ 0x180090170 (strpbrk.c)
 *     strspn @ 0x180090260 (strspn.c)
 *     strtok_s @ 0x1800967A0 (strtok_s.c)
 *     sub_1800F29FC @ 0x1800F29FC (sub_1800F29FC.c)
 * Callees:
 *     __report_securityfailure @ 0x18008B28C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
