/*
 * XREFs of RtlAddMandatoryAce @ 0x18004C070
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     RtlCopySid @ 0x18004C1E0 (RtlCopySid.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall RtlAddMandatoryAce(__int64 a1, unsigned int a2, int a3, __int64 a4, char a5, int a6)
{
  int v10; // ecx
  char v11; // bp
  __int64 v12; // rdx
  unsigned __int16 v13; // r8
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v15) = 0;
  WORD2(v15) = 4096;
  if ( !a1 )
    return 3221225591LL;
  if ( a5 != 17 )
    return 3221225485LL;
  if ( !RtlValidSid((_BYTE *)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2) - v15;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - WORD2(v15);
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v11 = a2;
  if ( *(_BYTE *)a1 > (unsigned __int8)a2 )
    v11 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v15) )
    return 3221225591LL;
  v12 = v15;
  v13 = 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( !v15 || v15 + (unsigned __int64)v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v15 + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 17;
  *(_DWORD *)(v12 + 4) = a6;
  RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(a4 + 1) + 8, v12 + 8, a4);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v11;
  return result;
}
