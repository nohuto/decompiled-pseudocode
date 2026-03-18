/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C00023E8
 * Callers:
 *     CiThreadCleanup @ 0x1C000A884 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
