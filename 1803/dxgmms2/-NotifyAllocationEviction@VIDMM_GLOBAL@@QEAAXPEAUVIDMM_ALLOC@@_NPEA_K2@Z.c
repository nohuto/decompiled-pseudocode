/*
 * XREFs of ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C006307C
 * Callers:
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0060D84 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C006C824 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0144 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0072F88 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00764F8 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationEviction(
        VIDMM_GLOBAL *this,
        VIDMM_DEVICE **a2,
        bool a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v9; // rbx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax

  v9 = *(_QWORD *)*a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, a3);
  if ( !*(_DWORD *)(v9 + 160) )
  {
    v10 = *(_DWORD **)(v9 + 504);
    if ( (*v10 & 0x40000000) == 0 && !v10[3] && (*(_DWORD *)(v9 + 76) & 0x20000000) == 0 )
    {
      VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v9 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v9, a4, a5);
      if ( bTracingEnabled )
      {
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p(v11, &EventMarkAllocation, v12, a2);
      }
      v13 = *(_QWORD *)(v9 + 16);
      ++*((_DWORD *)this + 1946);
      *((_QWORD *)this + 974) += v13;
    }
  }
}
