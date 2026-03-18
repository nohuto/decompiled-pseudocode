/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1400DF830
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140475C10 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140495B50 (CmpVolumeManagerGetContextForFile.c)
 *     CmpGetVolumeClusterSize @ 0x140499488 (CmpGetVolumeClusterSize.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x1405DBF84 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140613250 (WmipGetFilePDO.c)
 *     VfIrpSendSynchronousIrp @ 0x14081DB4C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // bp
  char *v3; // rcx
  struct _DEVICE_OBJECT *i; // rax
  signed __int64 BugCheckParameter4; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  KxAcquireQueuedSpinLock(v3, *((_QWORD *)v3 + 1));
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)DeviceObject, 0x10uLL, BugCheckParameter4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
  __writecr8(CurrentIrql);
  return DeviceObject;
}
