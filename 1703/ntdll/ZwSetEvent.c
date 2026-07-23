/*
 * XREFs of ZwSetEvent @ 0x1800A54C0
 * Callers:
 *     RtlpUnWaitCriticalSection @ 0x18000A930 (RtlpUnWaitCriticalSection.c)
 *     sub_180010228 @ 0x180010228 (sub_180010228.c)
 *     sub_18001052C @ 0x18001052C (sub_18001052C.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_180050DC4 @ 0x180050DC4 (sub_180050DC4.c)
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     sub_180060180 @ 0x180060180 (sub_180060180.c)
 *     sub_180086CA4 @ 0x180086CA4 (sub_180086CA4.c)
 *     sub_180089910 @ 0x180089910 (sub_180089910.c)
 *     sub_1800A4BC0 @ 0x1800A4BC0 (sub_1800A4BC0.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     sub_1800F68A4 @ 0x1800F68A4 (sub_1800F68A4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
