/*
 * XREFs of RtlIsCurrentThread @ 0x180090640
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A13B0 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects(-2LL, a1) >= 0;
}
