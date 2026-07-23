/*
 * XREFs of ZwReleaseWorkerFactoryWorker @ 0x1800A7F30
 * Callers:
 *     sub_180015C50 @ 0x180015C50 (sub_180015C50.c)
 *     sub_180017034 @ 0x180017034 (sub_180017034.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 354;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
