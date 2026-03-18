/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00027FC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  ((void (__fastcall *)(ADAPTER_RENDER *, struct DXGTERMINATIONTRACKER *))DxgCoreInterface[44])(this, a2);
}
