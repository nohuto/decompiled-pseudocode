/*
 * XREFs of ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01735F4
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0172F98 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C0174284 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 * Callees:
 *     DpiKernelModeGpuVirtualizationCall @ 0x1C0039BBC (DpiKernelModeGpuVirtualizationCall.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0175408 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnsureVirtualGpuProcess(ADAPTER_RENDER *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( DpiKernelModeGpuVirtualizationCall(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL))
    || (unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    return 0LL;
  }
  v2 = WdLogNewEntry5_WdError(v1);
  *(_QWORD *)(v2 + 24) = 145LL;
  WdLogEvent5_WdError(v2);
  return 3221225485LL;
}
