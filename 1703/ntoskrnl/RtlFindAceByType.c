/*
 * XREFs of RtlFindAceByType @ 0x1400DBB80
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x140066F30 (RtlIsUntrustedObject.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140093C70 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepGetScopedPolicySid @ 0x140246AC4 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402471D0 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14026559C (AdtpBuildContextFromSecurityDescriptor.c)
 *     SeQueryMandatoryLabel @ 0x14041E8D4 (SeQueryMandatoryLabel.c)
 *     RtlpGenerateInheritAcl @ 0x140471690 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x140471BB0 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1406EAD44 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1406FA598 (SepSDContainsAttributeACE.c)
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
