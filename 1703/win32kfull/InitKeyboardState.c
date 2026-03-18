/*
 * XREFs of InitKeyboardState @ 0x1C0119AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitKeyboardState()
{
  __int64 result; // rax

  result = gfsSASModifiersDown;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  WPP_MAIN_CB.AlignmentRequirement = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
