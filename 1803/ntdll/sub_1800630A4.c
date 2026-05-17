/*
 * XREFs of sub_1800630A4 @ 0x1800630A4
 * Callers:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 * Callees:
 *     sub_180023354 @ 0x180023354 (sub_180023354.c)
 */

unsigned __int64 __fastcall sub_1800630A4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // r10d
  __int64 v9; // r11
  int v10; // r8d
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 result; // rax

  v5 = a3 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v6 = -*(_DWORD *)a1;
  v7 = sub_180023354(a1, v5, 256 - (unsigned int)*(unsigned __int8 *)(a1 + 10));
  *(_QWORD *)(a2 + 8) = v6;
  *(_WORD *)(a2 + 18) = 2;
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 17) = 0;
  v10 = (v8 + v7) << 12;
  *(_DWORD *)(a2 + 24) = v10;
  *(_DWORD *)(a2 + 28) = v6 - v10;
  v11 = v5 & *(_QWORD *)a1;
  v12 = v5 - v11;
  v5 += 8160LL;
  *(_QWORD *)(a2 + 32) = v11 + (v12 >> 5 << *(_BYTE *)(a1 + 8));
  result = v5 & *(_QWORD *)a1;
  *(_QWORD *)(a2 + 40) = result + ((__int64)(v5 - result) >> 5 << *(_BYTE *)(a1 + 8));
  return result;
}
