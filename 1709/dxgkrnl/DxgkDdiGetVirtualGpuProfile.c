/*
 * XREFs of DxgkDdiGetVirtualGpuProfile @ 0x1C018A10C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C01E4A50 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C0189434 (-GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUPRO.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuProfile(ADAPTER_RENDER **a1, __int64 a2, unsigned int *a3)
{
  unsigned int VirtualGpuProfile; // ebx
  unsigned int v7; // [rsp+28h] [rbp-10h]

  VirtualGpuProfile = ADAPTER_RENDER::GetVirtualGpuProfile(a1[289], a2, a3);
  if ( bTracingEnabled )
  {
    v7 = *a3;
    VgpuTrace(1, VirtualGpuProfile, a1, L"DxgkDdiGetVirtualGpuProfile", (wchar_t *)L"%d", v7);
  }
  return VirtualGpuProfile;
}
