/*
 * XREFs of ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C005B708
 * Callers:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0056110 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005928C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006DD5C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004B3B0 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D484 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationEviction(
        VIDMM_GLOBAL *this,
        VIDMM_DEVICE **a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax

  v9 = *(_QWORD *)*a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (__int64 **)a2, a3);
  if ( !*(_DWORD *)(v9 + 160)
    && (**(_DWORD **)(v9 + 520) & 0x40000000) == 0
    && !*(_DWORD *)(v9 + 164)
    && (*(_DWORD *)(v9 + 76) & 0x20000000) == 0 )
  {
    VIDMM_SEGMENT::MarkResourcesForEviction(
      *(VIDMM_LINEAR_POOL ***)(v9 + 136),
      (struct _VIDMM_GLOBAL_ALLOC *)v9,
      a4,
      a5);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_p(v10, &EventMarkAllocation, v11, a2);
    }
    v12 = *(_QWORD *)(v9 + 16);
    ++*((_DWORD *)this + 1802);
    *((_QWORD *)this + 902) += v12;
  }
}
