/*
 * XREFs of ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC
 * Callers:
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C004C25C (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004F6AC (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C0050D6C (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0052A50 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C0063F64 (-GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C007BF24 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00A1C98 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00AB404 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00ADA3C (-BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00ADD58 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00AE914 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT_GROUP_STATE *__fastcall VIDMM_GLOBAL::GetSegmentGroupState(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PARTITION *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r8

  v4 = *((_QWORD *)this + 5021);
  v5 = a3;
  v6 = 1552LL * a2;
  if ( (*(_BYTE *)(v6 + 24 * (v5 + 21) + v4) & 1) != 0 )
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL)
                                                          + *((_QWORD *)a4 + 4)
                                                          + 24)
                                              + 328LL * a2);
  else
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(v4 + v6 + 328 * v5 + 536);
}
