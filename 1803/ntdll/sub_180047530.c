/*
 * XREFs of sub_180047530 @ 0x180047530
 * Callers:
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18004773C @ 0x18004773C (sub_18004773C.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

PVOID __fastcall sub_180047530(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  __int64 v4; // rbx
  unsigned __int16 v5; // bp
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // ett
  __int64 v9; // r14
  __int64 v10; // rbx
  PVOID result; // rax
  unsigned int v12; // ecx
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+24h] [rbp-34h]
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+2Ch] [rbp-2Ch]

  v1 = dword_18015CF90;
  v2 = dword_18015CF90 & 0xF;
  v4 = 52 * v2;
  *(_DWORD *)&word_18015C3E0[v4 + 8] = dword_18015CF90;
  dword_18015CF90 = v1 + 1;
  *(_QWORD *)&word_18015C3E0[v4] = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&word_18015C3E0[v4 + 4] = *(unsigned int *)(a1 + 64);
  v5 = *(_WORD *)(a1 + 88);
  if ( v5 > 0x40u )
    v5 = 64;
  memmove(&word_18015C3E0[v4 + 14], *(const void **)(a1 + 96), v5);
  v6 = (unsigned __int64)v5 >> 1;
  if ( v5 < 0x40u )
    word_18015C3E0[52 * v2 + 14 + v6] = 0;
  sub_18004773C(*(PVOID *)(a1 + 48));
  v7 = qword_18015CF88;
  *(_DWORD *)&word_18015C3E0[v4 + 10] = v13;
  *(_DWORD *)&word_18015C3E0[v4 + 12] = v14;
  *(_DWORD *)&word_18015C3E0[v4 + 46] = v15;
  *(_DWORD *)&word_18015C3E0[v4 + 48] = v16;
  if ( v7 )
    goto LABEL_6;
  v12 = dword_180159720;
  if ( (unsigned int)dword_180159720 > 0xFFFF )
    v12 = 0xFFFF;
  dword_180159720 = v12;
  result = RtlAllocateHeap(HeapHandle, (Flags + 0x40000) | 8, 104LL * v12);
  qword_18015CF88 = (__int64)result;
  v7 = (__int64)result;
  if ( result )
  {
LABEL_6:
    v8 = dword_18015CF94;
    v9 = (unsigned __int16)(dword_18015CF94 % (unsigned int)dword_180159720);
    v10 = 104 * v9;
    *(_DWORD *)(v10 + v7 + 16) = dword_18015CF94;
    dword_18015CF94 = v8 + 1;
    *(_QWORD *)(v10 + qword_18015CF88) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v10 + qword_18015CF88 + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(104 * v9 + qword_18015CF88 + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(qword_18015CF88 + 2 * (v6 + 52 * v9) + 28) = 0;
    *(_DWORD *)(v10 + qword_18015CF88 + 20) = v13;
    *(_DWORD *)(v10 + qword_18015CF88 + 24) = v14;
    *(_DWORD *)(v10 + qword_18015CF88 + 92) = v15;
    result = (PVOID)qword_18015CF88;
    *(_DWORD *)(v10 + qword_18015CF88 + 96) = v16;
  }
  return result;
}
