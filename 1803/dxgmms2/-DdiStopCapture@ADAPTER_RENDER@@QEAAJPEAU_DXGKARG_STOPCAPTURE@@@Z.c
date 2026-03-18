/*
 * XREFs of ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C0022CD4
 * Callers:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0079D04 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiStopCapture(ADAPTER_RENDER *this, struct _DXGKARG_STOPCAPTURE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_STOPCAPTURE *))DxgCoreInterface[46])(this, a2);
}
