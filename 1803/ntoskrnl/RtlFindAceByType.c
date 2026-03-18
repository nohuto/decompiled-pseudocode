/*
 * XREFs of RtlFindAceByType @ 0x14005C9A0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14005CA70 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x14006B9C8 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x1400BAED0 (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x14029FB94 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402A039C (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1402C5550 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x1404C6710 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x1404C8260 (RtlpGenerateInheritAcl.c)
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 *     SeQueryMandatoryLabel @ 0x140571340 (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1407863E4 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1407958D4 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // r11d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
