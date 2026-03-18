/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1401635DC
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1405CAA50 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x140705958 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_140345B28 = 0LL;
  return result;
}
