/*
 * XREFs of PopPowerRequestIsExecutionRequiredCapable @ 0x1404E7E4C
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405F25F8 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopPowerRequestIsExecutionRequiredCapable(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 96) )
    return **(_DWORD **)(a1 + 80) != 0;
  return v1;
}
