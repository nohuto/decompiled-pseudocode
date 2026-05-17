/*
 * XREFs of sub_180082104 @ 0x180082104
 * Callers:
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 * Callees:
 *     sub_180082148 @ 0x180082148 (sub_180082148.c)
 */

__int64 __fastcall sub_180082104(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 248) )
  {
    v2 = 4LL;
    do
    {
      v3 = *(_QWORD *)(a1 + 248);
      v1 += 24LL;
      *(_OWORD *)(a1 + v1 + 104) = *(_OWORD *)(v1 + v3 + 32);
      *(_QWORD *)(a1 + v1 + 120) = *(_QWORD *)(v1 + v3 + 48);
      --v2;
    }
    while ( v2 );
    return sub_180082148(a1, v1);
  }
  return result;
}
