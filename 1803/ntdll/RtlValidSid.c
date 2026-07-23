/*
 * XREFs of RtlValidSid @ 0x180037790
 * Callers:
 *     sub_180006FA8 @ 0x180006FA8 (sub_180006FA8.c)
 *     RtlLengthSidAsUnicodeString @ 0x180034FB0 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     RtlAddProcessTrustLabelAce @ 0x18006BD70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddMandatoryAce @ 0x18006C310 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x180071F50 (RtlValidSecurityDescriptor.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     sub_18007E64C @ 0x18007E64C (sub_18007E64C.c)
 *     sub_18007F3E8 @ 0x18007F3E8 (sub_18007F3E8.c)
 *     RtlAddAccessFilterAce @ 0x1800E2410 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E26A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E2B70 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E2E1C @ 0x1800E2E1C (sub_1800E2E1C.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
