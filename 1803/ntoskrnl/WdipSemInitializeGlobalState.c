/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14063ABE8
 * Callers:
 *     WdipSemInitialize @ 0x14063916C (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1407A10E8 (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x14017CB24 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  qword_1403D0E48 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_1403D0E70;
  qword_1403D0E60 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_1403A4E08 = 0LL;
  qword_1403A2DC8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_1403A2DD0 = 0;
  qword_1403A2DD8 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
