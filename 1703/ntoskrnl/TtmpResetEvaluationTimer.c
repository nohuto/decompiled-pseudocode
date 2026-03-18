/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1406D8934
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1406D8A28 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1406D8C40 (TtmpUpdateTerminalState.c)
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
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
