/*
 * XREFs of PopIsUserInitiatedMonitorRequestReason @ 0x14023D398
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14059F4BC (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406F76AC (PopEvaluateAggressiveStandbyActions.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsUserInitiatedMonitorRequestReason(unsigned int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 <= 0x1E )
  {
    v1 = 1073793026;
    if ( _bittest(&v1, a1) )
      return 1;
  }
  return result;
}
