/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x14017CB24
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14063ABE8 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1407A13A0 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_1403A2DA8 = 0LL;
  return result;
}
