/*
 * XREFs of RtlResetRtlTranslations @ 0x1405ECD74
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void __stdcall RtlResetRtlTranslations(PNLSTABLEINFO NlsTable)
{
  _OWORD *v1; // rcx
  __int64 v2; // rbx
  __int16 *v3; // rcx
  PUSHORT DBCSOffsets; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  PUSHORT v7; // rax
  __int128 v8; // xmm1

  v1 = NlsLeadByteInfoTable;
  v2 = 4LL;
  if ( CodePageTable.DBCSCodePage )
  {
    DBCSOffsets = CodePageTable.DBCSOffsets;
    v5 = 4LL;
    do
    {
      *v1 = *(_OWORD *)DBCSOffsets;
      v1[1] = *((_OWORD *)DBCSOffsets + 1);
      v1[2] = *((_OWORD *)DBCSOffsets + 2);
      v1[3] = *((_OWORD *)DBCSOffsets + 3);
      v1[4] = *((_OWORD *)DBCSOffsets + 4);
      v1[5] = *((_OWORD *)DBCSOffsets + 5);
      v1[6] = *((_OWORD *)DBCSOffsets + 6);
      v1 += 8;
      v6 = *((_OWORD *)DBCSOffsets + 7);
      DBCSOffsets += 64;
      *(v1 - 1) = v6;
      --v5;
    }
    while ( v5 );
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
  if ( CodePageTable.DBCSCodePage || (LOBYTE(NlsMbCodePageTag) = 0, CodePageTable.CodePage == 0xFDE9) )
    LOBYTE(NlsMbCodePageTag) = 1;
  v3 = NlsOemLeadByteInfoTable;
  if ( InitTableInfo.DBCSCodePage )
  {
    v7 = InitTableInfo.DBCSOffsets;
    do
    {
      *(_OWORD *)v3 = *(_OWORD *)v7;
      *((_OWORD *)v3 + 1) = *((_OWORD *)v7 + 1);
      *((_OWORD *)v3 + 2) = *((_OWORD *)v7 + 2);
      *((_OWORD *)v3 + 3) = *((_OWORD *)v7 + 3);
      *((_OWORD *)v3 + 4) = *((_OWORD *)v7 + 4);
      *((_OWORD *)v3 + 5) = *((_OWORD *)v7 + 5);
      *((_OWORD *)v3 + 6) = *((_OWORD *)v7 + 6);
      v3 += 64;
      v8 = *((_OWORD *)v7 + 7);
      v7 += 64;
      *((_OWORD *)v3 - 1) = v8;
      --v2;
    }
    while ( v2 );
  }
  else
  {
    memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
  }
  NlsMbOemCodePageTables = (__int64)InitTableInfo.DBCSOffsets;
  NlsOemToUnicodeData = (__int64)InitTableInfo.MultiByteTable;
  NlsUnicodeToOemData = (__int64)InitTableInfo.WideCharTable;
  NlsUnicodeToMbOemData = (__int64)InitTableInfo.WideCharTable;
  OemDefaultChar = InitTableInfo.DefaultChar;
  OemTransUniDefaultChar = InitTableInfo.TransDefaultChar;
  NlsOemCodePageIsUTF8 = InitTableInfo.CodePage == 0xFDE9;
  NlsOemCodePage = InitTableInfo.CodePage;
  if ( InitTableInfo.DBCSCodePage || (LOBYTE(NlsMbOemCodePageTag) = 0, InitTableInfo.CodePage == 0xFDE9) )
    LOBYTE(NlsMbOemCodePageTag) = 1;
  *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) = (BOOLEAN *)qword_14087C760;
  Nls844UnicodeLowercaseTable = qword_14087C768;
  UnicodeDefaultChar = CodePageTable.UniDefaultChar;
}
