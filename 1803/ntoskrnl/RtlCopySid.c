/*
 * XREFs of RtlCopySid @ 0x1404D4480
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1401802F0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1402A185C (SepGetSidValuesDump.c)
 *     SepDuplicateSid @ 0x1404D2FD0 (SepDuplicateSid.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404D4070 (EtwpGetSidExtendedHeaderItem.c)
 *     SeQueryUserSidToken @ 0x1404D4FE8 (SeQueryUserSidToken.c)
 *     SepSetTokenPackage @ 0x1404D5088 (SepSetTokenPackage.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14053ED50 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 *     SepAdjustGroups @ 0x140546C58 (SepAdjustGroups.c)
 *     PspAssignProcessQuotaBlock @ 0x140571E7C (PspAssignProcessQuotaBlock.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     RtlAddProcessTrustLabelAce @ 0x140642A60 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140783BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140783F00 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140784238 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140792750 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794D64 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x140796F78 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140797194 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1407972F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140797448 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
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
