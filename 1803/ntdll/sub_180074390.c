/*
 * XREFs of sub_180074390 @ 0x180074390
 * Callers:
 *     sub_180074240 @ 0x180074240 (sub_180074240.c)
 * Callees:
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 */

void *__fastcall sub_180074390(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  int v4; // r9d
  unsigned int v6; // eax
  void *result; // rax

  v4 = a4 & 1 | 0xC000000;
  v6 = v4 | 4;
  if ( a2 < 0x10000 )
    v6 = v4;
  result = sub_180022F0C(a1, a2, a2, 0LL, v6);
  if ( a3 )
    *a3 = 0;
  return result;
}
