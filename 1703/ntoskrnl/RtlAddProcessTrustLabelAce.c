/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x1405C55B0
 * Callers:
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x14081A5B4 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14047ED90 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1404F5C90 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  UCHAR AclRevision; // bp
  ACCESS_MASK v11; // esi
  PACE v12; // rdx
  WORD v13; // r8
  NTSTATUS result; // eax
  PACE Ace; // [rsp+40h] [rbp+8h] BYREF

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( !RtlValidSid(ProcessTrustLabelSid) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = AceRevision;
  if ( Acl->AclRevision > AceRevision )
    AclRevision = Acl->AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  v11 = AccessMask;
  if ( (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce(Acl, &Ace) )
    return -1073741705;
  v12 = Ace;
  v13 = 4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4);
  if ( !Ace || (char *)Ace + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  Ace->Header.AceSize = v13;
  v12->Header.AceFlags = AceFlags;
  v12->Header.AceType = 20;
  v12->AccessMask = v11;
  RtlCopySid(4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8, &v12[1], ProcessTrustLabelSid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
