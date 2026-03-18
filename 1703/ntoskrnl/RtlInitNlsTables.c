/*
 * XREFs of RtlInitNlsTables @ 0x1405D09A4
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1405D0A10 (RtlInitCodePageTable.c)
 */

void __stdcall RtlInitNlsTables(
        PUSHORT AnsiTableBase,
        PUSHORT OemTableBase,
        PUSHORT CaseTableBase,
        PNLSTABLEINFO NlsTable)
{
  __int64 v6; // rcx

  RtlInitCodePageTable(AnsiTableBase, &CodePageTable);
  RtlInitCodePageTable(OemTableBase, &InitTableInfo);
  v6 = (unsigned __int16)(CaseTableBase[1] + 1);
  qword_1407C56D0 = (__int64)(CaseTableBase + 2);
  qword_1407C56D8 = (__int64)&CaseTableBase[v6 + 1];
}
