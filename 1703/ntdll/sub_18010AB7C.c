/*
 * XREFs of sub_18010AB7C @ 0x18010AB7C
 * Callers:
 *     sub_18010A41C @ 0x18010A41C (sub_18010A41C.c)
 *     sub_18010AA04 @ 0x18010AA04 (sub_18010AA04.c)
 *     sub_18010ABF8 @ 0x18010ABF8 (sub_18010ABF8.c)
 * Callees:
 *     sub_18010B454 @ 0x18010B454 (sub_18010B454.c)
 */

__int64 __fastcall sub_18010AB7C(__int64 a1, __int64 a2)
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
      sub_18010B454(a1);
      ++v2;
      ++v6;
    }
    while ( v2 < v4 );
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *(_QWORD *)(a1 + 64));
}
