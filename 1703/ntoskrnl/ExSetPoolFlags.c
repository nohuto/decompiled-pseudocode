/*
 * XREFs of ExSetPoolFlags @ 0x14025B0F0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14077BD60 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
