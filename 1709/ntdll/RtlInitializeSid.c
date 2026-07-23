/*
 * XREFs of RtlInitializeSid @ 0x180057700
 * Callers:
 *     RtlGetAppContainerParent @ 0x1800017E0 (RtlGetAppContainerParent.c)
 *     WerpAllocateAndInitializeSid @ 0x18000265C (WerpAllocateAndInitializeSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002DC20 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCapabilityCheck @ 0x1800538D0 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180057570 (RtlInitializeSidEx.c)
 *     RtlpOwnerAcesPresent @ 0x1800575C4 (RtlpOwnerAcesPresent.c)
 *     RtlCreateServiceSid @ 0x180057990 (RtlCreateServiceSid.c)
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 *     RtlCreateVirtualAccountSid @ 0x18005B1C0 (RtlCreateVirtualAccountSid.c)
 *     RtlDefaultNpAcl @ 0x1800881D0 (RtlDefaultNpAcl.c)
 *     RtlpCompareKnownObjectAces @ 0x18008D710 (RtlpCompareKnownObjectAces.c)
 *     RtlpCompareKnownAces @ 0x1800E5274 (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E6538 (RtlpValidLabelSubjectContext.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
