/*
 * XREFs of ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B748C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C017B38C (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::PauseVmBusChannels(struct _KTHREAD **this)
{
  char *v1; // rdi
  struct _KTHREAD *v3; // rsi
  struct _KTHREAD *i; // rbx

  v1 = (char *)(this + 8);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 8));
  DXG_VMBUS_CHANNEL_BASE::PauseChannel(this + 11);
  v3 = (struct _KTHREAD *)(this + 5);
  for ( i = this[5]; i != v3; i = *(struct _KTHREAD **)i )
    DXG_VMBUS_CHANNEL_BASE::PauseChannel((struct _KTHREAD **)i - 8);
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
