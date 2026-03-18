/*
 * XREFs of MiMakePageFilePte @ 0x14017CF3C
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiFindPageFileWriteCluster @ 0x14007E698 (MiFindPageFileWriteCluster.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14021A690 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14041F2F8 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
