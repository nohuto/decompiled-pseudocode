/*
 * XREFs of RtlIsCurrentThread @ 0x1800860B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCompareObjects @ 0x18009BDD0 (ZwCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)ZwCompareObjects(-2LL, a1) >= 0;
}
