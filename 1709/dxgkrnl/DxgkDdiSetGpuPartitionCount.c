/*
 * XREFs of DxgkDdiSetGpuPartitionCount @ 0x1C018A6BC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0189A14 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 */

__int64 __fastcall DxgkDdiSetGpuPartitionCount(_QWORD *a1, int a2, int *a3)
{
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-10h]

  v5 = ADAPTER_RENDER::SetGpuPartitionCount(a1[289], a2, (__int64)a3);
  if ( bTracingEnabled )
  {
    v7 = *a3;
    VgpuTrace(1, v5, a1, L"DxgkDdiSetGpuPartitionCount", (wchar_t *)L"%d", v7);
  }
  return v5;
}
