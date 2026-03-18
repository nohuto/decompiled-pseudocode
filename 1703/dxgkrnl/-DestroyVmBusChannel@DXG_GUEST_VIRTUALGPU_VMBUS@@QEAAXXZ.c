/*
 * XREFs of ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C002A150
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z @ 0x1C0026E74 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C0026FC0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C0029F50 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ @ 0x1C01A1E9C (-NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C002A128 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel(struct VMBCHANNEL__ **this)
{
  struct VMBCHANNEL__ *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DestroyVmBusChannel(v2);
    *this = 0LL;
    *((_BYTE *)this + 8) = 0;
  }
}
