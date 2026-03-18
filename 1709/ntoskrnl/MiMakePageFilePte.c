/*
 * XREFs of MiMakePageFilePte @ 0x14017C7A8
 * Callers:
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140226D60 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140451804 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
