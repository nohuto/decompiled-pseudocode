/*
 * XREFs of KiSetUserTbFlushPending @ 0x1401ABF40
 * Callers:
 *     KiFlushCurrentTbWorker @ 0x140034D80 (KiFlushCurrentTbWorker.c)
 *     KiIpiProcessRequests @ 0x1400A3A30 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbOnly @ 0x1400ADBA4 (KiFlushCurrentTbOnly.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140484EB0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
