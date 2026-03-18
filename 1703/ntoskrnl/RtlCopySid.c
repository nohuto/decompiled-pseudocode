/*
 * XREFs of RtlCopySid @ 0x1404F1BD0
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x140162440 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x140248690 (SepGetSidValuesDump.c)
 *     PspAssignProcessQuotaBlock @ 0x140448638 (PspAssignProcessQuotaBlock.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140462774 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepAdjustGroups @ 0x14046D980 (SepAdjustGroups.c)
 *     RtlAddMandatoryAce @ 0x1404A23F4 (RtlAddMandatoryAce.c)
 *     SepDuplicateSid @ 0x1404F19E4 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x1404F1A70 (SepSetTokenPackage.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405C55B0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1406E86E0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1406E89D0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406E8CF4 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1406F6B90 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406F9A28 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1406FBCEC (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1406FBF00 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406FC05C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406FC1B4 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
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
