/*
 * XREFs of ?DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FB94
 * Callers:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXE@Z @ 0x1C018DF20 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXE@Z.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C018E4B0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C018F978 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C018FAD4 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::DestroyVmBusChannel(DXG_HOST_VIRTUALGPU_VMBUS *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 16, 0LL);
  *((_QWORD *)this + 3) = KeGetCurrentThread();
  if ( *(_QWORD *)this )
  {
    DestroyVmBusChannel(*(struct VMBCHANNEL__ **)this);
    *(_QWORD *)this = 0LL;
    *((_BYTE *)this + 8) = 0;
  }
  *((_QWORD *)this + 3) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 16, 0LL);
  KeLeaveCriticalRegion();
}
