/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1405CA390
 * Callers:
 *     WdipSemCleanStart @ 0x1405CA324 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1405CA4C0 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
