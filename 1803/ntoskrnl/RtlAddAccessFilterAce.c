/*
 * XREFs of RtlAddAccessFilterAce @ 0x140783BD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlFirstFreeAce @ 0x1404C7400 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x1404C80A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1404C80D0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x140558CA8 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        PACL Acl,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        ACCESS_MASK a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v13; // ecx
  UCHAR AclRevision; // bp
  unsigned int v15; // edx
  unsigned int v16; // ecx
  PACE v17; // rsi
  PACE Ace; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(Ace) = 0;
  WORD2(Ace) = 256;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid((PSID)a4) )
      return 3221225485LL;
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 2) - (_DWORD)Ace;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - WORD2(Ace);
    if ( v13 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v15 = (a8 + 3) & 0xFFFFFFFC;
  v16 = v15 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v16 < v15 )
    return 3221225621LL;
  if ( v16 > 0xFFFF )
    return 3221225485LL;
  v17 = Ace;
  if ( !Ace || (char *)Ace + v16 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceSize = v16;
  v17->Header.AceFlags = a3;
  v17->Header.AceType = 21;
  v17->AccessMask = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, &v17[1], (PSID)a4);
  memmove((char *)&v17[2] + 4 * (unsigned int)*(unsigned __int8 *)(a4 + 1), Src, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
