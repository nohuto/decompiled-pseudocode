/*
 * XREFs of ZwReleaseWorkerFactoryWorker @ 0x18009D790
 * Callers:
 *     sub_180026138 @ 0x180026138 (sub_180026138.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 359;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
