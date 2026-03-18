/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C01790A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C002D1C8 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C002D298 (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C017AE24 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct DXGPROCESSVMWP **a2,
        char a3)
{
  DXGPROCESS *v6; // rcx
  __int64 result; // rax

  if ( !*((_BYTE *)this + 126) )
  {
    if ( *((_QWORD *)this + 26) && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 27)) && a2 )
      *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 26);
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 128));
  }
  if ( a3 )
  {
    v6 = (DXGPROCESS *)*((_QWORD *)this + 26);
    if ( v6 )
    {
      DXGPROCESS::ReleaseReferenceSafe(v6);
      *((_QWORD *)this + 26) = 0LL;
      *((_QWORD *)this + 27) = 0LL;
    }
  }
  result = 0LL;
  *((_BYTE *)this + 126) = 1;
  return result;
}
