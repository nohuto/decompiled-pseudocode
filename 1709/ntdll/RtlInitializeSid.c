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

__int64 __fastcall RtlInitializeSid(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  return 0LL;
}
