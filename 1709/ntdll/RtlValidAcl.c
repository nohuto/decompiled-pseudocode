/*
 * XREFs of RtlValidAcl @ 0x18002D7F0
 * Callers:
 *     RtlValidSecurityDescriptor @ 0x18002D560 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlAddMandatoryAce @ 0x180057730 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x18005B6F0 (RtlAddAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180074620 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x18007CAB0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180087B20 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008E444 (RtlpAddKnownObjectAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x1800E6CB0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E6ED0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7040 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7380 (RtlAddScopedPolicyIDAce.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x1800E8318 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1800E84E4 (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800E85CC (RtlpValidCompoundAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  unsigned __int16 *p_AclSize; // r15
  PACL v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // r13d
  ACL *v7; // rcx
  unsigned __int16 *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int8 AclRevision; // cl
  unsigned __int8 Sbz1; // al
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r10
  char *v15; // rax
  unsigned __int8 v16; // al
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (unsigned __int16 *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize )
      return 0;
    if ( *p_AclSize < 8u )
      return 0;
    v3 = Acl + 1;
    v4 = 0;
    v5 = 1730063;
    v6 = 104928;
    while ( 1 )
    {
      if ( v4 >= Acl->AceCount )
        return 1;
      v7 = (PACL)((char *)Acl + *p_AclSize);
      if ( &v3->AceCount >= (unsigned __int16 *)v7 )
        return 0;
      v8 = &v3->AclSize;
      if ( (unsigned __int16 *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
        return 0;
      v9 = *v8;
      if ( (PACL)((char *)v3 + v9) > v7 )
        return 0;
      AclRevision = v3->AclRevision;
      if ( v3->AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
      {
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
          return 0;
        if ( (unsigned int)v9 < 0x10 )
          return 0;
        if ( v3[1].AclRevision != 1 )
          return 0;
        Sbz1 = v3[1].Sbz1;
        if ( Sbz1 > 0xFu || v9 < (unsigned __int64)(4 * (unsigned int)Sbz1 + 8) + 8 )
          return 0;
      }
      else if ( AclRevision == 4 )
      {
        if ( Acl->AclRevision < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 || (unsigned int)v9 < 0xC )
          return 0;
        v12 = *(_DWORD *)&v3[1].AclRevision & 1;
        v13 = 16 * v12 + 16;
        if ( (*(_DWORD *)&v3[1].AclRevision & 2) == 0 )
          v13 = 16 * v12;
        v14 = (unsigned int)v13;
        if ( v9 < v13 + 24 )
          return 0;
        v15 = (char *)v3 + ((*(_DWORD *)&v3[1].AclRevision & 2) != 0 ? 0x10 : 0);
        if ( v15[16 * v12 + 12] != 1 )
          return 0;
        v16 = v15[16 * v12 + 13];
        if ( v16 > 0xFu || v9 < v14 + (unsigned __int64)(4 * (unsigned int)v16 + 8) + 12 )
          return 0;
      }
      else if ( AclRevision == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( AclRevision == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v9 < 4 )
      {
        return 0;
      }
      v3 = (PACL)((char *)v3 + *v8);
      ++v4;
    }
  }
  return 0;
}
