/*
 * XREFs of TtmpResetEvaluationTimer @ 0x14070ECC4
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x14070EDB8 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x14070EFD4 (TtmpUpdateTerminalState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
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
