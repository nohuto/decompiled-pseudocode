/*
 * XREFs of DxgkDdiGetVirtualGpuInfo @ 0x1C0033C0C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiGetVirtualGpuInfo(
        __int64 a1,
        struct _DXGKARG_GETVIRTUALGPUINFO *a2,
        struct _LUID *a3,
        struct _GUID *a4)
{
  return ADAPTER_RENDER::GetVirtualGpuInfo(*(ADAPTER_RENDER **)(a1 + 2288), a2, a3, a4);
}
