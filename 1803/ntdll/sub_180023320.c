/*
 * XREFs of sub_180023320 @ 0x180023320
 * Callers:
 *     sub_18001E320 @ 0x18001E320 (sub_18001E320.c)
 * Callees:
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 */

void *__fastcall sub_180023320(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v4; // r9d
  unsigned int v5; // eax

  v4 = a4 & 1 | 0x8000000;
  v5 = v4 | 4;
  if ( a2 < 0x10000 )
    v5 = v4;
  return sub_180022F0C(a1, a2, a2, 0LL, v5);
}
