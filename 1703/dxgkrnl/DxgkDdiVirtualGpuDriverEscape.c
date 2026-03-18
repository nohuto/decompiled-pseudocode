/*
 * XREFs of DxgkDdiVirtualGpuDriverEscape @ 0x1C0033F3C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiVirtualGpuDriverEscape(__int64 a1, struct _LUID *a2, struct _DXGK_VIRTUALGPUDRIVERESCAPE *a3)
{
  return ADAPTER_RENDER::VirtualGpuDriverEscape(*(ADAPTER_RENDER **)(a1 + 2288), a2, a3);
}
