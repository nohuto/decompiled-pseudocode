/*
 * XREFs of RtlValidAcl @ 0x1404BC590
 * Callers:
 *     RtlDeleteAce @ 0x1404497D0 (RtlDeleteAce.c)
 *     SepCheckAcl @ 0x14045C4C8 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140474530 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140485620 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x140486100 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     SeValidSecurityDescriptor @ 0x140522E20 (SeValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x14054A554 (RtlAddMandatoryAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405D8980 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1407204C0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1407207F0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140720B18 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407336D4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1407338F0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140733A4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140733BA4 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1405954E4 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1407210A8 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1407212A0 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x140721320 (RtlpValidObjectAce.c)
 */

BOOLEAN __stdcall RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // r14
  PACL v3; // rbx
  unsigned int v4; // ebp
  int v5; // r15d
  ACL *v6; // rcx
  USHORT *v7; // rsi
  unsigned __int64 v8; // rdx
  UCHAR AclRevision; // cl
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
  while ( 1 )
  {
    v6 = (PACL)((char *)Acl + *p_AclSize);
    if ( &v3->AceCount >= (USHORT *)v6 )
      break;
    v7 = &v3->AclSize;
    if ( (USHORT *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
      break;
    v8 = *v7;
    if ( (PACL)((char *)v3 + v8) > v6 )
      break;
    AclRevision = v3->AclRevision;
    if ( v3->AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
    {
      if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
        return 0;
      if ( (unsigned int)v8 < 0x10 )
        return 0;
      if ( v3[1].AclRevision != 1 )
        return 0;
      Sbz1 = v3[1].Sbz1;
      if ( Sbz1 > 0xFu || v8 < (unsigned __int64)(4 * (unsigned int)Sbz1 + 8) + 8 )
        return 0;
    }
    else if ( AclRevision == 4 )
    {
      if ( Acl->AclRevision < 3u || !(unsigned __int8)RtlpValidCompoundAce(v3) )
        return 0;
    }
    else if ( (unsigned __int8)(AclRevision - 5) <= 3u
           || (unsigned __int8)(AclRevision - 11) <= 1u
           || (unsigned __int8)(AclRevision - 15) <= 1u )
    {
      if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v3) )
        return 0;
    }
    else if ( AclRevision == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v3) )
        return 0;
    }
    else if ( AclRevision == 21 )
    {
      if ( !(unsigned __int8)RtlpValidAccessFilterAce(v3) )
        return 0;
    }
    else if ( (unsigned int)v8 < 4 )
    {
      return 0;
    }
    ++v4;
    v3 = (PACL)((char *)v3 + *v7);
    if ( v4 >= Acl->AceCount )
      return 1;
  }
  return 0;
}
