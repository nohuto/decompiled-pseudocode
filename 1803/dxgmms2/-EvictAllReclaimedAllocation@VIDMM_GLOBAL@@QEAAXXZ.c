/*
 * XREFs of ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009DF90
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00550FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B3410 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00B4F2C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B527C (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B5924 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0079CC4 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllReclaimedAllocation(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  VIDMM_GLOBAL *v4; // rcx
  __int64 v5; // r8

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  VIDMM_GLOBAL::EvictAllAllocationInList(this, (struct _LIST_ENTRY *)((char *)this + 3736), a3);
  VIDMM_GLOBAL::EvictAllAllocationInList(v4, (struct _LIST_ENTRY *)((char *)this + 3752), v5);
}
