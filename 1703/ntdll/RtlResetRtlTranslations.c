/*
 * XREFs of RtlResetRtlTranslations @ 0x18008A620
 * Callers:
 *     sub_1800939F0 @ 0x1800939F0 (sub_1800939F0.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __cdecl RtlResetRtlTranslations(PNLSTABLEINFO TableInfo)
{
  __int64 v1; // rdi
  PUSHORT DBCSOffsets; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  __int16 *v7; // rcx
  bool v8; // zf
  PVOID WideCharTable; // rax
  PUSHORT v10; // rax
  __int128 v11; // xmm1
  PVOID v12; // rax

  v1 = 4LL;
  if ( TableInfo->AnsiTableInfo.DBCSCodePage )
  {
    DBCSOffsets = TableInfo->AnsiTableInfo.DBCSOffsets;
    v4 = 4LL;
    v5 = word_180159D80;
    do
    {
      *v5 = *(_OWORD *)DBCSOffsets;
      v5[1] = *((_OWORD *)DBCSOffsets + 1);
      v5[2] = *((_OWORD *)DBCSOffsets + 2);
      v5[3] = *((_OWORD *)DBCSOffsets + 3);
      v5[4] = *((_OWORD *)DBCSOffsets + 4);
      v5[5] = *((_OWORD *)DBCSOffsets + 5);
      v5[6] = *((_OWORD *)DBCSOffsets + 6);
      v5 += 8;
      v6 = *((_OWORD *)DBCSOffsets + 7);
      DBCSOffsets += 64;
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
  v8 = TableInfo->AnsiTableInfo.DBCSCodePage == 0;
  qword_180159FA0 = (__int64)TableInfo->AnsiTableInfo.DBCSOffsets;
  qword_18015A1D0 = (__int64)TableInfo->AnsiTableInfo.MultiByteTable;
  WideCharTable = TableInfo->AnsiTableInfo.WideCharTable;
  NlsMbCodePageTag = !v8;
  qword_18015A1D8 = (__int64)WideCharTable;
  qword_180159D70 = (__int64)WideCharTable;
  NlsAnsiCodePage = TableInfo->AnsiTableInfo.CodePage;
  if ( TableInfo->OemTableInfo.DBCSCodePage )
  {
    v10 = TableInfo->OemTableInfo.DBCSOffsets;
    do
    {
      *(_OWORD *)v7 = *(_OWORD *)v10;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v10 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v10 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v10 + 3);
      *((_OWORD *)v7 + 4) = *((_OWORD *)v10 + 4);
      *((_OWORD *)v7 + 5) = *((_OWORD *)v10 + 5);
      *((_OWORD *)v7 + 6) = *((_OWORD *)v10 + 6);
      v7 += 64;
      v11 = *((_OWORD *)v10 + 7);
      v10 += 64;
      *((_OWORD *)v7 - 1) = v11;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(word_180159FC0, 0, sizeof(word_180159FC0));
  }
  v8 = TableInfo->OemTableInfo.DBCSCodePage == 0;
  qword_180159F98 = (__int64)TableInfo->OemTableInfo.DBCSOffsets;
  qword_18015A1C8 = (__int64)TableInfo->OemTableInfo.MultiByteTable;
  v12 = TableInfo->OemTableInfo.WideCharTable;
  NlsMbOemCodePageTag = !v8;
  qword_180159F90 = (__int64)v12;
  qword_180159F80 = (__int64)v12;
  word_18015A1E0 = TableInfo->OemTableInfo.DefaultChar;
  word_180159F88 = TableInfo->OemTableInfo.TransDefaultChar;
  qword_180159D68 = (__int64)TableInfo->UpperCaseTable;
  qword_18015A1E8 = (__int64)TableInfo->LowerCaseTable;
}
