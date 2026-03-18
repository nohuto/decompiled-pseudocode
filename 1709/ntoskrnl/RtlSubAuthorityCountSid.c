/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140019310
 * Callers:
 *     SepCheckCapabilities @ 0x140447668 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x140447E6C (SeQueryMandatoryLabel.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x140486AE0 (RtlpValidateSidBuffer.c)
 *     RtlIsElevatedRid @ 0x140486B30 (RtlIsElevatedRid.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x140549210 (RtlGetAppContainerSidType.c)
 *     LookupSidInTable @ 0x14057C5D8 (LookupSidInTable.c)
 *     RtlReplaceSidInSd @ 0x140721AB0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
