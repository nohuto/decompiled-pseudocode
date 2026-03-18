/*
 * XREFs of ExClearPoolFlags @ 0x14025AD74
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x14077BD60 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void ExClearPoolFlags()
{
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFDF9);
}
