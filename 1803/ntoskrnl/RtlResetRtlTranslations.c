/*
 * XREFs of RtlResetRtlTranslations @ 0x14065129C
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __stdcall RtlResetRtlTranslations(PNLSTABLEINFO NlsTable)
{
  USHORT DBCSCodePage; // di
  _OWORD *v2; // rcx
  __int64 v3; // rsi
  char v4; // bl
  char v5; // al
  USHORT v6; // di
  __int16 *v7; // rcx
  PUSHORT DBCSOffsets; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm1
  PUSHORT v11; // rax
  __int128 v12; // xmm1

  DBCSCodePage = CodePageTable.DBCSCodePage;
  v2 = NlsLeadByteInfoTable;
  v3 = 4LL;
  v4 = 0;
  if ( CodePageTable.DBCSCodePage )
  {
    DBCSOffsets = CodePageTable.DBCSOffsets;
    v9 = 4LL;
    do
    {
      *v2 = *(_OWORD *)DBCSOffsets;
      v2[1] = *((_OWORD *)DBCSOffsets + 1);
      v2[2] = *((_OWORD *)DBCSOffsets + 2);
      v2[3] = *((_OWORD *)DBCSOffsets + 3);
      v2[4] = *((_OWORD *)DBCSOffsets + 4);
      v2[5] = *((_OWORD *)DBCSOffsets + 5);
      v2[6] = *((_OWORD *)DBCSOffsets + 6);
      v2 += 8;
      v10 = *((_OWORD *)DBCSOffsets + 7);
      DBCSOffsets += 64;
      *(v2 - 1) = v10;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
  }
  NlsMbAnsiCodePageTables = (__int64)CodePageTable.DBCSOffsets;
  NlsAnsiToUnicodeData = (__int64)CodePageTable.MultiByteTable;
  NlsUnicodeToAnsiData = (__int64)CodePageTable.WideCharTable;
  NlsUnicodeToMbAnsiData = (__int64)CodePageTable.WideCharTable;
  NlsAnsiCodePage = CodePageTable.CodePage;
  NlsActiveCodePageIsUTF8 = CodePageTable.CodePage == 0xFDE9;
  if ( DBCSCodePage || (v5 = 0, CodePageTable.CodePage == 0xFDE9) )
    v5 = 1;
  v6 = InitTableInfo.DBCSCodePage;
  v7 = NlsOemLeadByteInfoTable;
  LOBYTE(NlsMbCodePageTag) = v5;
  if ( InitTableInfo.DBCSCodePage )
  {
    v11 = InitTableInfo.DBCSOffsets;
    do
    {
      *(_OWORD *)v7 = *(_OWORD *)v11;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v11 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v11 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v11 + 3);
      *((_OWORD *)v7 + 4) = *((_OWORD *)v11 + 4);
      *((_OWORD *)v7 + 5) = *((_OWORD *)v11 + 5);
      *((_OWORD *)v7 + 6) = *((_OWORD *)v11 + 6);
      v7 += 64;
      v12 = *((_OWORD *)v11 + 7);
      v11 += 64;
      *((_OWORD *)v7 - 1) = v12;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
  }
  NlsMbOemCodePageTables = (__int64)InitTableInfo.DBCSOffsets;
  NlsOemToUnicodeData = (__int64)InitTableInfo.MultiByteTable;
  NlsOemCodePageIsUTF8 = InitTableInfo.CodePage == 0xFDE9;
  NlsUnicodeToOemData = (__int64)InitTableInfo.WideCharTable;
  NlsUnicodeToMbOemData = (__int64)InitTableInfo.WideCharTable;
  OemDefaultChar = InitTableInfo.DefaultChar;
  OemTransUniDefaultChar = InitTableInfo.TransDefaultChar;
  NlsOemCodePage = InitTableInfo.CodePage;
  if ( v6 || InitTableInfo.CodePage == 0xFDE9 )
    v4 = 1;
  *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) = (BOOLEAN *)qword_1408F2760;
  Nls844UnicodeLowercaseTable = qword_1408F2768;
  LOBYTE(NlsMbOemCodePageTag) = v4;
  UnicodeDefaultChar = CodePageTable.UniDefaultChar;
}
