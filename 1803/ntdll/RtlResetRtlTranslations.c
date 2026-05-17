/*
 * XREFs of RtlResetRtlTranslations @ 0x1800DEFA0
 * Callers:
 *     sub_1800CDEB8 @ 0x1800CDEB8 (sub_1800CDEB8.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlResetRtlTranslations(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // di
  _OWORD *v4; // rax
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  char v8; // al
  __int16 *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int16 v12; // cx
  __int64 result; // rax

  v1 = 4LL;
  v2 = 0;
  if ( *(_WORD *)(a1 + 76) )
  {
    v4 = *(_OWORD **)(a1 + 120);
    v5 = 4LL;
    v6 = word_18015ADC0;
    do
    {
      *v6 = *v4;
      v6[1] = v4[1];
      v6[2] = v4[2];
      v6[3] = v4[3];
      v6[4] = v4[4];
      v6[5] = v4[5];
      v6[6] = v4[6];
      v6 += 8;
      v7 = v4[7];
      v4 += 8;
      *(v6 - 1) = v7;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    memset(word_18015ADC0, 0, sizeof(word_18015ADC0));
  }
  qword_18015AFE0 = *(_QWORD *)(a1 + 120);
  qword_18015B210 = *(_QWORD *)(a1 + 96);
  qword_18015B218 = *(_QWORD *)(a1 + 104);
  qword_18015ADB8 = qword_18015B218;
  NlsAnsiCodePage = *(_WORD *)(a1 + 64);
  byte_18015ADB1 = NlsAnsiCodePage == -535;
  if ( *(_WORD *)(a1 + 76) || (v8 = 0, NlsAnsiCodePage == -535) )
    v8 = 1;
  NlsMbCodePageTag = v8;
  v9 = word_18015B000;
  if ( *(_WORD *)(a1 + 12) )
  {
    v10 = *(_OWORD **)(a1 + 56);
    do
    {
      *(_OWORD *)v9 = *v10;
      *((_OWORD *)v9 + 1) = v10[1];
      *((_OWORD *)v9 + 2) = v10[2];
      *((_OWORD *)v9 + 3) = v10[3];
      *((_OWORD *)v9 + 4) = v10[4];
      *((_OWORD *)v9 + 5) = v10[5];
      *((_OWORD *)v9 + 6) = v10[6];
      v9 += 64;
      v11 = v10[7];
      v10 += 8;
      *((_OWORD *)v9 - 1) = v11;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(word_18015B000, 0, 0x200uLL);
  }
  v12 = *(_WORD *)a1;
  qword_18015AFD8 = *(_QWORD *)(a1 + 56);
  qword_18015B208 = *(_QWORD *)(a1 + 32);
  byte_18015AFC8 = v12 == -535;
  qword_18015AFD0 = *(_QWORD *)(a1 + 40);
  qword_18015AFC0 = qword_18015AFD0;
  word_18015B220 = *(_WORD *)(a1 + 4);
  word_18015AFCA = *(_WORD *)(a1 + 8);
  word_18015AFCC = v12;
  if ( *(_WORD *)(a1 + 12) || v12 == -535 )
    v2 = 1;
  NlsMbOemCodePageTag = v2;
  qword_18015B238 = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  qword_18015B228 = result;
  return result;
}
