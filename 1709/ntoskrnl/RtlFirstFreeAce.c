/*
 * XREFs of RtlFirstFreeAce @ 0x140486230
 * Callers:
 *     RtlDeleteAce @ 0x1404497D0 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x140485250 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140486100 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x1404BE9E0 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x14054A554 (RtlAddMandatoryAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405D8980 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1407204C0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1407207F0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140720B18 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407336D4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1407338F0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140733A4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140733BA4 (SddlAddScopedPolicyIDAce.c)
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
