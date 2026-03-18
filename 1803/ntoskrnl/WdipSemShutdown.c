/*
 * XREFs of WdipSemShutdown @ 0x1407A13A0
 * Callers:
 *     WdipSemDisableScenario @ 0x14060D4B8 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14060D740 (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1406391C0 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1407A10E8 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x14017CB24 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     WdipSemFreePool @ 0x1407A17A4 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1407A1F54 (WdipSemDisableAllProviders.c)
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
  qword_1403A4E08 = 0LL;
  dword_1403A2DD0 = 0;
  qword_1403A2DD8 = 0LL;
  qword_1403A2DC8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
