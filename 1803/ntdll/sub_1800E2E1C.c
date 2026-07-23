/*
 * XREFs of sub_1800E2E1C @ 0x1800E2E1C
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800E2350 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E23B0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E2630 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 */

__int64 __fastcall sub_1800E2E1C(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  __int64 result; // rax
  unsigned int v13; // eax
  char *v14; // rdx
  ULONG v15; // r10d
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // r8
  int v18; // r9d
  _OWORD *v19; // rdx
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

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
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v14 = (char *)FirstFree;
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
  if ( !FirstFree || (char *)FirstFree + v17 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *v14 = a8;
  *((_WORD *)v14 + 1) = v17;
  *((_DWORD *)v14 + 1) = a4;
  *((_DWORD *)v14 + 2) = v18;
  v19 = v14 + 12;
  if ( a5 )
    *v19++ = *a5;
  if ( a6 )
    *v19++ = *a6;
  RtlCopySid(v15, v19, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
