/*
 * XREFs of ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x1C0022C44
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetSchedulingLogBuffer(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *))DxgCoreInterface[20])(
           this,
           a2);
}
