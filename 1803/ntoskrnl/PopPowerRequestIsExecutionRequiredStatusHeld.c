/*
 * XREFs of PopPowerRequestIsExecutionRequiredStatusHeld @ 0x14051D664
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140655158 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopPowerRequestIsExecutionRequiredStatusHeld(__int64 a1)
{
  bool result; // al

  result = *(_DWORD *)(a1 + 44) != 0;
  if ( PopPowerRequestConvertSystemToExecution )
  {
    if ( *(_DWORD *)(a1 + 36) )
      return 1;
  }
  return result;
}
