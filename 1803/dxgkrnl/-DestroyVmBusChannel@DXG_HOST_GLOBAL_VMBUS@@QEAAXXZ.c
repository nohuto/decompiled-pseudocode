/*
 * XREFs of ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C017AE24
 * Callers:
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C01790A0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C017AB0C (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C017AC6C (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C017ADD0 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel(struct VMBCHANNEL__ **this)
{
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 1));
  if ( *this )
  {
    DestroyVmBusChannel(*this);
    *this = 0LL;
    *((_BYTE *)this + 40) = 0;
  }
  this[2] = 0LL;
  ExReleasePushLockExclusiveEx(this + 1, 0LL);
  KeLeaveCriticalRegion();
}
