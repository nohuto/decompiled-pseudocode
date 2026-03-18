/*
 * XREFs of WdipSemShutdown @ 0x140705958
 * Callers:
 *     WdipSemDisableScenario @ 0x140467560 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140584544 (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1405CA324 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x140705878 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1401635DC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140192D80 (memset.c)
 *     WdipSemDisableAllProviders @ 0x140706500 (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_140347D88 = 0LL;
  dword_140345B50 = 0;
  qword_140345B58 = 0LL;
  qword_140345B48 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
