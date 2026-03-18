/*
 * XREFs of ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0038458
 * Callers:
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00F6E18 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
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
