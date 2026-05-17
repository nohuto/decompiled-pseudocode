/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800D4620
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
