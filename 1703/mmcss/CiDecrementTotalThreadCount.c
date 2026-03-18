/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C0001D40
 * Callers:
 *     CiThreadCreate @ 0x1C000A7C0 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000B390 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
