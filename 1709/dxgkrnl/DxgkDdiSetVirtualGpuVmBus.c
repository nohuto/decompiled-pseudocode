/*
 * XREFs of DxgkDdiSetVirtualGpuVmBus @ 0x1C018A7D8
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C002E230 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C018900C (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiSetVirtualGpuVmBus(_QWORD *a1, int a2, struct _LUID *a3, int *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v10; // [rsp+28h] [rbp-10h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[289], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v8 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, int *))(*(_QWORD *)VirtualGpuByLuid + 24LL))(
           VirtualGpuByLuid,
           a4);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v7 + 24) = 1086LL;
    WdLogEvent5_WdError(v7);
    v8 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    v10 = *a4;
    VgpuTrace(1, v8, a1, L"DxgkDdiSetVirtualGpuVmBus", (wchar_t *)L"%d", v10);
  }
  return v8;
}
