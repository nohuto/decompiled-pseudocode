/*
 * XREFs of ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C017B38C
 * Callers:
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B748C (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::PauseChannel(struct _KTHREAD **this)
{
  char v2; // di

  if ( this[2] == KeGetCurrentThread() )
  {
    v2 = 0;
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 1));
    v2 = 1;
  }
  if ( *this )
    VmbChannelPause();
  if ( v2 )
  {
    this[2] = 0LL;
    ExReleasePushLockExclusiveEx(this + 1, 0LL);
    KeLeaveCriticalRegion();
  }
}
