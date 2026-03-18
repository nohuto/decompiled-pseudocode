/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x140655158
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x1405E8FEC (PopHandleExecutionRequiredEnablementUpdate.c)
 * Callees:
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14051D5E0 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x14051D664 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 */

void __fastcall PopEnableExecutionRequiredPowerRequests(char a1)
{
  __int64 *i; // rbx
  __int64 v3; // rcx

  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
  {
    if ( PopPowerRequestIsExecutionRequiredCapable((__int64)i)
      && PopPowerRequestIsExecutionRequiredStatusHeld((__int64)i) )
    {
      PopUpdatePowerRequestProcessWakeCounter(v3, a1);
    }
  }
}
