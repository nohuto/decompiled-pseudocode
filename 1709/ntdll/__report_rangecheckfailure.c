/*
 * XREFs of __report_rangecheckfailure @ 0x180090E18
 * Callers:
 *     _ResGetSystemWindowsDirectory @ 0x18001B1C4 (_ResGetSystemWindowsDirectory.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCanonicalizeDomainName @ 0x18004DF70 (RtlCanonicalizeDomainName.c)
 *     RtlpNameprepAsciiWorker @ 0x18004E6E4 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x18004EF00 (RtlIdnToUnicode.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     strcspn @ 0x180095680 (strcspn.c)
 *     strpbrk @ 0x180095C00 (strpbrk.c)
 *     strspn @ 0x180095CE0 (strspn.c)
 *     strtok_s @ 0x18009C170 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800F6578 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x180090E2C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
