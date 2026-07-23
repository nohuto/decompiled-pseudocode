/*
 * XREFs of RtlFindAceByType @ 0x140087840
 * Callers:
 *     RtlIsUntrustedObject @ 0x14000C7D0 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x140019E94 (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140087910 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepGetScopedPolicySid @ 0x14025E204 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14025E908 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14028F8D8 (AdtpBuildContextFromSecurityDescriptor.c)
 *     SeQueryMandatoryLabel @ 0x140447E6C (SeQueryMandatoryLabel.c)
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x1404BF510 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x1404C05B0 (RtlpGenerateInheritAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140722C44 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x140731FD4 (SepSDContainsAttributeACE.c)
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
