/*
 * XREFs of RtlAddMandatoryAce @ 0x180057730
 * Callers:
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x18002D790 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 *     RtlCopySid @ 0x1800578A0 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  int v10; // ecx
  char *v11; // rdx
  unsigned __int16 v12; // r8
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(FirstFree) = 0;
  WORD2(FirstFree) = 4096;
  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2) - (_DWORD)FirstFree;
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - WORD2(FirstFree);
  if ( v10 )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( Acl->AclRevision > (unsigned __int8)AceRevision )
    LOBYTE(AceRevision) = Acl->AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v11 = (char *)FirstFree;
  v12 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v12;
  v11[1] = AceFlags;
  *v11 = 17;
  *((_DWORD *)v11 + 1) = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v11 + 8, Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AceRevision;
  return result;
}
