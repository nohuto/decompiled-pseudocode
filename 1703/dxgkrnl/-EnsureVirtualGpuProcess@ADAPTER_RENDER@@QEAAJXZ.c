/*
 * XREFs of ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@E@Z @ 0x1C002A29C (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@E@Z.c)
 *     ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C002A3A8 (-GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z.c)
 *     ?GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@E@Z @ 0x1C002A498 (-GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@E@Z.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C002AC08 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C0033C34 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C0033CBC (DxgkDdiQueryMitigatedRanges.c)
 * Callees:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnsureVirtualGpuProcess(ADAPTER_RENDER *this)
{
  struct DXGPROCESS **v1; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL) + 64LL) + 5057LL) )
  {
    v1 = (struct DXGPROCESS **)((char *)this + 1152);
    if ( !*((_QWORD *)this + 144) )
    {
      Current = DXGPROCESS::GetCurrent();
      *v1 = Current;
      if ( !Current )
        DXGPROCESS::CreateDxgProcess(v1, 0, 0LL);
    }
    v3 = *v1;
    if ( v3 != DXGPROCESS::GetCurrent() )
    {
      v6 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v6 + 24) = 1138LL;
      WdLogEvent5_WdError(v6);
      return 3221225485LL;
    }
    *((_BYTE *)v3 + 275) |= 1u;
  }
  return 0LL;
}
