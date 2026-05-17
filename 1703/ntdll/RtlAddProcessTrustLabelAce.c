/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x1800889C0
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 * Callees:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     RtlCopySid @ 0x18004C1E0 (RtlCopySid.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x18004C6C0 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        char a5,
        int a6)
{
  unsigned __int8 v10; // bp
  int v11; // esi
  __int64 v12; // rdx
  unsigned __int16 v13; // r8
  __int64 result; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  if ( *a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  if ( *a1 > a2 )
    v10 = *a1;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  v11 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce((__int64)a1, &v15) )
    return 3221225591LL;
  v12 = v15;
  v13 = 4 * (a4[1] + 4);
  if ( !v15 || v15 + (unsigned __int64)v13 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v15 + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 20;
  *(_DWORD *)(v12 + 4) = v11;
  RtlCopySid(4 * a4[1] + 8, (void *)(v12 + 8), a4);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
