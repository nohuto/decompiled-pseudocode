/*
 * XREFs of PopSystemRequiredCallback @ 0x1404E6D70
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8 (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopSystemRequiredCallback(__int64 a1, __int64 a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 1LL);
  return 0LL;
}
