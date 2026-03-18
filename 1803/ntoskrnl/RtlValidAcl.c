/*
 * XREFs of RtlValidAcl @ 0x1404C80D0
 * Callers:
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1404C72B0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C7830 (SeCaptureSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x140501BF0 (SeValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140517160 (RtlValidRelativeSecurityDescriptor.c)
 *     SepCheckAcl @ 0x140544BD0 (SepCheckAcl.c)
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
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x14057DDA4 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1407847D0 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1407849C0 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x140784A40 (RtlpValidObjectAce.c)
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
