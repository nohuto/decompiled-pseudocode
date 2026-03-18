/*
 * XREFs of PopPowerRequestIsExecutionRequiredCapable @ 0x14051D5E0
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140655158 (PopEnableExecutionRequiredPowerRequests.c)
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
