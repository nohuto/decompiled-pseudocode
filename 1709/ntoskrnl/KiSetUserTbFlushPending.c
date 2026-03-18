/*
 * XREFs of KiSetUserTbFlushPending @ 0x1401822F0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     KiIpiProcessRequests @ 0x140102310 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14011B600 (KiFlushCurrentTbWorker.c)
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x14042EAF0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
