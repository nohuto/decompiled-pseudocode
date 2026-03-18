/*
 * XREFs of PopExecutionRequiredCallback @ 0x140583700
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(__int64 a1, __int64 a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 3);
  return 0LL;
}
