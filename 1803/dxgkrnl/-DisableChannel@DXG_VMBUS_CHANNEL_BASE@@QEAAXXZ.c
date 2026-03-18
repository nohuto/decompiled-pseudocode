/*
 * XREFs of ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C002D5C4
 * Callers:
 *     ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C017CBF0 (-VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C017CC60 (-VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::DisableChannel(DXG_VMBUS_CHANNEL_BASE *this)
{
  DXGPUSHLOCK::AcquireExclusive((DXG_VMBUS_CHANNEL_BASE *)((char *)this + 8));
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
}
