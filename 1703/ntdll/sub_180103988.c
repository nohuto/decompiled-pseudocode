/*
 * XREFs of sub_180103988 @ 0x180103988
 * Callers:
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 *     sub_1800F0D88 @ 0x1800F0D88 (sub_1800F0D88.c)
 * Callees:
 *     sub_180103A40 @ 0x180103A40 (sub_180103A40.c)
 */

char __fastcall sub_180103988(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  char result; // al

  v3 = (_QWORD *)(a1 + 192);
  v4 = 129LL;
  do
  {
    result = ~(unsigned __int8)*v3;
    if ( (*v3 & 1) == 0 )
      result = sub_180103A40(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
