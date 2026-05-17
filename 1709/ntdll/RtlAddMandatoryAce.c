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

__int64 __fastcall RtlAddMandatoryAce(__int64 a1, unsigned int a2, int a3, __int64 a4, char a5, int a6)
{
  int v10; // ecx
  __int64 v11; // rdx
  unsigned __int16 v12; // r8
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v14) = 0;
  WORD2(v14) = 4096;
  if ( !a1 )
    return 3221225591LL;
  if ( a5 != 17 )
    return 3221225485LL;
  if ( !RtlValidSid((_BYTE *)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2) - v14;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - WORD2(v14);
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( *(_BYTE *)a1 > (unsigned __int8)a2 )
    LOBYTE(a2) = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v14) )
    return 3221225591LL;
  v11 = v14;
  v12 = 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( !v14 || v14 + (unsigned __int64)v12 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v14 + 2) = v12;
  *(_BYTE *)(v11 + 1) = a3;
  *(_BYTE *)v11 = 17;
  *(_DWORD *)(v11 + 4) = a6;
  RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(a4 + 1) + 8, v11 + 8, a4);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = a2;
  return result;
}
