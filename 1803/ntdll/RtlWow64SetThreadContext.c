/*
 * XREFs of RtlWow64SetThreadContext @ 0x1800D66D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlWow64SetThreadContext()
{
  return ZwSetInformationThread();
}
