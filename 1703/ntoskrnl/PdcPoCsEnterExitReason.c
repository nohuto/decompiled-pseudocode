/*
 * XREFs of PdcPoCsEnterExitReason @ 0x1406CB0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140143630 (KeQueryInterruptTimePrecise.c)
 */

__int64 __fastcall PdcPoCsEnterExitReason(char a1, int a2)
{
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    PopPdcLastCsEnterReason = a2;
  }
  else
  {
    PopPdcLastCsExitReason = a2;
    PopPdcLastCsExitTime = KeQueryInterruptTimePrecise(&PerformanceCounter).QuadPart;
  }
  return PopEvaluateAggressiveStandbyActions(a1);
}
