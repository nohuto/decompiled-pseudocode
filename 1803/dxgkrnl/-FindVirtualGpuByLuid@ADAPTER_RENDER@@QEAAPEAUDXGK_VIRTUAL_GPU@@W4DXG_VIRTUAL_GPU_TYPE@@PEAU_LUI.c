/*
 * XREFs of ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C0173640
 * Callers:
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C0174D38 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C01751F0 (DxgkDdiSetVirtualGpuVmBus.c)
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C017367C (-FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall ADAPTER_RENDER::FindVirtualGpuByLuid(__int64 a1, int a2, struct _LUID *a3)
{
  DXGVIRTUALGPUMANAGER *v3; // rcx

  if ( a2 )
  {
    if ( a2 != 1 )
      return 0LL;
    v3 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  }
  else
  {
    v3 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  }
  if ( v3 )
    return DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(v3, a3);
  return 0LL;
}
