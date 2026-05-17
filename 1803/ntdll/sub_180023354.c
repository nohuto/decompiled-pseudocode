/*
 * XREFs of sub_180023354 @ 0x180023354
 * Callers:
 *     sub_1800231DC @ 0x1800231DC (sub_1800231DC.c)
 *     sub_1800630A4 @ 0x1800630A4 (sub_1800630A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180023354(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9

  result = 0LL;
  v4 = a2 + 32LL * a3;
  while ( a2 < v4 )
  {
    result = *(unsigned __int8 *)(a2 + 25) + (unsigned int)result;
    a2 += 32LL;
  }
  return result;
}
