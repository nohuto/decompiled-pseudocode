/*
 * XREFs of sub_18010DA2C @ 0x18010DA2C
 * Callers:
 *     sub_18010D1CC @ 0x18010D1CC (sub_18010D1CC.c)
 *     sub_18010D8A4 @ 0x18010D8A4 (sub_18010D8A4.c)
 *     sub_18010DAA8 @ 0x18010DAA8 (sub_18010DAA8.c)
 * Callees:
 *     sub_18010E3CC @ 0x18010E3CC (sub_18010E3CC.c)
 */

__int64 __fastcall sub_18010DA2C(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v4; // ebx
  _QWORD *v6; // rdi

  v2 = 0;
  v4 = ((unsigned int)*(unsigned __int8 *)(a2 + 19) + 7) >> 3;
  if ( v4 )
  {
    v6 = (_QWORD *)(a2 + 24);
    do
    {
      if ( !*v6 )
        break;
      sub_18010E3CC(a1);
      ++v2;
      ++v6;
    }
    while ( v2 < v4 );
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *(_QWORD *)(a1 + 64));
}
