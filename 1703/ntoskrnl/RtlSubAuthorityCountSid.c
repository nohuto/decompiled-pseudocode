/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14008C0B0
 * Callers:
 *     SepCheckCapabilities @ 0x14041E774 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x14041E8D4 (SeQueryMandatoryLabel.c)
 *     RtlpValidateSidBuffer @ 0x140469DC8 (RtlpValidateSidBuffer.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x1404A4820 (RtlGetAppContainerSidType.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x1404FF1F0 (RtlIsElevatedRid.c)
 *     LookupSidInTable @ 0x14057FC7C (LookupSidInTable.c)
 *     RtlReplaceSidInSd @ 0x1406E9BA0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
