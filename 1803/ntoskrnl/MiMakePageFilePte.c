/*
 * XREFs of MiMakePageFilePte @ 0x1401A65FC
 * Callers:
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiFindPageFileWriteCluster @ 0x14009C6F0 (MiFindPageFileWriteCluster.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14025FE80 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14053B04C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
