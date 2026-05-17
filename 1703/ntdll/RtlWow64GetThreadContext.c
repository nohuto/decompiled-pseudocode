/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DCD70
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
