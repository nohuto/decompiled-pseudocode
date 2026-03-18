/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1407864B0
 * Callers:
 *     RtlAssert @ 0x140288F50 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
