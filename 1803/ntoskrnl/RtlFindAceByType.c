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

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r10
  unsigned int v5; // r11d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
