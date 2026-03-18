/*
 * XREFs of ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C017ADF8
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C017A908 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C017ADD0 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel(struct VMBCHANNEL__ **this)
{
  struct VMBCHANNEL__ *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DestroyVmBusChannel(v2);
    *this = 0LL;
    *((_BYTE *)this + 40) = 0;
  }
}
