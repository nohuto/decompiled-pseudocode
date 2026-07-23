/*
 * XREFs of RtlResetRtlTranslations @ 0x1800DEFA0
 * Callers:
 *     sub_1800CDEB8 @ 0x1800CDEB8 (sub_1800CDEB8.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __cdecl RtlResetRtlTranslations(PNLSTABLEINFO TableInfo)
{
  __int64 v1; // rsi
  BOOLEAN v2; // di
  PUSHORT DBCSOffsets; // rax
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  BOOLEAN v8; // al
  __int16 *v9; // rcx
  PUSHORT v10; // rax
  __int128 v11; // xmm1
  USHORT CodePage; // cx

  v1 = 4LL;
  v2 = 0;
  if ( TableInfo->AnsiTableInfo.DBCSCodePage )
  {
    DBCSOffsets = TableInfo->AnsiTableInfo.DBCSOffsets;
    v5 = 4LL;
    v6 = word_18015ADC0;
    do
    {
      *v6 = *(_OWORD *)DBCSOffsets;
      v6[1] = *((_OWORD *)DBCSOffsets + 1);
      v6[2] = *((_OWORD *)DBCSOffsets + 2);
      v6[3] = *((_OWORD *)DBCSOffsets + 3);
      v6[4] = *((_OWORD *)DBCSOffsets + 4);
      v6[5] = *((_OWORD *)DBCSOffsets + 5);
      v6[6] = *((_OWORD *)DBCSOffsets + 6);
      v6 += 8;
      v7 = *((_OWORD *)DBCSOffsets + 7);
      DBCSOffsets += 64;
      *(v6 - 1) = v7;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    memset(word_18015ADC0, 0, sizeof(word_18015ADC0));
  }
  qword_18015AFE0 = (__int64)TableInfo->AnsiTableInfo.DBCSOffsets;
  qword_18015B210 = (__int64)TableInfo->AnsiTableInfo.MultiByteTable;
  qword_18015B218 = (__int64)TableInfo->AnsiTableInfo.WideCharTable;
  qword_18015ADB8 = qword_18015B218;
  NlsAnsiCodePage = TableInfo->AnsiTableInfo.CodePage;
  byte_18015ADB1 = NlsAnsiCodePage == 0xFDE9u;
  if ( TableInfo->AnsiTableInfo.DBCSCodePage || (v8 = 0, NlsAnsiCodePage == 0xFDE9) )
    v8 = 1;
  NlsMbCodePageTag = v8;
  v9 = word_18015B000;
  if ( TableInfo->OemTableInfo.DBCSCodePage )
  {
    v10 = TableInfo->OemTableInfo.DBCSOffsets;
    do
    {
      *(_OWORD *)v9 = *(_OWORD *)v10;
      *((_OWORD *)v9 + 1) = *((_OWORD *)v10 + 1);
      *((_OWORD *)v9 + 2) = *((_OWORD *)v10 + 2);
      *((_OWORD *)v9 + 3) = *((_OWORD *)v10 + 3);
      *((_OWORD *)v9 + 4) = *((_OWORD *)v10 + 4);
      *((_OWORD *)v9 + 5) = *((_OWORD *)v10 + 5);
      *((_OWORD *)v9 + 6) = *((_OWORD *)v10 + 6);
      v9 += 64;
      v11 = *((_OWORD *)v10 + 7);
      v10 += 64;
      *((_OWORD *)v9 - 1) = v11;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(word_18015B000, 0, 0x200uLL);
  }
  CodePage = TableInfo->OemTableInfo.CodePage;
  qword_18015AFD8 = (__int64)TableInfo->OemTableInfo.DBCSOffsets;
  qword_18015B208 = (__int64)TableInfo->OemTableInfo.MultiByteTable;
  byte_18015AFC8 = CodePage == 0xFDE9u;
  qword_18015AFD0 = (__int64)TableInfo->OemTableInfo.WideCharTable;
  qword_18015AFC0 = qword_18015AFD0;
  word_18015B220 = TableInfo->OemTableInfo.DefaultChar;
  word_18015AFCA = TableInfo->OemTableInfo.TransDefaultChar;
  word_18015AFCC = CodePage;
  if ( TableInfo->OemTableInfo.DBCSCodePage || CodePage == 0xFDE9 )
    v2 = 1;
  NlsMbOemCodePageTag = v2;
  qword_18015B238 = (__int64)TableInfo->UpperCaseTable;
  qword_18015B228 = (__int64)TableInfo->LowerCaseTable;
}
