/*
 * XREFs of ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0028464
 * Callers:
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetSchedulerCrossAdapterData(KSPIN_LOCK *this, struct _KEVENT *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 98, &LockHandle);
  this[99] = (KSPIN_LOCK)a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *((_BYTE *)this + 537) = 0;
}
