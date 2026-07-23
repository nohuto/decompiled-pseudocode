/*
 * XREFs of ZwSetInformationWorkerFactory @ 0x18009DD90
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     TpCallbackMayRunLong @ 0x180048500 (TpCallbackMayRunLong.c)
 *     TpSetPoolStackInformation @ 0x180048A20 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x180056420 (TpSetPoolMinThreads.c)
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 *     TpSetPoolMaxThreads @ 0x180059670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800596F0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180059740 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpCallbackIndependent @ 0x1800675F0 (TpCallbackIndependent.c)
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     TpSetPoolThreadBasePriority @ 0x1800836C0 (TpSetPoolThreadBasePriority.c)
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 407;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
