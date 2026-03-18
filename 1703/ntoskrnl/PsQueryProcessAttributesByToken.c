/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x1404F77A0
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1404ED4D0 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x1404F7258 (PsQueryProcessAttributes.c)
 *     SeQuerySigningPolicyWorker @ 0x140545960 (SeQuerySigningPolicyWorker.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406D29A8 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140709828 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x140712820 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (struct _KTHREAD *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (struct _KTHREAD *)&PspPackagedAppClaim);
}
