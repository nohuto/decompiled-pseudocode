/*
 * XREFs of RtlCopySid @ 0x18006C490
 * Callers:
 *     sub_18002E46C @ 0x18002E46C (sub_18002E46C.c)
 *     RtlAddProcessTrustLabelAce @ 0x18006BD70 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x18006BEC0 (RtlCreateAndSetSD.c)
 *     RtlAddMandatoryAce @ 0x18006C310 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800DFC30 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E2410 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E26A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E2B70 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E2E1C @ 0x1800E2E1C (sub_1800E2E1C.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
