/*
 * XREFs of ExSetPoolFlags @ 0x1402B8EAC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1408143C8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140814500 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14082B024 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
