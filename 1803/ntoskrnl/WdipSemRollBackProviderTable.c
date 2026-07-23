/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1407A1334
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140639AE4 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x14060CB80 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_1403A4E00; ++i )
  {
    result = WdipSemFastFree(2, (_SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_1403A4E00 = a1;
  return result;
}
