/*
 * XREFs of PopDisablePowerExecutionRequest @ 0x1404C7214
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 *     PopExecutionRequiredPowerRequest @ 0x1404C75C8 (PopExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405D48E4 (PopEnableExecutionRequiredPowerRequests.c)
 *     PopEnableSystemToExecutionRequiredPowerRequests @ 0x1406C590C (PopEnableSystemToExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopDisablePowerExecutionRequest(__int64 a1, char a2, char a3)
{
  __int64 v4; // rcx

  if ( (!*(_DWORD *)(a1 + 44) || !a2) && (!*(_DWORD *)(a1 + 108) || !a3) )
  {
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
    {
      PsReleaseProcessWakeCounter(v4, a1);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  return 0LL;
}
