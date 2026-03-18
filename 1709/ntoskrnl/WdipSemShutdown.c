/*
 * XREFs of WdipSemShutdown @ 0x14073ED7C
 * Callers:
 *     WdipSemCleanStart @ 0x1405AB080 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x1405AB6EC (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1405AB884 (WdipSemEnableScenario.c)
 *     WdipSemUpdate @ 0x14073DDC8 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x14013418C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140192F40 (memset.c)
 *     WdipSemFreePool @ 0x14073F430 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x14073FDC0 (WdipSemDisableAllProviders.c)
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
  qword_1403613A8 = 0LL;
  dword_1403613D0 = 0;
  qword_1403613D8 = 0LL;
  qword_1403613C8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
