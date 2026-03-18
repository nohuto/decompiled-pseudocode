/*
 * XREFs of PsGetCurrentProcess @ 0x1400574C0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiSmallVaStillMapsFrame @ 0x1400C9FCC (MiSmallVaStillMapsFrame.c)
 *     KiIpiProcessRequests @ 0x140102310 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14011B600 (KiFlushCurrentTbWorker.c)
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x14042EAF0 (KeWriteProtectPAT.c)
 *     MmMarkHiberPhase @ 0x140430420 (MmMarkHiberPhase.c)
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
