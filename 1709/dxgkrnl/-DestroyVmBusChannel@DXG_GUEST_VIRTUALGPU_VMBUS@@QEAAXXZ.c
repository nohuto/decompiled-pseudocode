/*
 * XREFs of ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FAFC
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0170FCC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C018FAD4 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
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
