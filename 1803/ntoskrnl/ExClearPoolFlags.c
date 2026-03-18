/*
 * XREFs of ExClearPoolFlags @ 0x1402B8ADC
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x14082B024 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
