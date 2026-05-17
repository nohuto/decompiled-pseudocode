/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DC360
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
