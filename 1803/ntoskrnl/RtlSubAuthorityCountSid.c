/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14005C810
 * Callers:
 *     RtlIsElevatedRid @ 0x1404C2450 (RtlIsElevatedRid.c)
 *     SepCheckCapabilities @ 0x14053EE14 (SepCheckCapabilities.c)
 *     RtlpValidateSidBuffer @ 0x140540A60 (RtlpValidateSidBuffer.c)
 *     RtlGetAppContainerSidType @ 0x140540E30 (RtlGetAppContainerSidType.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SeQueryMandatoryLabel @ 0x140571340 (SeQueryMandatoryLabel.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     LookupSidInTable @ 0x14060181C (LookupSidInTable.c)
 *     RtlReplaceSidInSd @ 0x140785250 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
