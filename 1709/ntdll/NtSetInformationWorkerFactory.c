/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A3350
 * Callers:
 *     TpSetPoolMaxThreads @ 0x18000A220 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18000A2A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x18000AC04 (TpAllocPoolInternal.c)
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     TpCallbackMayRunLong @ 0x1800133F0 (TpCallbackMayRunLong.c)
 *     TpSetPoolStackInformation @ 0x180014490 (TpSetPoolStackInformation.c)
 *     TpCallbackIndependent @ 0x18006CA50 (TpCallbackIndependent.c)
 *     TpTrimPools @ 0x180083540 (TpTrimPools.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083A00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180086AC0 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180088500 (TpSetPoolThreadBasePriority.c)
 *     TppAdjustRunningThreadGoal @ 0x18010AA10 (TppAdjustRunningThreadGoal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 405;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
