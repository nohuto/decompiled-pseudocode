/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x14063922C
 * Callers:
 *     WdipSemCleanStart @ 0x1406391C0 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14063935C (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
