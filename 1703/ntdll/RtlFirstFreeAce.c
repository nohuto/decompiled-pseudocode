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

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v3; // ecx
  PACL v4; // r8

  v3 = 0;
  *FirstFree = 0LL;
  v4 = Acl + 1;
  if ( Acl->AceCount )
  {
    while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (PACL)((char *)v4 + v4->AclSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v4 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v4;
    return 1;
  }
}
