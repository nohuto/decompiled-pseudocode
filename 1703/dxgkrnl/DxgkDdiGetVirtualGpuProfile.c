/*
 * XREFs of DxgkDdiGetVirtualGpuProfile @ 0x1C0033C20
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C01CA6A0 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiGetVirtualGpuProfile(__int64 a1, struct _DXGKARG_GETVIRTUALGPUPROFILE *a2, char a3)
{
  return ADAPTER_RENDER::GetVirtualGpuProfile(*(ULONG **)(a1 + 2288), a2, a3);
}
