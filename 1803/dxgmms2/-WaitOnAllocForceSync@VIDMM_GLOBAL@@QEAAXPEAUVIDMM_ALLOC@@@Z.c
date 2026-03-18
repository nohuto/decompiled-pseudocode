/*
 * XREFs of ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060FF0
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C00688C8 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0068C50 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 * Callees:
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::WaitOnAllocForceSync(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
  if ( v2 )
    VidSchFlushDevice(*(_QWORD *)(v2 + 616));
}
