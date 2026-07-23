/*
 * XREFs of sub_1800106C4 @ 0x1800106C4
 * Callers:
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 * Callees:
 *     sub_1800108D8 @ 0x1800108D8 (sub_1800108D8.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

PVOID __fastcall sub_1800106C4(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rdi
  PVOID result; // rax
  unsigned int v10; // ecx
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+24h] [rbp-34h]
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  __int64 v15; // [rsp+60h] [rbp+8h]

  v1 = dword_18015BF30;
  v3 = dword_18015BF30 & 0xF;
  v4 = 52 * v3;
  *(_DWORD *)&word_18015B3C0[v4 + 8] = dword_18015BF30;
  *(_QWORD *)&word_18015B3C0[v4] = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&word_18015B3C0[v4 + 4] = *(unsigned int *)(a1 + 64);
  v5 = *(_WORD *)(a1 + 88);
  dword_18015BF30 = v1 + 1;
  if ( v5 > 0x40u )
    v5 = 64;
  memmove(&word_18015B3C0[v4 + 14], *(const void **)(a1 + 96), v5);
  if ( v5 < 0x40u )
    word_18015B3C0[52 * v3 + 14 + ((unsigned __int64)v5 >> 1)] = 0;
  sub_1800108D8(*(PVOID *)(a1 + 48));
  v6 = qword_18015BF28;
  *(_DWORD *)&word_18015B3C0[v4 + 10] = v11;
  *(_DWORD *)&word_18015B3C0[v4 + 12] = v12;
  *(_DWORD *)&word_18015B3C0[v4 + 46] = v13;
  *(_DWORD *)&word_18015B3C0[v4 + 48] = v14;
  if ( v6 )
    goto LABEL_6;
  v10 = dword_180158690;
  if ( (unsigned int)dword_180158690 > 0xFFFF )
    v10 = 0xFFFF;
  dword_180158690 = v10;
  result = RtlAllocateHeap(HeapHandle, (dword_18015B268 + 0x40000) | 8, 104LL * v10);
  qword_18015BF28 = (__int64)result;
  v6 = (__int64)result;
  if ( result )
  {
LABEL_6:
    v7 = dword_18015BF34;
    v8 = 104LL * (unsigned __int16)(dword_18015BF34 % (unsigned int)dword_180158690);
    v15 = (unsigned __int16)(dword_18015BF34 % (unsigned int)dword_180158690);
    *(_DWORD *)(v8 + v6 + 16) = dword_18015BF34;
    dword_18015BF34 = v7 + 1;
    *(_QWORD *)(v8 + qword_18015BF28) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v8 + qword_18015BF28 + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(v8 + qword_18015BF28 + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(qword_18015BF28 + 2 * (52 * v15 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v8 + qword_18015BF28 + 20) = v11;
    *(_DWORD *)(v8 + qword_18015BF28 + 24) = v12;
    *(_DWORD *)(v8 + qword_18015BF28 + 92) = v13;
    result = (PVOID)qword_18015BF28;
    *(_DWORD *)(v8 + qword_18015BF28 + 96) = v14;
  }
  return result;
}
