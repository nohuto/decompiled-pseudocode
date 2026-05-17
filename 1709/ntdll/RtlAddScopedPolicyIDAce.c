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

__int64 __fastcall RtlAddScopedPolicyIDAce(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int v10; // ecx
  __int64 v11; // r9
  unsigned __int16 v12; // dx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  unsigned __int16 v15; // [rsp+2Ch] [rbp-2Ch]

  v13 = 0LL;
  v14 = 0;
  v15 = 4352;
  if ( !a1 )
    return 3221225591LL;
  if ( !RtlValidSid((_BYTE *)a5) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a5 + 2) - v14;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a5 + 6) - v15;
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( *(_BYTE *)a1 > (unsigned __int8)a2 )
    LOBYTE(a2) = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v13) )
    return 3221225591LL;
  v11 = v13;
  v12 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
  if ( !v13 || v13 + (unsigned __int64)v12 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_DWORD *)(v13 + 4) = 0;
  *(_WORD *)(v11 + 2) = v12;
  *(_BYTE *)(v11 + 1) = a3;
  *(_BYTE *)v11 = 19;
  RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v11 + 8), (unsigned __int8 *)a5);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = a2;
  return result;
}
