/*
 * XREFs of RtlCopySid @ 0x1800578A0
 * Callers:
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800571B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180057730 (RtlAddMandatoryAce.c)
 *     RtlCreateAndSetSD @ 0x18005B390 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x180087B20 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008E444 (RtlpAddKnownObjectAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E4AB0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E6CB0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E6ED0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7040 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7380 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
