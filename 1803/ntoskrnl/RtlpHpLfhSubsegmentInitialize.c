/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x14029CC10
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x14029B8A4 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140170804 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentInitialize(char *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v6; // r14d
  __int16 v7; // bp
  __int16 v8; // r15
  unsigned __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // eax
  char *v13; // rcx
  char *v14; // rdi
  char *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // di
  unsigned __int64 result; // rax
  int v19; // [rsp+58h] [rbp+10h]

  v6 = a2 / a3;
  v7 = a4;
  v8 = (a2
      - ((2
        * (a2 / a3
         + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 1))) + 63) >> 6))
        + 63) & 0xFFFFFFF0))
     / a4;
  v9 = 2
     * ((a2
       - ((2
         * (a2 / a3
          + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 1))) + 63) >> 6))
         + 63) & 0xFFFFFFF0))
      / a4);
  v10 = (2 * (a2 / a3 + 4 * ((v9 + 63) >> 6)) + 63) & 0xFFFFFFF0;
  memset(a1, 0, 0x30uLL);
  *((_QWORD *)a1 + 3) = 0LL;
  HIWORD(v19) = v10;
  v11 = (unsigned __int16)(8 * ((v9 + 63) >> 6) + 48);
  v12 = qword_1403A5F28 ^ ((unsigned int)a1 >> 12);
  *((_WORD *)a1 + 23) = v11;
  v13 = &a1[v11];
  LOWORD(v19) = v7;
  *((_DWORD *)a1 + 10) = v19 ^ v12;
  v14 = v13 + 2;
  *((_WORD *)a1 + 16) = v8;
  _BitScanForward((unsigned int *)&v12, a3);
  *((_WORD *)a1 + 17) = v8;
  a1[44] = v12;
  a1[38] = 2;
  a1[45] = v6;
  *(_WORD *)v13 = 0;
  v15 = &v13[2 * (unsigned __int8)v6];
  v16 = (2 * (unsigned __int64)(unsigned __int8)v6 - 2 + 1) >> 1;
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
  if ( (v9 & 0x3F) != 0 )
    *(_QWORD *)&a1[8 * (v9 >> 6) + 48] |= ~((1LL << (v9 & 0x3F)) - 1);
  v17 = word_1403EC860;
  result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * (v17 >> 3)] = result;
  return result;
}
