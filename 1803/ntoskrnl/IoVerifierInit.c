/*
 * XREFs of IoVerifierInit @ 0x1408115A8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1408143C8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1408AD198 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x140232C5C (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140811510 (IoVerifierCheckForSettingsChange.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    return IoVerifierCheckForSettingsChange(a1);
  }
  return result;
}
