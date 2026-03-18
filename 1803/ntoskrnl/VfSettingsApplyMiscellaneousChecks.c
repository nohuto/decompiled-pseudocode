/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x14082B024
 * Callers:
 *     VfInitVerifierComponents @ 0x140814500 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x14082B060 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1402B8ADC (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x1402B8EAC (ExSetPoolFlags.c)
 */

void __fastcall VfSettingsApplyMiscellaneousChecks(__int16 a1)
{
  bool v1; // cf
  int v2; // ecx

  v1 = (a1 & 0x800) != 0;
  v2 = (MmVerifierData & 0x400000) == 0 ? 0x206 : 0;
  if ( v1 )
    ExSetPoolFlags(v2);
  else
    ExClearPoolFlags(v2);
}
