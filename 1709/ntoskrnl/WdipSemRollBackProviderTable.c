/*
 * XREFs of WdipSemRollBackProviderTable @ 0x14073ED10
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1405AAA94 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_1403613A0; ++i )
  {
    result = WdipSemFastFree(2, (_SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_1403613A0 = a1;
  return result;
}
