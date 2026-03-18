/*
 * XREFs of TtmpResetEvaluationTimer @ 0x140772424
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x140772528 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x14077273C (TtmpUpdateTerminalState.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a2 )
  {
    v3 = -a2;
    ObfReferenceObject(Object);
    result = KiSetTimerEx((__int64)(Object + 80), v3, 0, 0, (__int64)(Object + 144));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 80));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
