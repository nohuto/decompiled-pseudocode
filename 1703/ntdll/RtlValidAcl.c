/*
 * XREFs of RtlValidAcl @ 0x180044810
 * Callers:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlValidSecurityDescriptor @ 0x180046E20 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x18004BAF0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x18004C070 (RtlAddMandatoryAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x18007B6B0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x18007FA60 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 *     RtlAddAccessFilterAce @ 0x1800E7700 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E7980 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7E30 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E80D4 @ 0x1800E80D4 (sub_1800E80D4.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     sub_1800449A0 @ 0x1800449A0 (sub_1800449A0.c)
 *     sub_1800E8EC4 @ 0x1800E8EC4 (sub_1800E8EC4.c)
 *     sub_1800E9090 @ 0x1800E9090 (sub_1800E9090.c)
 *     sub_1800E9178 @ 0x1800E9178 (sub_1800E9178.c)
 *     sub_1800E91E4 @ 0x1800E91E4 (sub_1800E91E4.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  WORD *p_AclSize; // r14
  PACL v3; // rbx
  unsigned int i; // esi
  ACL *v5; // rcx
  WORD *v6; // r15
  __int64 v7; // rdx
  int v8; // ecx
  BOOLEAN result; // al
  int v10; // ecx

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (WORD *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize )
      return 0;
    if ( *p_AclSize < 8u )
      return 0;
    v3 = Acl + 1;
    for ( i = 0; ; ++i )
    {
      if ( i >= Acl->AceCount )
        return 1;
      v5 = (PACL)((char *)Acl + *p_AclSize);
      if ( &v3->AceCount >= (WORD *)v5 )
        return 0;
      v6 = &v3->AclSize;
      if ( (WORD *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
        return 0;
      v7 = *v6;
      if ( (PACL)((char *)v3 + v7) > v5 )
        return 0;
      if ( v3->AclRevision <= 0x14u && (v8 = 1730063, _bittest(&v8, v3->AclRevision)) )
      {
        if ( !(unsigned __int8)sub_1800449A0(v3) )
          return 0;
      }
      else if ( v3->AclRevision == 4 )
      {
        if ( Acl->AclRevision < 3u )
          return 0;
        result = sub_1800E9178(v3);
        if ( !result )
          return result;
      }
      else if ( v3->AclRevision <= 0x10u && (v10 = 104928, _bittest(&v10, v3->AclRevision)) )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        result = sub_1800E91E4(v3);
        if ( !result )
          return result;
      }
      else if ( v3->AclRevision == 18 )
      {
        result = sub_1800E9090(v3);
        if ( !result )
          return result;
      }
      else if ( v3->AclRevision == 21 )
      {
        result = sub_1800E8EC4(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v7 < 4 )
      {
        return 0;
      }
      v3 = (PACL)((char *)v3 + *v6);
    }
  }
  return 0;
}
