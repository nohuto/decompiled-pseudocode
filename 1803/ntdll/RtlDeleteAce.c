/*
 * XREFs of RtlDeleteAce @ 0x180079C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     sub_180079CEC @ 0x180079CEC (sub_180079CEC.c)
 */

__int64 __fastcall RtlDeleteAce(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( !RtlValidAcl(a1) || (unsigned int)v2 >= *(unsigned __int16 *)(a1 + 4) || !RtlFirstFreeAce(a1, &v7) )
    return 3221225485LL;
  v4 = a1 + 8;
  if ( (_DWORD)v2 )
  {
    v6 = v2;
    do
    {
      v4 += *(unsigned __int16 *)(v4 + 2);
      --v6;
    }
    while ( v6 );
  }
  sub_180079CEC(v4, *(unsigned __int16 *)(v4 + 2), (unsigned int)(v7 - v4));
  --*(_WORD *)(a1 + 4);
  return 0LL;
}
