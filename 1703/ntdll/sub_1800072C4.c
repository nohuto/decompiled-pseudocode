/*
 * XREFs of sub_1800072C4 @ 0x1800072C4
 * Callers:
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     sub_180007288 @ 0x180007288 (sub_180007288.c)
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 */

__int64 __fastcall sub_1800072C4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  int v8; // eax

  v5 = a3;
  if ( (_WORD)a2 )
    v8 = 0;
  else
    v8 = sub_1800588D4(&stru_180159600);
  if ( v8 )
    return sub_180008F9C(a1, a2, v5, a4);
  else
    return sub_180007288(a1, a2, a3, a4);
}
