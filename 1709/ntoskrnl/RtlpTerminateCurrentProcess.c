/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140722D10
 * Callers:
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
