/*
 * XREFs of RtlCopySid @ 0x14049CB70
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x140150EB0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x14025FDB4 (SepGetSidValuesDump.c)
 *     SepAdjustGroups @ 0x14045C1CC (SepAdjustGroups.c)
 *     SepDuplicateSid @ 0x14049C980 (SepDuplicateSid.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14049CA10 (EtwpGetSidExtendedHeaderItem.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 *     RtlAddMandatoryAce @ 0x14054A554 (RtlAddMandatoryAce.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     SepSetTokenPackage @ 0x1405646C8 (SepSetTokenPackage.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14056477C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     PspAssignProcessQuotaBlock @ 0x140582A58 (PspAssignProcessQuotaBlock.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405D8980 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1407204C0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1407207F0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140720B18 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x14072E6B0 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140731478 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1407336D4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1407338F0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140733A4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140733BA4 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
