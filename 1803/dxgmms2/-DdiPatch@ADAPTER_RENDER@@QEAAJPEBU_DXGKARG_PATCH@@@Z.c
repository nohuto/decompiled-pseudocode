/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0022BB4
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0074C50 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_PATCH *))DxgCoreInterface[30])(this, a2);
}
