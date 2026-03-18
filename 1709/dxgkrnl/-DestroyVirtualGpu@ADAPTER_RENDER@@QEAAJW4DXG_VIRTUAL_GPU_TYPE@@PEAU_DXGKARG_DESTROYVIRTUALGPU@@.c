/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0188E04
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0189DB8 (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( a2 == 1 )
    v3 = *(_QWORD *)(a1 + 1232);
  else
    v3 = *(_QWORD *)(a1 + 1224);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, *a3);
  v4 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v4 + 24) = 999LL;
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
