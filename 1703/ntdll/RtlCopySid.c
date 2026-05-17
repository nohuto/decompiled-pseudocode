/*
 * XREFs of RtlCopySid @ 0x18004C1E0
 * Callers:
 *     sub_18004B8F8 @ 0x18004B8F8 (sub_18004B8F8.c)
 *     RtlAddMandatoryAce @ 0x18004C070 (RtlAddMandatoryAce.c)
 *     RtlCreateAndSetSD @ 0x180075B60 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E5180 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E7700 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E7980 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7E30 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E80D4 @ 0x1800E80D4 (sub_1800E80D4.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
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
