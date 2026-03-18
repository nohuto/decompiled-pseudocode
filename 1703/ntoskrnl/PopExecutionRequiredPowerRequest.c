/*
 * XREFs of PopExecutionRequiredPowerRequest @ 0x1404C75C8
 * Callers:
 *     PopSystemRequiredCallback @ 0x1404C6100 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x1404C7570 (PopExecutionRequiredCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14004C420 (RtlLookupElementGenericTableAvl.c)
 *     PopEnablePowerExecutionRequest @ 0x1404C8074 (PopEnablePowerExecutionRequest.c)
 */

__int64 *__fastcall PopExecutionRequiredPowerRequest(char a1, int a2)
{
  __int64 *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v7 = a2;
  result = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( result )
  {
    v5 = *result;
    if ( a1 )
    {
      LOBYTE(v4) = 1;
      return (__int64 *)PopEnablePowerExecutionRequest(v5, v4);
    }
    else
    {
      return (__int64 *)PopDisablePowerExecutionRequest(v5, 1, 1);
    }
  }
  return result;
}
