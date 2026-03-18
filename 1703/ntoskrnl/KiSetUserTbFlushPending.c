/*
 * XREFs of KiSetUserTbFlushPending @ 0x140182870
 * Callers:
 *     KiIpiProcessRequests @ 0x140006360 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140025F10 (KiFlushCurrentTbWorker.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140419260 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
