/*
 * XREFs of PopEnableSystemToExecutionRequiredPowerRequests @ 0x1406C590C
 * Callers:
 *     PopPowerRequestPowerSourceSettingCallback @ 0x1405D60C0 (PopPowerRequestPowerSourceSettingCallback.c)
 * Callees:
 *     PopDisablePowerExecutionRequest @ 0x1404C7214 (PopDisablePowerExecutionRequest.c)
 *     PopEnablePowerExecutionRequest @ 0x1404C8074 (PopEnablePowerExecutionRequest.c)
 */

__int64 __fastcall PopEnableSystemToExecutionRequiredPowerRequests(char a1)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 108) )
    {
      if ( a1 )
        result = PopEnablePowerExecutionRequest(i, 0);
      else
        result = PopDisablePowerExecutionRequest(i, 1, 0);
    }
  }
  return result;
}
