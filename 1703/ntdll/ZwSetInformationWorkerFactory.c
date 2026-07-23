/*
 * XREFs of ZwSetInformationWorkerFactory @ 0x1800A8530
 * Callers:
 *     TpSetPoolMaxThreads @ 0x18000FE40 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18000FEC0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     TpCallbackIndependent @ 0x180067460 (TpCallbackIndependent.c)
 *     TpTrimPools @ 0x180070D30 (TpTrimPools.c)
 *     TpCallbackMayRunLong @ 0x180078F20 (TpCallbackMayRunLong.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180084DB0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolStackInformation @ 0x1800857C0 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x1800878A0 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180089630 (TpSetPoolThreadBasePriority.c)
 *     sub_180105430 @ 0x180105430 (sub_180105430.c)
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

  result = 402;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
