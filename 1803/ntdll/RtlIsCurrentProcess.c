/*
 * XREFs of RtlIsCurrentProcess @ 0x18007C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCompareObjects @ 0x18009BDD0 (ZwCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)ZwCompareObjects(-1LL, a1) >= 0;
}
