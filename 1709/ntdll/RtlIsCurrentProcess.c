/*
 * XREFs of RtlIsCurrentProcess @ 0x18007BAC0
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A13B0 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
