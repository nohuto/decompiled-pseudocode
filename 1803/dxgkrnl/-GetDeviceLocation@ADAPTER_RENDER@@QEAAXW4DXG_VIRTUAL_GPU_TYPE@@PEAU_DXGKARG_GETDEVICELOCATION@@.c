/*
 * XREFs of ?GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C0173700
 * Callers:
 *     DxgkDdiGetDeviceLocation @ 0x1C0174780 (DxgkDdiGetDeviceLocation.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000BC00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C002CEB4 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::GetDeviceLocation(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  DXGVIRTUALGPUMANAGER *v7; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1504);
  else
    v6 = *(_QWORD *)(a1 + 1496);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v10, (struct DXGPUSHLOCK *const)(v6 + 40));
  if ( a2 == 1 )
    v7 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  else
    v7 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  if ( v7 && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v7, *a3)) != 0LL )
  {
    (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 88LL))(
      VirtualGpuByIndex,
      a3);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = *a3;
    WdLogEvent5_WdError(v9);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
