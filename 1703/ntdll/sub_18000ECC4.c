/*
 * XREFs of sub_18000ECC4 @ 0x18000ECC4
 * Callers:
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 * Callees:
 *     sub_18000EECC @ 0x18000EECC (sub_18000EECC.c)
 *     sub_18000F0DC @ 0x18000F0DC (sub_18000F0DC.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000ECC4(char *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // esi
  unsigned int v6; // r9d
  int v7; // r14d
  unsigned int v8; // edi
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rcx
  char *v12; // rcx
  char *v13; // rdi
  char *v14; // rdx
  unsigned __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp+10h]

  v5 = sub_18000F0DC(a2, a3);
  v7 = v6 / v5;
  v8 = (v6
      - ((2 * (v7 + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (v6 - 2 * v7) - 384) / (8 * a3 + 1))) + 63) >> 6))
        + 63) & 0xFFFFFFF0))
     / a3;
  memset(a1, 0, 0x30uLL);
  *((_WORD *)a1 + 16) = v8;
  v9 = 2 * v8;
  *((_WORD *)a1 + 17) = v8;
  LOWORD(v18) = a3;
  *((_QWORD *)a1 + 3) = 0LL;
  a1[38] = 2;
  a1[45] = v7;
  HIWORD(v18) = (2 * (v7 + 4 * ((unsigned __int64)(v9 + 63) >> 6)) + 63) & 0xFFF0;
  *((_DWORD *)a1 + 10) = v18 ^ qword_18015BFE8 ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v10, v5);
  v11 = (unsigned __int16)(8 * (((unsigned __int64)(v9 + 63) >> 6) + 6));
  *((_WORD *)a1 + 23) = v11;
  v12 = &a1[v11];
  a1[44] = v10;
  v13 = v12 + 2;
  *(_WORD *)v12 = 0;
  v14 = &v12[2 * (unsigned __int8)v7];
  v15 = (2 * (unsigned __int64)(unsigned __int8)v7 - 2 + 1) >> 1;
  if ( v13 > v14 )
    v15 = 0LL;
  if ( v15 )
  {
    while ( v15 )
    {
      *(_WORD *)v13 = -1;
      v13 += 2;
      --v15;
    }
  }
  v17[0] = v9;
  v17[1] = a1 + 48;
  sub_18000EECC(v17);
  return sub_18000EE28();
}
