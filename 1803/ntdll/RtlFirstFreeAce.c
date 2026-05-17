/*
 * XREFs of RtlFirstFreeAce @ 0x180037550
 * Callers:
 *     sub_18002E668 @ 0x18002E668 (sub_18002E668.c)
 *     sub_1800302AC @ 0x1800302AC (sub_1800302AC.c)
 *     sub_18003715C @ 0x18003715C (sub_18003715C.c)
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     RtlAddProcessTrustLabelAce @ 0x18006BD70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x18006C1B0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x18006C310 (RtlAddMandatoryAce.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 *     RtlDeleteAce @ 0x180079C70 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x18007AED0 (RtlQueryInformationAcl.c)
 *     RtlAddAccessFilterAce @ 0x1800E2410 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E26A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E2B70 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E2E1C @ 0x1800E2E1C (sub_1800E2E1C.c)
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
