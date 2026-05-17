/*
 * XREFs of RtlResetRtlTranslations @ 0x1800E3F30
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800D4014 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlResetRtlTranslations(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  bool v7; // zf
  __int16 *v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int16 v11; // cx
  __int64 result; // rax

  v1 = 4LL;
  if ( *(_WORD *)(a1 + 76) )
  {
    v3 = *(_OWORD **)(a1 + 120);
    v4 = 4LL;
    v5 = NlsLeadByteInfoTable;
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
    memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
  }
  NlsMbAnsiCodePageTables = *(_QWORD *)(a1 + 120);
  NlsAnsiToUnicodeData = *(_QWORD *)(a1 + 96);
  NlsUnicodeToAnsiData = *(_QWORD *)(a1 + 104);
  NlsUnicodeToMbAnsiData = NlsUnicodeToAnsiData;
  NlsAnsiCodePage = *(_WORD *)(a1 + 64);
  v7 = *(_WORD *)(a1 + 76) == 0;
  NlsActiveCodePageIsUTF8 = NlsAnsiCodePage == -535;
  if ( !v7 || (NlsMbCodePageTag = 0, NlsAnsiCodePage == -535) )
    NlsMbCodePageTag = 1;
  v8 = NlsOemLeadByteInfoTable;
  if ( *(_WORD *)(a1 + 12) )
  {
    v9 = *(_OWORD **)(a1 + 56);
    do
    {
      *(_OWORD *)v8 = *v9;
      *((_OWORD *)v8 + 1) = v9[1];
      *((_OWORD *)v8 + 2) = v9[2];
      *((_OWORD *)v8 + 3) = v9[3];
      *((_OWORD *)v8 + 4) = v9[4];
      *((_OWORD *)v8 + 5) = v9[5];
      *((_OWORD *)v8 + 6) = v9[6];
      v8 += 64;
      v10 = v9[7];
      v9 += 8;
      *((_OWORD *)v8 - 1) = v10;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    memset(NlsOemLeadByteInfoTable, 0, 0x200uLL);
  }
  v11 = *(_WORD *)a1;
  NlsMbOemCodePageTables = *(_QWORD *)(a1 + 56);
  NlsOemToUnicodeData = *(_QWORD *)(a1 + 32);
  NlsUnicodeToOemData = *(_QWORD *)(a1 + 40);
  NlsUnicodeToMbOemData = NlsUnicodeToOemData;
  OemDefaultChar = *(_WORD *)(a1 + 4);
  OemTransUniDefaultChar = *(_WORD *)(a1 + 8);
  v7 = *(_WORD *)(a1 + 12) == 0;
  NlsOemCodePageIsUTF8 = v11 == -535;
  NlsOemCodePage = v11;
  if ( !v7 || (NlsMbOemCodePageTag = 0, v11 == -535) )
    NlsMbOemCodePageTag = 1;
  Nls844UnicodeUpcaseTable = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  Nls844UnicodeLowercaseTable = result;
  return result;
}
