/*
 * XREFs of RtlValidSid @ 0x1800449F0
 * Callers:
 *     RtlLengthSidAsUnicodeString @ 0x180044000 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlValidSecurityDescriptor @ 0x180046E20 (RtlValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x18004C070 (RtlAddMandatoryAce.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 *     sub_18005F868 @ 0x18005F868 (sub_18005F868.c)
 *     sub_18007BB38 @ 0x18007BB38 (sub_18007BB38.c)
 *     sub_18007CFD8 @ 0x18007CFD8 (sub_18007CFD8.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E7700 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E7980 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7E30 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E80D4 @ 0x1800E80D4 (sub_1800E80D4.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
