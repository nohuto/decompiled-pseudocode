/*
 * XREFs of sub_180007288 @ 0x180007288
 * Callers:
 *     sub_1800072C4 @ 0x1800072C4 (sub_1800072C4.c)
 * Callees:
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 *     sub_180020FD8 @ 0x180020FD8 (sub_180020FD8.c)
 */

__int64 __fastcall sub_180007288(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // r9d

  v7 = sub_180020EF0();
  if ( v7 )
    return sub_180020FD8(a1, v7, a2, v8, a4);
  else
    return -1LL;
}
