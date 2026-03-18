/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x1407BDC6C
 * Callers:
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1407BDC94 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1402844BC (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x1402848EC (ExSetPoolFlags.c)
 */

void __fastcall VfSettingsApplyMiscellaneousChecks(__int16 a1)
{
  if ( (a1 & 0x800) != 0 )
    ExSetPoolFlags(0x206u);
  else
    ExClearPoolFlags();
}
