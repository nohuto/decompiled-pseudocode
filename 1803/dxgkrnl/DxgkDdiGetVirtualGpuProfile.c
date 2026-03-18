/*
 * XREFs of DxgkDdiGetVirtualGpuProfile @ 0x1C0174ACC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C0202D50 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C002CEF0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C0173B7C (-GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUPRO.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuProfile(ADAPTER_RENDER **a1, int a2, int *a3)
{
  unsigned int VirtualGpuProfile; // ebx
  int v7; // [rsp+28h] [rbp-10h]

  VirtualGpuProfile = ADAPTER_RENDER::GetVirtualGpuProfile(a1[308], a2, (__int64)a3);
  if ( bTracingEnabled )
  {
    v7 = *a3;
    VgpuTrace(1, VirtualGpuProfile, a1, L"DxgkDdiGetVirtualGpuProfile", (wchar_t *)L"%d", v7);
  }
  return VirtualGpuProfile;
}
