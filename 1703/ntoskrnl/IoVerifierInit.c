/*
 * XREFs of IoVerifierInit @ 0x140762968
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x14081526C (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1401F0030 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  IopUpdateFunctionPointers(1, 1, 0);
  return IoVerifierCheckForSettingsChange(a1);
}
