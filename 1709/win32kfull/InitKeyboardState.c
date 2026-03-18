/*
 * XREFs of InitKeyboardState @ 0x1C0123570
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
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
