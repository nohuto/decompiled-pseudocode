/*
 * XREFs of sub_180104618 @ 0x180104618
 * Callers:
 *     sub_180102178 @ 0x180102178 (sub_180102178.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

_QWORD *__fastcall sub_180104618(__int64 a1, __int128 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v6; // rcx

  memset(&qword_18015D830, 0, 0x30D0uLL);
  qword_18015D830 = (__int64)&qword_18015A440;
  memset(&unk_18015D838, 0, 0x48uLL);
  qword_18015D860 = -1LL;
  memset(&unk_18015D880, 0, 0x3040uLL);
  qword_18015D8B8 = -1LL;
  v3 = 255LL;
  v4 = &unk_18015D8F8;
  do
  {
    memset(v4 - 1, 0, 0x30uLL);
    *v4 = 0LL;
    v4[1] = 0LL;
    v4 += 6;
    --v3;
  }
  while ( v3 );
  result = &unk_1801608C8;
  v6 = 3LL;
  xmmword_1801608F0 = *a2;
  do
  {
    *result = 0LL;
    result += 2;
    --v6;
  }
  while ( v6 );
  return result;
}
