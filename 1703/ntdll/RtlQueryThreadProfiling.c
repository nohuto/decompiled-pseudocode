/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800D4620
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlQueryThreadProfiling(HANDLE ThreadHandle, PBOOLEAN Enabled)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadCounterProfiling, Enabled, 1u, 0LL);
}
