/*
 * XREFs of ViSettingsIoCheckForChanges @ 0x1407BDE1C
 * Callers:
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1407BDC94 (VfSettingsCheckForChanges.c)
 * Callees:
 *     IoVerifierCheckForSettingsChange @ 0x1407A4550 (IoVerifierCheckForSettingsChange.c)
 *     VfWdCheckForSettingsChange @ 0x1407BE2EC (VfWdCheckForSettingsChange.c)
 */

__int64 __fastcall ViSettingsIoCheckForChanges(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = a1;
  if ( !VfIrpDatabaseInitialized )
    v1 = a1 & 0xFFFFFFEF;
  if ( (v1 & 0x10) == 0 && !VfIoDisabled )
    _InterlockedExchange(&VfIoSwitchedOffNoReboot, 1);
  VfIoDisabled = (v1 & 0x10) == 0;
  IoVerifierCheckForSettingsChange(v1);
  return VfWdCheckForSettingsChange(v1);
}
