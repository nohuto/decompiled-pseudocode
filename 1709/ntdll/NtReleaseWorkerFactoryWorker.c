/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A2D50
 * Callers:
 *     TppPrepareDirectParams @ 0x18000E980 (TppPrepareDirectParams.c)
 *     TpPostTask @ 0x180046308 (TpPostTask.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 357;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
