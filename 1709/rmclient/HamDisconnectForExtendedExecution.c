/*
 * XREFs of HamDisconnectForExtendedExecution @ 0x180001800
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x18000169C (HampConnectionDestroy.c)
 */

__int64 __fastcall HamDisconnectForExtendedExecution(__int64 a1)
{
  HampConnectionDestroy(a1);
  return 0LL;
}
