/*
 * XREFs of DxgkDdiDestroyVirtualGpu @ 0x1C0033A04
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiDestroyVirtualGpu(__int64 a1, struct _DXGKARG_DESTROYVIRTUALGPU *a2, __int64 a3, __int64 a4)
{
  return ADAPTER_RENDER::DestroyVirtualGpu(*(ADAPTER_RENDER **)(a1 + 2288), a2, a3, a4);
}
