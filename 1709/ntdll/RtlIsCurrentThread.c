/*
 * XREFs of RtlIsCurrentThread @ 0x180090640
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A13B0 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHandle) >= 0;
}
