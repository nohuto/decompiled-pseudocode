/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x140483CF0
 * Callers:
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1404593A4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404DCA98 (EtwpQueryTokenPackageInfo.c)
 *     SeQuerySigningPolicyWorker @ 0x14053A578 (SeQuerySigningPolicyWorker.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140743848 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x140750908 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
}
