/*
 * XREFs of sub_18000316C @ 0x18000316C
 * Callers:
 *     sub_1800030E8 @ 0x1800030E8 (sub_1800030E8.c)
 * Callees:
 *     sub_1800031C4 @ 0x1800031C4 (sub_1800031C4.c)
 */

__int64 __fastcall sub_18000316C(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  if ( !(unsigned int)sub_1800031C4(a2, a3) )
    return 0LL;
  a1[3] = a2;
  a1[4] = a2 + 104;
  v5 = 32LL * *(unsigned int *)(a2 + 52) + a2 + 104;
  a1[5] = v5;
  result = 1LL;
  a1[6] = v5 + 2LL * *(unsigned int *)(a2 + 56);
  return result;
}
