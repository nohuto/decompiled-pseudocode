/*
 * XREFs of sub_1800601D0 @ 0x1800601D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     sub_18010230C @ 0x18010230C (sub_18010230C.c)
 */

__int64 sub_1800601D0()
{
  __int64 result; // rax

  result = sub_180060204(sub_180060360, 0LL, 0LL);
  if ( (byte_18015D028 & 8) != 0 )
    result = sub_18010230C();
  dword_18015D2B0 = 0;
  return result;
}
