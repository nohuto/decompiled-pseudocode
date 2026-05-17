/*
 * XREFs of sub_1800106C4 @ 0x1800106C4
 * Callers:
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 * Callees:
 *     sub_1800108D8 @ 0x1800108D8 (sub_1800108D8.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800106C4(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // r8
  int v9; // r12d
  int v10; // r13d
  int v11; // ecx
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned int v14; // ecx
  _DWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+2Ch] [rbp-2Ch]
  __int64 v17; // [rsp+60h] [rbp+8h]

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
  sub_1800108D8(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v15);
  v6 = v15[0];
  v7 = v15[1];
  v8 = qword_18015BF28;
  v9 = v15[2];
  *(_DWORD *)&word_18015B3C0[v4 + 10] = v15[0];
  *(_DWORD *)&word_18015B3C0[v4 + 12] = v7;
  *(_DWORD *)&word_18015B3C0[v4 + 46] = v9;
  v10 = v16;
  *(_DWORD *)&word_18015B3C0[v4 + 48] = v16;
  if ( v8 )
    goto LABEL_6;
  v14 = dword_180158690;
  if ( (unsigned int)dword_180158690 > 0xFFFF )
    v14 = 0xFFFF;
  dword_180158690 = v14;
  result = RtlAllocateHeap(qword_18015B328, (dword_18015B268 + 0x40000) | 8u, 104LL * v14);
  qword_18015BF28 = result;
  v8 = result;
  if ( result )
  {
LABEL_6:
    v11 = dword_18015BF34;
    v12 = 104LL * (unsigned __int16)(dword_18015BF34 % (unsigned int)dword_180158690);
    v17 = (unsigned __int16)(dword_18015BF34 % (unsigned int)dword_180158690);
    *(_DWORD *)(v12 + v8 + 16) = dword_18015BF34;
    dword_18015BF34 = v11 + 1;
    *(_QWORD *)(v12 + qword_18015BF28) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v12 + qword_18015BF28 + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(v12 + qword_18015BF28 + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(qword_18015BF28 + 2 * (52 * v17 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v12 + qword_18015BF28 + 20) = v6;
    *(_DWORD *)(v12 + qword_18015BF28 + 24) = v7;
    *(_DWORD *)(v12 + qword_18015BF28 + 92) = v9;
    result = qword_18015BF28;
    *(_DWORD *)(v12 + qword_18015BF28 + 96) = v10;
  }
  return result;
}
