/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x14077BD60
 * Callers:
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x14077BD7C (VfSettingsCheckForChanges.c)
 * Callees:
 *     <none>
 */

void __fastcall VfSettingsApplyMiscellaneousChecks(__int16 a1)
{
  if ( (a1 & 0x800) != 0 )
    ExSetPoolFlags(0x206u);
  else
    ExClearPoolFlags();
}
