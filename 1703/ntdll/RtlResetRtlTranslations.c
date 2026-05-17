/*
 * XREFs of RtlResetRtlTranslations @ 0x18008A620
 * Callers:
 *     sub_1800939F0 @ 0x1800939F0 (sub_1800939F0.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlResetRtlTranslations(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  __int16 *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 result; // rax

  v1 = 4LL;
  if ( *(_WORD *)(a1 + 76) )
  {
    v3 = *(_OWORD **)(a1 + 120);
    v4 = 4LL;
    v5 = word_180159D80;
    do
    {
      *v5 = *v3;
      v5[1] = v3[1];
      v5[2] = v3[2];
      v5[3] = v3[3];
      v5[4] = v3[4];
      v5[5] = v3[5];
      v5[6] = v3[6];
      v5 += 8;
      v6 = v3[7];
      v3 += 8;
      *(v5 - 1) = v6;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    memset(word_180159D80, 0, sizeof(word_180159D80));
  }
  v7 = word_180159FC0;
  v8 = *(_WORD *)(a1 + 76) == 0;
  qword_180159FA0 = *(_QWORD *)(a1 + 120);
  qword_18015A1D0 = *(_QWORD *)(a1 + 96);
  v9 = *(_QWORD *)(a1 + 104);
  NlsMbCodePageTag = !v8;
  qword_18015A1D8 = v9;
  qword_180159D70 = v9;
  NlsAnsiCodePage = *(_WORD *)(a1 + 64);
  if ( *(_WORD *)(a1 + 12) )
  {
    v10 = *(_OWORD **)(a1 + 56);
    do
    {
      *(_OWORD *)v7 = *v10;
      *((_OWORD *)v7 + 1) = v10[1];
      *((_OWORD *)v7 + 2) = v10[2];
      *((_OWORD *)v7 + 3) = v10[3];
      *((_OWORD *)v7 + 4) = v10[4];
      *((_OWORD *)v7 + 5) = v10[5];
      *((_OWORD *)v7 + 6) = v10[6];
      v7 += 64;
      v11 = v10[7];
      v10 += 8;
      *((_OWORD *)v7 - 1) = v11;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(word_180159FC0, 0, sizeof(word_180159FC0));
  }
  v8 = *(_WORD *)(a1 + 12) == 0;
  qword_180159F98 = *(_QWORD *)(a1 + 56);
  qword_18015A1C8 = *(_QWORD *)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 40);
  NlsMbOemCodePageTag = !v8;
  qword_180159F90 = v12;
  qword_180159F80 = v12;
  word_18015A1E0 = *(_WORD *)(a1 + 4);
  word_180159F88 = *(_WORD *)(a1 + 8);
  qword_180159D68 = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  qword_18015A1E8 = result;
  return result;
}
