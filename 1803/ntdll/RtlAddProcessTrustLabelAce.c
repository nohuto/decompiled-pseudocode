/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x18006BD70
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x18006C4D0 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(__int64 a1, unsigned int a2, int a3, _BYTE *a4, char a5, int a6)
{
  unsigned __int8 v10; // si
  int v11; // r14d
  __int64 v12; // r8
  unsigned __int16 v13; // dx
  char v14; // cl
  __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !RtlValidAcl(a1) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a4) )
    return 3221225485LL;
  v10 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  v11 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(a1, &v16) )
    return 3221225591LL;
  v12 = v16;
  v13 = 4 * ((unsigned __int8)a4[1] + 4);
  if ( !v16 || v16 + (unsigned __int64)v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v16 + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 20;
  *(_DWORD *)(v12 + 4) = v11;
  RtlCopySid(4 * (unsigned int)(unsigned __int8)a4[1] + 8, v12 + 8, a4);
  ++*(_WORD *)(a1 + 4);
  v14 = v10;
  if ( v10 <= a2 )
    v14 = a2;
  result = 0LL;
  *(_BYTE *)a1 = v14;
  return result;
}
