/*
 * XREFs of sub_180063ACC @ 0x180063ACC
 * Callers:
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 * Callees:
 *     sub_1800111DC @ 0x1800111DC (sub_1800111DC.c)
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 */

unsigned __int64 __fastcall sub_180063ACC(_RTL_SRWLOCK *a1, unsigned __int64 a2, char a3, int *a4)
{
  int v8; // eax
  _RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v13; // rax

  if ( (_WORD)a2 )
  {
    v8 = 0;
  }
  else
  {
    v13 = sub_18006316C((__int64)&unk_18015D838, 2 * ((a2 - qword_18015D878) >> 20));
    if ( !v13 )
      return sub_180063438(a1, a2, a3, (__int64)a4);
    v8 = v13 - 1;
  }
  if ( v8 == 2 )
    return sub_180063438(a1, a2, a3, (__int64)a4);
  v9 = &a1[15 * v8];
  v10 = sub_180012820((__int64)&v9[14], a2);
  if ( v10 )
    return sub_1800111DC((__int64)&v9[14], v10, a2, v11, a4);
  else
    return -1LL;
}
