/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x1405D48E4
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x1405D4850 (PopExecutionRequiredSettingCallback.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x1406C5770 (PopCheckExecutionRequiredPowerRequests.c)
 *     PopCsStateChanged @ 0x1406C5874 (PopCsStateChanged.c)
 * Callees:
 *     PopDisablePowerExecutionRequest @ 0x1404C7214 (PopDisablePowerExecutionRequest.c)
 *     PopEnablePowerExecutionRequest @ 0x1404C8074 (PopEnablePowerExecutionRequest.c)
 */

__int64 __fastcall PopEnableExecutionRequiredPowerRequests(char a1)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 44) || *(_DWORD *)(i + 108) )
    {
      if ( a1 )
        result = PopEnablePowerExecutionRequest(i, 1);
      else
        result = PopDisablePowerExecutionRequest(i, 0, 0);
    }
  }
  return result;
}
