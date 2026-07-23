/*
 * XREFs of RtlInitNlsTables @ 0x1800DEF30
 * Callers:
 *     sub_1800CDEB8 @ 0x1800CDEB8 (sub_1800CDEB8.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1800DEE70 (RtlInitCodePageTable.c)
 */

void __cdecl RtlInitNlsTables(
        PUSHORT AnsiNlsBase,
        PUSHORT OemNlsBase,
        PUSHORT LanguageNlsBase,
        PNLSTABLEINFO TableInfo)
{
  __int64 v7; // rcx

  RtlInitCodePageTable(AnsiNlsBase, &TableInfo->AnsiTableInfo);
  RtlInitCodePageTable(OemNlsBase, &TableInfo->OemTableInfo);
  v7 = (unsigned __int16)(LanguageNlsBase[1] + 1);
  TableInfo->UpperCaseTable = LanguageNlsBase + 2;
  TableInfo->LowerCaseTable = &LanguageNlsBase[v7 + 1];
}
