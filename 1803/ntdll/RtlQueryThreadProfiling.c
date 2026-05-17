/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800C8CC0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
