/*
 * XREFs of PsGetCurrentProcess @ 0x1400D8F50
 * Callers:
 *     KiIpiProcessRequests @ 0x140006360 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140025F10 (KiFlushCurrentTbWorker.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiSmallVaStillMapsFrame @ 0x14010DD64 (MiSmallVaStillMapsFrame.c)
 *     MmMarkHiberPhase @ 0x14040D3A0 (MmMarkHiberPhase.c)
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140419260 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
