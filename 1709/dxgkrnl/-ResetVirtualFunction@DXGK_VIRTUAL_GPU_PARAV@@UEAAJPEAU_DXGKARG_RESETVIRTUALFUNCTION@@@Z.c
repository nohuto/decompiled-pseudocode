/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C018E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C0024B7C (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGPROCESS@@QEAAEPEAU_LIST_ENTRY@@@Z @ 0x1C0024BC0 (-RemoveVirtualGpu@DXGPROCESS@@QEAAEPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FB94 (-DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_RESETVIRTUALFUNCTION *a2)
{
  struct DXGPROCESS *v3; // rbx

  v3 = (struct DXGPROCESS *)_InterlockedExchange64((volatile __int64 *)this + 24, 0LL);
  if ( v3 )
  {
    if ( DXGPROCESS::RemoveVirtualGpu(v3, (struct _LIST_ENTRY *)((char *)this + 168)) )
      DXGPROCESS::DestroyDxgProcess(v3);
    DXGPROCESS::ReleaseReferenceSafe((__int64 *)v3);
  }
  DXG_HOST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 120));
  return 0LL;
}
