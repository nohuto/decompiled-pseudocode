/*
 * XREFs of RtlFirstFreeAce @ 0x1404F5C90
 * Callers:
 *     RtlDeleteAce @ 0x140453040 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x1404A23F4 (RtlAddMandatoryAce.c)
 *     RtlQueryInformationAcl @ 0x1404F4D10 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1404F5B60 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x14051E100 (RtlpInheritAcl2.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405C55B0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1406E86E0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1406E89D0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406E8CF4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1406FBCEC (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1406FBF00 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406FC05C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406FC1B4 (SddlAddScopedPolicyIDAce.c)
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
