/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1406EAE10
 * Callers:
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
