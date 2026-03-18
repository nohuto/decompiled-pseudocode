/*
 * XREFs of PopIsUserInitiatedMonitorRequestReason @ 0x14022A4B8
 * Callers:
 *     PopCsStateChanged @ 0x1406C5874 (PopCsStateChanged.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406C6F18 (PopEvaluateAggressiveStandbyActions.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopIsUserInitiatedMonitorRequestReason()
{
  int v0; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)PopPdcLastCsEnterReason <= 0x1E )
  {
    v0 = 1073793026;
    if ( _bittest(&v0, PopPdcLastCsEnterReason) )
      return 1;
  }
  return result;
}
