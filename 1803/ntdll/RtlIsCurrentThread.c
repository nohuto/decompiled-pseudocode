/*
 * XREFs of RtlIsCurrentThread @ 0x1800860B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCompareObjects @ 0x18009BDD0 (ZwCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2LL || ZwCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHandle) >= 0;
}
