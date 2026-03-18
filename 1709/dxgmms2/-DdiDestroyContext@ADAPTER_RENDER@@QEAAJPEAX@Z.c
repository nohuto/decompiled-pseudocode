/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0020620
 * Callers:
 *     VidSchTerminateContext @ 0x1C00706B0 (VidSchTerminateContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[19])(this, a2);
}
