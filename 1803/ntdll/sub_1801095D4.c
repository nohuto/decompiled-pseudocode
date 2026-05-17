/*
 * XREFs of sub_1801095D4 @ 0x1801095D4
 * Callers:
 *     sub_180109668 @ 0x180109668 (sub_180109668.c)
 * Callees:
 *     sub_1800D8244 @ 0x1800D8244 (sub_1800D8244.c)
 *     sub_180109720 @ 0x180109720 (sub_180109720.c)
 */

__int64 __fastcall sub_1801095D4(_WORD *a1, _WORD *a2, __int64 a3, _WORD *a4)
{
  __int16 v4; // ax
  _WORD *v5; // r11
  unsigned int v8; // ebx
  __int64 v9; // r11

  v4 = *a1;
  v5 = a1;
  v8 = 0;
  while ( v4 )
  {
    if ( v4 == 33 )
    {
      if ( (int)sub_180109720(a2, a2, a1, v5 - a1) >= 0 && (int)sub_1800D8244(a4, 1024LL, v9 + 2) >= 0 )
        return 1;
      break;
    }
    v4 = *++v5;
  }
  if ( a2 )
    *a2 = 0;
  if ( a4 )
    *a4 = 0;
  return v8;
}
