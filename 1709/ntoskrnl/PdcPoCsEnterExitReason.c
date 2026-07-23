/*
 * XREFs of PdcPoCsEnterExitReason @ 0x1406FF020
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140137C40 (KeQueryInterruptTimePrecise.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406F76AC (PopEvaluateAggressiveStandbyActions.c)
 */

__int64 __fastcall PdcPoCsEnterExitReason(char a1, int a2)
{
  LARGE_INTEGER v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    PopPdcLastCsEnterReason = a2;
  }
  else
  {
    PopPdcLastCsExitReason = a2;
    PopPdcLastCsExitTime = KeQueryInterruptTimePrecise(&v4).QuadPart;
  }
  return PopEvaluateAggressiveStandbyActions(a1);
}
