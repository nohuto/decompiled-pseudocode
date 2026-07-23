/*
 * XREFs of RtlValidAcl @ 0x1800375A0
 * Callers:
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     RtlAddProcessTrustLabelAce @ 0x18006BD70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x18006C1B0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x18006C310 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x180071F50 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180076560 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x180079C70 (RtlDeleteAce.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 *     RtlAddAccessFilterAce @ 0x1800E2410 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E26A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E2B70 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E2E1C @ 0x1800E2E1C (sub_1800E2E1C.c)
 * Callees:
 *     sub_18003773C @ 0x18003773C (sub_18003773C.c)
 *     sub_1800E4104 @ 0x1800E4104 (sub_1800E4104.c)
 *     sub_1800E42D0 @ 0x1800E42D0 (sub_1800E42D0.c)
 *     sub_1800E43B8 @ 0x1800E43B8 (sub_1800E43B8.c)
 *     sub_1800E4434 @ 0x1800E4434 (sub_1800E4434.c)
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
        if ( !(unsigned __int8)sub_18003773C(v3) )
          return 0;
      }
      else if ( v3->AclRevision == 4 )
      {
        if ( Acl->AclRevision < 3u )
          return 0;
        result = sub_1800E43B8(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)(v3->AclRevision - 5) <= 3u
             || (unsigned __int8)(v3->AclRevision - 11) <= 1u
             || (unsigned __int8)(v3->AclRevision - 15) <= 1u )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        result = sub_1800E4434(v3);
        if ( !result )
          return result;
      }
      else if ( v3->AclRevision == 18 )
      {
        result = sub_1800E42D0(v3);
        if ( !result )
          return result;
      }
      else if ( v3->AclRevision == 21 )
      {
        result = sub_1800E4104(v3);
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
