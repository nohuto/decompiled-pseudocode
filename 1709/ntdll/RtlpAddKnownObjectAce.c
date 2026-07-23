/*
 * XREFs of RtlpAddKnownObjectAce @ 0x18008E444
 * Callers:
 *     RtlAddAccessDeniedObjectAce @ 0x18008E350 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008E3A0 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008E400 (RtlAddAccessAllowedObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x18002D790 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 *     RtlCopySid @ 0x1800578A0 (RtlCopySid.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  int v12; // edi
  int v13; // eax
  unsigned __int16 v14; // dx
  char *v15; // r8
  _OWORD *v16; // rdx
  __int64 result; // rax
  unsigned int v18; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  v12 = 0;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    v18 = a3 & 0xFFFFFF20;
    if ( a8 != 7 )
      v18 = a3 & 0xFFFFFFE0;
    if ( v18 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v13 = Sid[1];
  v14 = 4 * v13 + 20;
  if ( a5 )
  {
    v12 = 1;
    v14 = 4 * v13 + 36;
  }
  if ( a6 )
  {
    v12 |= 2u;
    v14 += 16;
  }
  v15 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v14 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v14;
  v16 = v15 + 12;
  v15[1] = a3;
  *v15 = a8;
  *((_DWORD *)v15 + 1) = a4;
  *((_DWORD *)v15 + 2) = v12;
  if ( a5 )
  {
    *v16 = *a5;
    v16 = v15 + 28;
  }
  if ( a6 )
    *v16++ = *a6;
  RtlCopySid(4 * v13 + 8, v16, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
