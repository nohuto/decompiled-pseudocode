/*
 * XREFs of RtlFirstFreeAce @ 0x1404C7400
 * Callers:
 *     RtlQueryInformationAcl @ 0x1404C1330 (RtlQueryInformationAcl.c)
 *     RtlpInheritAcl2 @ 0x1404C5AE0 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x1404C72B0 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x140546E50 (RtlAddAce.c)
 *     RtlDeleteAce @ 0x1405471D0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140642A60 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140783BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140783F00 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140784238 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140796F78 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140797194 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1407972F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140797448 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlFirstFreeAce(PACL Acl, PACE *Ace)
{
  unsigned int v3; // ecx
  struct _ACE *v4; // r8

  v3 = 0;
  *Ace = 0LL;
  v4 = (struct _ACE *)&Acl[1];
  if ( Acl->AceCount )
  {
    while ( v4 < (struct _ACE *)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (struct _ACE *)((char *)v4 + v4->Header.AceSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v4 <= (struct _ACE *)((char *)Acl + Acl->AclSize) )
      *Ace = v4;
    return 1;
  }
}
