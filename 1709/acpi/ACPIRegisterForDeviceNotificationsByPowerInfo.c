/*
 * XREFs of ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C0025664
 * Callers:
 *     ACPIRegisterForDeviceNotifications @ 0x1C0025620 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C0055994 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByPowerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v7; // ebp
  _QWORD *PoolWithTag; // rax
  void *v9; // rbx
  KIRQL v10; // al

  v4 = a1 - 328;
  v7 = -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4D706341u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[2] = DispatchNotificationWorker;
    PoolWithTag[3] = v4;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)(v4 + 880) || (*(_QWORD *)(v4 + 880) = v9, v9 = 0LL, *(_QWORD *)(v4 + 880)) )
    {
      *(_QWORD *)(a1 + 16) = a2;
      v7 = 0;
      *(_QWORD *)(a1 + 24) = a3;
    }
  }
  KeReleaseSpinLock(&NotifyHandlerLock, v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x4D706341u);
  return v7;
}
