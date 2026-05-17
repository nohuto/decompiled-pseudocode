/*
 * XREFs of sub_180022F0C @ 0x180022F0C
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F208 @ 0x18005F208 (sub_18005F208.c)
 *     sub_180074390 @ 0x180074390 (sub_180074390.c)
 * Callees:
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_1800623C8 @ 0x1800623C8 (sub_1800623C8.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void *__fastcall sub_180022F0C(__int64 a1, size_t a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ebx
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // rbx

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  v9 = sub_18002302C(a1, v8, a5);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = *(unsigned __int8 *)(v9 + 31);
  v12 = (unsigned __int16)~(*(_DWORD *)(v9 + 28) >> 8);
  if ( (_DWORD)v5 && (int)sub_180012070(a1, v9, 0, v5) < 0 )
  {
    v15 = 0LL;
    goto LABEL_13;
  }
  if ( (a5 & 4) != 0 )
    sub_1800623C8(a1, v10, v8 - 1, (v11 << *(_BYTE *)(a1 + 9)) - v8 + 1);
  *(_DWORD *)(v10 + 4) = (v11 << *(_BYTE *)(a1 + 8)) - a2;
  v13 = v10 & *(_QWORD *)a1;
  v14 = v10 - v13;
  v10 = 0LL;
  v15 = (void *)(v13 + (v14 >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (a5 & 2) != 0 && v12 )
  {
    memset(v15, 0, a2);
LABEL_13:
    if ( v10 )
      sub_180023AAC(a1, v10, 0LL, a5);
  }
  return v15;
}
