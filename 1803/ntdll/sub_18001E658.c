/*
 * XREFs of sub_18001E658 @ 0x18001E658
 * Callers:
 *     sub_18001E320 @ 0x18001E320 (sub_18001E320.c)
 * Callees:
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18001E658(char *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v5; // r14d
  __int16 v7; // bx
  unsigned int v8; // edi
  unsigned __int64 v9; // rbp
  __int16 v10; // cx
  unsigned int v11; // eax
  __int64 v12; // rcx
  char *v13; // rcx
  char *v14; // rdi
  char *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int16 HeapData_high; // di
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 result; // rax
  int v25; // [rsp+58h] [rbp+10h]

  v5 = a2 / a3;
  v7 = a4;
  v8 = (a2
      - ((2
        * (a2 / a3
         + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 1))) + 63) >> 6))
        + 63) & 0xFFFFFFF0))
     / a4;
  memset(a1, 0, 0x30uLL);
  LOWORD(v25) = v7;
  v9 = 2 * v8;
  *((_QWORD *)a1 + 3) = 0LL;
  v10 = (v9 + 63) >> 6;
  HIWORD(v25) = (2 * (v5 + 4 * v10) + 63) & 0xFFF0;
  *((_DWORD *)a1 + 10) = v25 ^ qword_18015A448 ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v11, a3);
  v12 = (unsigned __int16)(8 * (v10 + 6));
  *((_WORD *)a1 + 23) = v12;
  v13 = &a1[v12];
  a1[44] = v11;
  *((_WORD *)a1 + 16) = v8;
  *((_WORD *)a1 + 17) = v8;
  v14 = v13 + 2;
  a1[38] = 2;
  a1[45] = v5;
  *(_WORD *)v13 = 0;
  v15 = &v13[2 * (unsigned __int8)v5];
  v16 = (2 * (unsigned __int64)(unsigned __int8)v5 - 2 + 1) >> 1;
  if ( v14 > v15 )
    v16 = 0LL;
  if ( v16 )
  {
    while ( v16 )
    {
      *(_WORD *)v14 = -1;
      v14 += 2;
      --v16;
    }
  }
  memset(a1 + 48, 0, (v9 + 7) >> 3);
  v18 = v9 & 0x3F;
  if ( (v9 & 0x3F) != 0 )
    *(_QWORD *)&a1[8 * (v9 >> 6) + 48] |= ~((1LL << v18) - 1);
  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  v20 = (unsigned __int64)(unsigned int)sub_18001EBF0(v18, v17) << 32;
  v23 = v20 | (unsigned int)sub_18001EBF0(v22, v21);
  result = (unsigned __int8)HeapData_high >> 3;
  *(_QWORD *)&byte_18015A460[8 * result] = v23 & 0x7F7F7F7F7F7F7F7FLL;
  return result;
}
