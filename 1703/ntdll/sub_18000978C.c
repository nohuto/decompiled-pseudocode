/*
 * XREFs of sub_18000978C @ 0x18000978C
 * Callers:
 *     sub_1800096A8 @ 0x1800096A8 (sub_1800096A8.c)
 * Callees:
 *     sub_180009838 @ 0x180009838 (sub_180009838.c)
 *     sub_180009FB0 @ 0x180009FB0 (sub_180009FB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000978C(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  int v6; // edx
  __int64 v9; // rbp
  void *v10; // rbx
  void *v12; // rax

  v4 = a2;
  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = (unsigned __int8)byte_1801196F0[(unsigned __int64)(unsigned int)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v9 + 192) & 1) != 0 && !(unsigned int)sub_180009838() )
    return -1LL;
  v12 = (void *)sub_180009FB0(a1, *(_QWORD *)(a1 + 8 * v9 + 192), (unsigned int)v4, a4);
  v10 = v12;
  if ( v12 && (a4 & 2) != 0 )
    memset(v12, 0, v4);
  return (__int64)v10;
}
