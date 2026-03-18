/*
 * XREFs of SddlAddAccessFilterAce @ 0x1406FBCEC
 * Callers:
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1404F5C90 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 */

__int64 __fastcall SddlAddAccessFilterAce(
        PACL Acl,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        ACCESS_MASK a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  UCHAR AclRevision; // r15
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ebx
  ULONG v16; // edx
  PACE v17; // r14
  ULONG v18; // eax
  ULONG v19; // eax
  BYTE v20; // [rsp+20h] [rbp-20h]
  PACE Ace; // [rsp+30h] [rbp-10h] BYREF

  LODWORD(Ace) = 0;
  v20 = a3;
  WORD2(Ace) = 256;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  AclRevision = 2;
  if ( (a3 & 0x40) != 0 )
  {
    if ( *(_BYTE *)(a4 + 1) != 2 )
      return 3221225485LL;
    v13 = *(_DWORD *)(a4 + 2);
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - 4864;
    if ( v13 || !*(_DWORD *)(a4 + 8) && *(_DWORD *)(a4 + 12) )
      return 3221225485LL;
  }
  else
  {
    v14 = *(_DWORD *)(a4 + 2) - (_DWORD)Ace;
    if ( !v14 )
      v14 = *(unsigned __int16 *)(a4 + 6) - WORD2(Ace);
    if ( v14 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v15 = (a8 + 3) & 0xFFFFFFFC;
  v16 = RtlLengthSid((PSID)a4) + v15 + 8;
  if ( v16 < v15 )
    return 534LL;
  if ( v16 > 0xFFFF )
    return 3221225485LL;
  v17 = Ace;
  if ( !Ace || (char *)Ace + v16 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceFlags = v20;
  v17->Header.AceType = 21;
  v17->Header.AceSize = v16;
  v17->AccessMask = a6;
  v18 = RtlLengthSid((PSID)a4);
  RtlCopySid(v18, &v17[1], (PSID)a4);
  v19 = RtlLengthSid((PSID)a4);
  memmove((char *)&v17[1] + v19, Src, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
