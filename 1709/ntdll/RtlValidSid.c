/*
 * XREFs of RtlValidSid @ 0x18002DA50
 * Callers:
 *     EvtIntReportEventWorker @ 0x180016898 (EvtIntReportEventWorker.c)
 *     RtlLengthSidAsUnicodeString @ 0x18002C1D0 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x18002D250 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x18002D560 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlAddMandatoryAce @ 0x180057730 (RtlAddMandatoryAce.c)
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 *     RtlpValidateSidBuffer @ 0x18007817C (RtlpValidateSidBuffer.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180078AE8 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAddProcessTrustLabelAce @ 0x180087B20 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008E444 (RtlpAddKnownObjectAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E6CB0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E6ED0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7040 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7380 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
