/*
 * XREFs of PopSystemRequiredCallback @ 0x14051D9D0
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopSystemRequiredCallback(__int64 a1, __int64 a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 1);
  return 0LL;
}
