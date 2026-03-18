/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x1404F8FA0
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1404F7BDC (SeQuerySigningPolicyWorker.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404F8DC4 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14055A1FC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1407A5470 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1407B15DC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (struct _KTHREAD *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (struct _KTHREAD *)&PspPackagedAppClaim);
}
