/*
 * XREFs of RtlAddScopedPolicyIDAce @ 0x1800E7380
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x18002D790 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 *     RtlCopySid @ 0x1800578A0 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlAddScopedPolicyIDAce(PACL Acl, ULONG AceRevision, ULONG AceFlags, ULONG AccessMask, PSID Sid)
{
  NTSTATUS result; // eax
  int v10; // ecx
  _WORD *v11; // r9
  unsigned __int16 v12; // dx
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  unsigned __int16 v15; // [rsp+2Ch] [rbp-2Ch]

  FirstFree = 0LL;
  v14 = 0;
  v15 = 4352;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2) - v14;
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - v15;
  if ( v10 )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( Acl->AclRevision > (unsigned __int8)AceRevision )
    LOBYTE(AceRevision) = Acl->AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || AccessMask )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v11 = FirstFree;
  v12 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_DWORD *)FirstFree + 1) = 0;
  v11[1] = v12;
  *((_BYTE *)v11 + 1) = AceFlags;
  *(_BYTE *)v11 = 19;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v11 + 4, Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AceRevision;
  return result;
}
