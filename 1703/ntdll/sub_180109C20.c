/*
 * XREFs of sub_180109C20 @ 0x180109C20
 * Callers:
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 * Callees:
 *     sub_180003048 @ 0x180003048 (sub_180003048.c)
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 */

__int64 __fastcall sub_180109C20(_WORD *Src, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rax

  v6 = sub_18010BF68(Src, a2, a3, a5 != 0 ? 2 : 0);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    v8 = sub_180003048(Src);
    *(_QWORD *)(v7 + 16) = -1LL;
    *(_QWORD *)(v7 + 24) = v8;
  }
  return v7;
}
