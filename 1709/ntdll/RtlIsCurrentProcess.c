/*
 * XREFs of RtlIsCurrentProcess @ 0x18007BAC0
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A13B0 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)NtCompareObjects(-1LL, a1) >= 0;
}
