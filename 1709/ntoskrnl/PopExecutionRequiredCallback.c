/*
 * XREFs of PopExecutionRequiredCallback @ 0x14059E830
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8 (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(__int64 a1, int a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 3);
  return 0LL;
}
