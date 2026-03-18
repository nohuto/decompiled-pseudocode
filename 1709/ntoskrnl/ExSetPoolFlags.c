/*
 * XREFs of ExSetPoolFlags @ 0x1402848EC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1407A7248 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1407BDC6C (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
