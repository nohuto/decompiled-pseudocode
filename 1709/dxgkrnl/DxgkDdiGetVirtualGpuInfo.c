/*
 * XREFs of DxgkDdiGetVirtualGpuInfo @ 0x1C018A094
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C0189374 (-GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuInfo(_QWORD *a1, __int64 a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  unsigned int VirtualGpuInfo; // ebx
  unsigned int v9; // [rsp+28h] [rbp-10h]

  VirtualGpuInfo = ADAPTER_RENDER::GetVirtualGpuInfo(a1[289], a2, a3, a4, a5);
  if ( bTracingEnabled )
  {
    v9 = *a3;
    VgpuTrace(1, VirtualGpuInfo, a1, L"DxgkDdiGetVirtualGpuInfo", (wchar_t *)L"%d", v9);
  }
  return VirtualGpuInfo;
}
