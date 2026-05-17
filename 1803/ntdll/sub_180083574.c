/*
 * XREFs of sub_180083574 @ 0x180083574
 * Callers:
 *     sub_18005F64C @ 0x18005F64C (sub_18005F64C.c)
 * Callees:
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 */

__int64 __fastcall sub_180083574(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4)
{
  int v7; // ebx
  char *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = *a4;
  v7 = 0;
  v8 = sub_18005DFE4(&v13);
  if ( !(_WORD)a1 )
  {
    v12 = sub_18006316C((__int64)&unk_18015D838, 2 * ((a1 - qword_18015D878) >> 20));
    v7 = 2;
    if ( v12 )
      v7 = v12 - 1;
  }
  v9 = *(_QWORD *)v8 + 120LL * v7;
  v10 = sub_180012820(v9 + 112, a1);
  return sub_180012070(v9 + 112, v10, (unsigned int)(a2 - a1) >> 12, a3 >> 12);
}
