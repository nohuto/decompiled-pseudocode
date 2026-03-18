/*
 * XREFs of xxxRouteTouchpadInertiaToMT @ 0x1C020AA0C
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020A28C (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

__int64 xxxRouteTouchpadInertiaToMT()
{
  __int64 result; // rax

  result = gInertiaMTInfo;
  if ( (gInertiaMTInfo & 1) != 0 )
    return xxxRouteSyntheticTouchpadToMT(dword_1C0335CCC, stru_1C0335CD0, stru_1C0335CD8, qword_1C0335CE0);
  return result;
}
