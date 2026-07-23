/*
 * XREFs of RtlResetRtlTranslations @ 0x1800E3F30
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800D4014 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __cdecl RtlResetRtlTranslations(PNLSTABLEINFO TableInfo)
{
  __int64 v1; // rdi
  PUSHORT DBCSOffsets; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  bool v7; // zf
  __int16 *v8; // rcx
  PUSHORT v9; // rax
  __int128 v10; // xmm1
  USHORT CodePage; // cx

  v1 = 4LL;
  if ( TableInfo->AnsiTableInfo.DBCSCodePage )
  {
    DBCSOffsets = TableInfo->AnsiTableInfo.DBCSOffsets;
    v4 = 4LL;
    v5 = NlsLeadByteInfoTable;
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
    memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
  }
  NlsMbAnsiCodePageTables = (__int64)TableInfo->AnsiTableInfo.DBCSOffsets;
  NlsAnsiToUnicodeData = (__int64)TableInfo->AnsiTableInfo.MultiByteTable;
  NlsUnicodeToAnsiData = (__int64)TableInfo->AnsiTableInfo.WideCharTable;
  NlsUnicodeToMbAnsiData = NlsUnicodeToAnsiData;
  NlsAnsiCodePage = TableInfo->AnsiTableInfo.CodePage;
  v7 = TableInfo->AnsiTableInfo.DBCSCodePage == 0;
  NlsActiveCodePageIsUTF8 = NlsAnsiCodePage == 0xFDE9u;
  if ( !v7 || (NlsMbCodePageTag = 0, NlsAnsiCodePage == 0xFDE9) )
    NlsMbCodePageTag = 1;
  v8 = NlsOemLeadByteInfoTable;
  if ( TableInfo->OemTableInfo.DBCSCodePage )
  {
    v9 = TableInfo->OemTableInfo.DBCSOffsets;
    do
    {
      *(_OWORD *)v8 = *(_OWORD *)v9;
      *((_OWORD *)v8 + 1) = *((_OWORD *)v9 + 1);
      *((_OWORD *)v8 + 2) = *((_OWORD *)v9 + 2);
      *((_OWORD *)v8 + 3) = *((_OWORD *)v9 + 3);
      *((_OWORD *)v8 + 4) = *((_OWORD *)v9 + 4);
      *((_OWORD *)v8 + 5) = *((_OWORD *)v9 + 5);
      *((_OWORD *)v8 + 6) = *((_OWORD *)v9 + 6);
      v8 += 64;
      v10 = *((_OWORD *)v9 + 7);
      v9 += 64;
      *((_OWORD *)v8 - 1) = v10;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(NlsOemLeadByteInfoTable, 0, 0x200uLL);
  }
  CodePage = TableInfo->OemTableInfo.CodePage;
  NlsMbOemCodePageTables = (__int64)TableInfo->OemTableInfo.DBCSOffsets;
  NlsOemToUnicodeData = (__int64)TableInfo->OemTableInfo.MultiByteTable;
  NlsUnicodeToOemData = (__int64)TableInfo->OemTableInfo.WideCharTable;
  NlsUnicodeToMbOemData = NlsUnicodeToOemData;
  OemDefaultChar = TableInfo->OemTableInfo.DefaultChar;
  OemTransUniDefaultChar = TableInfo->OemTableInfo.TransDefaultChar;
  v7 = TableInfo->OemTableInfo.DBCSCodePage == 0;
  NlsOemCodePageIsUTF8 = CodePage == 0xFDE9u;
  NlsOemCodePage = CodePage;
  if ( !v7 || (NlsMbOemCodePageTag = 0, CodePage == 0xFDE9) )
    NlsMbOemCodePageTag = 1;
  Nls844UnicodeUpcaseTable = (__int64)TableInfo->UpperCaseTable;
  Nls844UnicodeLowercaseTable = (__int64)TableInfo->LowerCaseTable;
}
