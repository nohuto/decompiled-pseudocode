/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C00023DC
 * Callers:
 *     CiThreadCleanup @ 0x1C000A8DC (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AA4C (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
