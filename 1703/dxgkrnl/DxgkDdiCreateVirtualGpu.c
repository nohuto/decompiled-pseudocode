/*
 * XREFs of DxgkDdiCreateVirtualGpu @ 0x1C00339F0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiCreateVirtualGpu(__int64 a1, struct _DXGKARG_CREATEVIRTUALGPU *a2, unsigned __int8 a3)
{
  return ADAPTER_RENDER::CreateVirtualGpu(*(struct VIDMM_GLOBAL ***)(a1 + 2288), a2, a3);
}
