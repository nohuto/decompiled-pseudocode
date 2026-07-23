/*
 * XREFs of sub_1801006CC @ 0x1801006CC
 * Callers:
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 * Callees:
 *     sub_180008F44 @ 0x180008F44 (sub_180008F44.c)
 *     sub_18001F560 @ 0x18001F560 (sub_18001F560.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 */

void __fastcall sub_1801006CC(_RTL_SRWLOCK *a1, unsigned __int64 a2, char a3)
{
  int v6; // eax

  if ( (_WORD)a2 )
    v6 = 0;
  else
    v6 = sub_1800588D4(&stru_180159600, a2 >> 16, 1uLL);
  if ( v6 )
    sub_180008F44(a1, a2, a3);
  else
    sub_18001F560((__int64)a1, a2);
}
