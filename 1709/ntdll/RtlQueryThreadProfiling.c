/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CF380
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
