/*
 * XREFs of ZwQueryPerformanceCounter @ 0x18009B0E0
 * Callers:
 *     RtlQueryPerformanceCounter @ 0x180007F20 (RtlQueryPerformanceCounter.c)
 *     sub_18002BB2C @ 0x18002BB2C (sub_18002BB2C.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 *     sub_1800F388C @ 0x1800F388C (sub_1800F388C.c)
 *     sub_1800F39A0 @ 0x1800F39A0 (sub_1800F39A0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  NTSTATUS result; // eax

  result = 49;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
