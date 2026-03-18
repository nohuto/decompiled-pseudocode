/*
 * XREFs of DxgkDdiGetGpuPartitionInfo @ 0x1C017484C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C002CEF0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C01737B0 (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONIN.c)
 */

__int64 __fastcall DxgkDdiGetGpuPartitionInfo(
        ADAPTER_RENDER **a1,
        int a2,
        struct _DXGKARG_GETGPUPARTITIONINFO *a3,
        __int64 a4)
{
  unsigned int GpuPartitionInfo; // ebx
  ULONG NumGpuPartitionOptions; // [rsp+28h] [rbp-10h]

  GpuPartitionInfo = ADAPTER_RENDER::GetGpuPartitionInfo(a1[308], a2, a3, a4);
  if ( bTracingEnabled )
  {
    NumGpuPartitionOptions = a3->NumGpuPartitionOptions;
    VgpuTrace(1, GpuPartitionInfo, a1, L"DxgkDdiGetGpuPartitionInfo", (wchar_t *)L"%d", NumGpuPartitionOptions);
  }
  return GpuPartitionInfo;
}
