/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x14013418C
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1405ABB3C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14073ED7C (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_1403617E8 = 0LL;
  return result;
}
