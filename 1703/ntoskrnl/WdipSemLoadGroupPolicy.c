/*
 * XREFs of WdipSemLoadGroupPolicy @ 0x1405CA4C0
 * Callers:
 *     WdipSemCleanStart @ 0x1405CA324 (WdipSemCleanStart.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     WdipSemQueryValueFromRegistry @ 0x1405AE440 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x1405AE548 (WdipSemOpenRegistryKey.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405CA390 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140705E00 (WdipSemLoadLocalGroupPolicy.c)
 */

__int64 WdipSemLoadGroupPolicy()
{
  int LocalGroupPolicy; // ebx
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = 0;
  LODWORD(v3) = 4;
  if ( WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WDI", 0LL, &Handle) < 0 )
    goto LABEL_2;
  LocalGroupPolicy = WdipSemQueryValueFromRegistry(Handle, L"ScenarioExecutionEnabled", 4, 4u, &v2, (unsigned int *)&v3);
  if ( LocalGroupPolicy >= 0 )
  {
    if ( !v2 )
      LocalGroupPolicy = -1073741823;
  }
  else
  {
    LocalGroupPolicy = WdipSemLoadLocalGroupPolicy(Handle);
    if ( LocalGroupPolicy < 0 )
    {
      WdipSemCleanupGroupPolicy();
LABEL_2:
      LocalGroupPolicy = 0;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)LocalGroupPolicy;
}
