/*
 * XREFs of ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C018FAD4
 * Callers:
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FAFC (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C018FB28 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FB94 (-DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyVmBusChannel(struct VMBCHANNEL__ *a1)
{
  if ( a1 )
  {
    VmbChannelDisable();
    VmbChannelCleanup(a1);
  }
}
