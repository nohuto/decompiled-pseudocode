/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXE@Z @ 0x1C018DF20
 * Callers:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ @ 0x1C0024A80 (--1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveVirtualGpu@DXGPROCESS@@QEAAEPEAU_LIST_ENTRY@@@Z @ 0x1C0024BC0 (-RemoveVirtualGpu@DXGPROCESS@@QEAAEPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FB94 (-DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_PARAV *this)
{
  DXGPROCESS *v2; // rcx

  DXG_HOST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 120));
  v2 = (DXGPROCESS *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    DXGPROCESS::RemoveVirtualGpu(v2, (struct _LIST_ENTRY *)((char *)this + 168));
    *((_QWORD *)this + 24) = 0LL;
  }
}
