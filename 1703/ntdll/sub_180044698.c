/*
 * XREFs of sub_180044698 @ 0x180044698
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAce @ 0x1800473B0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x180081980 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180089A90 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180089FA0 (RtlAddAccessDeniedAce.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     RtlAddAuditAccessAceEx @ 0x18008DC90 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008E680 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800E7640 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E76A0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E7910 (RtlAddAuditAccessObjectAce.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180044698(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, BYTE a6)
{
  BYTE AclRevision; // bp
  unsigned int v11; // eax
  PACL v12; // rdx
  PACL v13; // rcx
  unsigned int v14; // r8d
  ACL *v15; // r9
  WORD v16; // r8

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = a2;
  if ( Acl->AclRevision > (unsigned __int8)a2 )
    AclRevision = Acl->AclRevision;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
      v11 = a3 & 0xFFFFFF20;
    if ( v11 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) )
    return 3221225591LL;
  v12 = Acl + 1;
  v13 = 0LL;
  v14 = 0;
  if ( Acl->AceCount )
  {
    while ( v12 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v14;
      v12 = (PACL)((char *)v12 + v12->AclSize);
      if ( v14 >= Acl->AceCount )
        goto LABEL_9;
    }
    return 3221225591LL;
  }
LABEL_9:
  v15 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v12 <= v15 )
    v13 = v12;
  v16 = 4 * (Sid[1] + 4);
  if ( !v13 || (PACL)((char *)v13 + v16) > v15 )
    return 3221225625LL;
  v13->AclSize = v16;
  v13->Sbz1 = a3;
  v13->AclRevision = a6;
  *(_DWORD *)&v13->AceCount = a4;
  memmove(&v13[1], Sid, 4 * (unsigned int)Sid[1] + 8);
  Acl->AclRevision = AclRevision;
  ++Acl->AceCount;
  return 0LL;
}
