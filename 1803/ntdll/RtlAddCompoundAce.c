/*
 * XREFs of RtlAddCompoundAce @ 0x1800E26A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddCompoundAce(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  unsigned __int8 v10; // r14
  __int64 result; // rax
  __int64 v12; // rdi
  unsigned __int16 v13; // dx
  unsigned __int8 v14; // cl
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(a5) || !RtlValidSid(a6) )
    return 3221225592LL;
  v10 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || (unsigned int)(a2 - 3) > 1 )
    return 3221225561LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v12 = v15[0];
  v13 = 4 * (a6[1] + a5[1] + 7);
  if ( !v15[0] || v15[0] + (unsigned __int64)v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v15[0] + 2LL) = v13;
  *(_WORD *)(v12 + 8) = a3;
  *(_WORD *)v12 = 4;
  *(_DWORD *)(v12 + 4) = a4;
  RtlCopySid(4 * a5[1] + 8, (void *)(v12 + 12), a5);
  RtlCopySid(4 * a6[1] + 8, (void *)(4 * (unsigned int)a5[1] + 8 + v12 + 12), a6);
  v14 = v10;
  ++*(_WORD *)(a1 + 4);
  if ( v10 <= (unsigned __int8)a2 )
    v14 = a2;
  result = 0LL;
  *(_BYTE *)a1 = v14;
  return result;
}
