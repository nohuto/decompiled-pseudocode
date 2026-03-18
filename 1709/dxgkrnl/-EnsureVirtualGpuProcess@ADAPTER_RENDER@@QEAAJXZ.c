/*
 * XREFs of ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0188FC0
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C0189CE0 (DxgkDdiCreateVirtualGpu.c)
 *     ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C018E0A0 (-InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@.c)
 * Callees:
 *     DpiKernelModeGpuVirtualizationCall @ 0x1C002D844 (DpiKernelModeGpuVirtualizationCall.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C018A9F0 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
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
  *(_QWORD *)(v2 + 24) = 88LL;
  WdLogEvent5_WdError(v2);
  return 3221225485LL;
}
