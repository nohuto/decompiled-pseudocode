/*
 * XREFs of sub_180037408 @ 0x180037408
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180035010 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAce @ 0x18007A8C0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007B9E0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x1800838D0 (RtlAddAccessDeniedAceEx.c)
 *     sub_180086C80 @ 0x180086C80 (sub_180086C80.c)
 *     RtlAddAuditAccessAceEx @ 0x1800897C0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008A270 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAce @ 0x18008AB00 (RtlAddAccessDeniedAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800E2350 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E23B0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E2630 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180037408(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  BYTE v10; // al
  bool v11; // cc
  BYTE AclRevision; // di
  char *v13; // r9
  unsigned __int16 v14; // r8
  __int64 result; // rax
  unsigned int v16; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  v11 = Acl->AclRevision <= (unsigned __int8)a2;
  AclRevision = Acl->AclRevision;
  if ( v11 )
    AclRevision = v10;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    v16 = a3 & 0xFFFFFF20;
    if ( a6 != 2 )
      v16 = a3 & 0xFFFFFFE0;
    if ( v16 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v13 = (char *)FirstFree;
  v14 = 4 * (Sid[1] + 4);
  if ( !FirstFree || (char *)FirstFree + v14 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v14;
  v13[1] = a3;
  *v13 = a6;
  *((_DWORD *)v13 + 1) = a4;
  memmove(v13 + 8, Sid, 4 * (unsigned int)Sid[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
