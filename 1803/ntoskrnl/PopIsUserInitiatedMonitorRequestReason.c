/*
 * XREFs of PopIsUserInitiatedMonitorRequestReason @ 0x140274838
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x1405E8FEC (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x14075EEA8 (PopEvaluateAggressiveStandbyActions.c)
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
