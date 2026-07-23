/*
 * XREFs of RtlIsCurrentProcess @ 0x18007C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCompareObjects @ 0x18009BDD0 (ZwCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || ZwCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
