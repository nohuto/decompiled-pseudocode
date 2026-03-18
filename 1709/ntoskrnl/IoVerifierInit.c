/*
 * XREFs of IoVerifierInit @ 0x1407A45E8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1407A7248 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1408353DC (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1401F56D4 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x1407A4550 (IoVerifierCheckForSettingsChange.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  IopUpdateFunctionPointers(1, 1, 0);
  return IoVerifierCheckForSettingsChange(a1);
}
