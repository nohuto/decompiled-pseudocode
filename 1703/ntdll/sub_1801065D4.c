/*
 * XREFs of sub_1801065D4 @ 0x1801065D4
 * Callers:
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 * Callees:
 *     sub_1800DE9E4 @ 0x1800DE9E4 (sub_1800DE9E4.c)
 *     sub_18010672C @ 0x18010672C (sub_18010672C.c)
 */

__int64 __fastcall sub_1801065D4(_WORD *a1, _WORD *a2, __int64 a3, _WORD *a4)
{
  __int16 v4; // ax
  _WORD *v5; // rdi
  unsigned int v8; // ebx

  v4 = *a1;
  v5 = a1;
  v8 = 0;
  while ( v4 && v4 != 33 )
    v4 = *++v5;
  if ( *v5 == 33
    && (int)sub_18010672C(a2, a2, a1, v5 - a1) >= 0
    && (int)sub_1800DE9E4(a4, 1024LL, (__int64)(v5 + 1)) >= 0 )
  {
    return 1;
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    if ( a4 )
      *a4 = 0;
  }
  return v8;
}
