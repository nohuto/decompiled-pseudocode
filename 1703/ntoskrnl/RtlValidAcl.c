/*
 * XREFs of RtlValidAcl @ 0x14050C290
 * Callers:
 *     RtlDeleteAce @ 0x140453040 (RtlDeleteAce.c)
 *     SepCheckAcl @ 0x14046EA34 (SepCheckAcl.c)
 *     RtlAddMandatoryAce @ 0x1404A23F4 (RtlAddMandatoryAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404BFE50 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddAce @ 0x1404F5B60 (RtlAddAce.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x14050C750 (RtlValidSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     SeValidSecurityDescriptor @ 0x140557640 (SeValidSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405C55B0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1406E86E0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1406E89D0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406E8CF4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1406FBCEC (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1406FBF00 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406FC05C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406FC1B4 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x140460C0C (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1406E9260 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1406E9458 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x1406E94C8 (RtlpValidObjectAce.c)
 */

BOOLEAN __stdcall RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // r14
  PACL v3; // rbx
  unsigned int v4; // ebp
  int v5; // r15d
  int v6; // r12d
  ACL *v7; // rdx
  USHORT *v8; // rsi
  unsigned __int64 v9; // rcx
  UCHAR AclRevision; // dl
  UCHAR Sbz1; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u )
    return 0;
  p_AclSize = &Acl->AclSize;
  if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize || *p_AclSize < 8u )
    return 0;
  v3 = Acl + 1;
  v4 = 0;
  if ( !Acl->AceCount )
    return 1;
  v5 = 1730063;
  v6 = 104928;
  while ( 1 )
  {
    v7 = (PACL)((char *)Acl + *p_AclSize);
    if ( &v3->AceCount >= (USHORT *)v7 )
      break;
    v8 = &v3->AclSize;
    if ( (USHORT *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
      break;
    v9 = *v8;
    if ( (PACL)((char *)v3 + v9) > v7 )
      break;
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
      if ( Sbz1 > 0xFu || v9 < 4 * (unsigned __int64)Sbz1 + 16 )
        return 0;
    }
    else if ( AclRevision == 4 )
    {
      if ( Acl->AclRevision < 3u || !(unsigned __int8)RtlpValidCompoundAce(v3) )
        return 0;
    }
    else if ( AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
    {
      if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v3) )
        return 0;
    }
    else if ( AclRevision == 18 )
    {
      if ( !RtlpValidAttributeAce((__int64)v3) )
        return 0;
    }
    else if ( AclRevision == 21 )
    {
      if ( !(unsigned __int8)RtlpValidAccessFilterAce(v3) )
        return 0;
    }
    else if ( (unsigned int)v9 < 4 )
    {
      return 0;
    }
    ++v4;
    v3 = (PACL)((char *)v3 + *v8);
    if ( v4 >= Acl->AceCount )
      return 1;
  }
  return 0;
}
