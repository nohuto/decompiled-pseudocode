/*
 * XREFs of sub_18005E238 @ 0x18005E238
 * Callers:
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005F770 @ 0x18005F770 (sub_18005F770.c)
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 *     sub_1800FC890 @ 0x1800FC890 (sub_1800FC890.c)
 *     sub_1800FC910 @ 0x1800FC910 (sub_1800FC910.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FCB7C @ 0x1800FCB7C (sub_1800FCB7C.c)
 *     sub_1800FD290 @ 0x1800FD290 (sub_1800FD290.c)
 * Callees:
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_18005F118 @ 0x18005F118 (sub_18005F118.c)
 */

void *__fastcall sub_18005E238(size_t a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // xmm0_8
  char *v8; // rax
  char v9; // r8
  __int64 v10; // rbx
  unsigned int **v11; // rsi
  unsigned int *v12; // rcx
  unsigned int *v15; // r8
  size_t v16; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = *a4;
  v4 = v18;
  v8 = sub_18005DFE4(&v18);
  *(_QWORD *)&v18 = v4;
  v9 = BYTE1(v4);
  v10 = 0LL;
  v11 = (unsigned int **)v8;
  BYTE3(v18) = 0;
  *((_QWORD *)&v18 + 1) = 0LL;
  if ( BYTE1(v4) >= 2u )
    v9 = 2;
  BYTE1(v18) = v9;
  if ( (int)sub_18005E324(v8, &v18) >= 0 )
  {
    v12 = *v11;
    if ( !a3 )
      return (void *)sub_18005F118(v12);
    v15 = v12 + 28;
    v16 = v12[32];
    v17 = (__int64)(v12 + 58);
    if ( a1 <= v16 )
      v17 = (__int64)v15;
    return sub_180022F0C(v17, a1, a1, a2, a2 < a1 ? 83886080 : 0x1000000);
  }
  return (void *)v10;
}
