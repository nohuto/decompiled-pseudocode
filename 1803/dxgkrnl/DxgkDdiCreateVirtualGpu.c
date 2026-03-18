/*
 * XREFs of DxgkDdiCreateVirtualGpu @ 0x1C01746A0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C002CEF0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0172F98 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 */

__int64 __fastcall DxgkDdiCreateVirtualGpu(ADAPTER_RENDER **a1, int a2, unsigned __int8 a3, int *a4)
{
  unsigned int VirtualGpu; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  VirtualGpu = ADAPTER_RENDER::CreateVirtualGpu(a1[308], a2, (__int64)a4, a3);
  if ( bTracingEnabled )
  {
    v8 = *a4;
    VgpuTrace(1, VirtualGpu, a1, L"DxgkDdiCreateVirtualGpu", (wchar_t *)L"%d", v8);
  }
  return VirtualGpu;
}
