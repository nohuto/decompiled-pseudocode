/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800D6580
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
