/*
 * XREFs of RtlpAddKnownObjectAce @ 0x140784238
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x140783B10 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140783B70 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x140783E70 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x1404C7400 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x1404C80A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1404C80D0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        ACCESS_MASK a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        BYTE a8)
{
  __int64 result; // rax
  unsigned int v13; // eax
  PACE v14; // rdx
  ULONG v15; // r10d
  WORD v16; // cx
  WORD v17; // r8
  int v18; // r9d
  ACCESS_MASK *p_AccessMask; // rdx
  PACE Ace; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    v13 = a3 & 0xFFFFFF20;
    if ( a8 != 7 )
      v13 = a3 & 0xFFFFFFE0;
    if ( v13 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v14 = Ace;
  v15 = 4 * Sid[1] + 8;
  v16 = 4 * Sid[1] + 36;
  if ( !a5 )
    v16 = 4 * Sid[1] + 20;
  v17 = v16 + 16;
  if ( !a6 )
    v17 = v16;
  v18 = (a5 != 0LL) | 2;
  if ( !a6 )
    v18 = a5 != 0LL;
  if ( !Ace || (char *)Ace + v17 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceFlags = a3;
  v14->Header.AceType = a8;
  v14->Header.AceSize = v17;
  v14->AccessMask = a4;
  v14[1].Header = (ACE_HEADER)v18;
  p_AccessMask = &v14[1].AccessMask;
  if ( a5 )
  {
    *(_OWORD *)p_AccessMask = *a5;
    p_AccessMask += 4;
  }
  if ( a6 )
  {
    *(_OWORD *)p_AccessMask = *a6;
    p_AccessMask += 4;
  }
  RtlCopySid(v15, p_AccessMask, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
