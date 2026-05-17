/*
 * XREFs of RtlFirstFreeAce @ 0x180049B80
 * Callers:
 *     sub_180049308 @ 0x180049308 (sub_180049308.c)
 *     sub_1800498D0 @ 0x1800498D0 (sub_1800498D0.c)
 *     sub_18004AC04 @ 0x18004AC04 (sub_18004AC04.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     RtlAddAce @ 0x18004BAF0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x18004C070 (RtlAddMandatoryAce.c)
 *     RtlQueryInformationAcl @ 0x18004CA40 (RtlQueryInformationAcl.c)
 *     RtlDeleteAce @ 0x18007FA60 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E7700 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E7980 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7E30 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E80D4 @ 0x1800E80D4 (sub_1800E80D4.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8

  v3 = 0;
  *a2 = 0LL;
  v4 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v4 < (unsigned __int64)*(unsigned __int16 *)(a1 + 2) + a1 )
    {
      ++v3;
      v4 += *(unsigned __int16 *)(v4 + 2);
      if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v4 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v4;
    return 1;
  }
}
