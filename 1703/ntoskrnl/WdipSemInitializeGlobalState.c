/*
 * XREFs of WdipSemInitializeGlobalState @ 0x1405CAA50
 * Callers:
 *     WdipSemInitialize @ 0x1405CA2D0 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x140705878 (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1401635DC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  _SLIST_HEADER *v1; // rbx
  void *result; // rax

  WdipSemPushLock = 0LL;
  WdipSemRegHandle = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 0;
  WdipSemDisabledScenarioTable = 0LL;
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(&WdipSemPool, 0, 0x90uLL);
  qword_14036E9C8 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_14036E9F0;
  qword_14036E9E0 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_140347D88 = 0LL;
  qword_140345B48 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140345B50 = 0;
  qword_140345B58 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
