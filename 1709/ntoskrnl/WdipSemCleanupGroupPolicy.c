/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1405AB0EC
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x1405AB02C (WdipSemLoadGroupPolicy.c)
 *     WdipSemCleanStart @ 0x1405AB080 (WdipSemCleanStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
