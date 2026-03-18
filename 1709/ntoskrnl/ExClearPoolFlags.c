/*
 * XREFs of ExClearPoolFlags @ 0x1402844BC
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1407BDC6C (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void ExClearPoolFlags()
{
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFDF9);
}
