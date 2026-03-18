/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1400A0850
 * Callers:
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     IoBuildPoDeviceNotifyList @ 0x14042D858 (IoBuildPoDeviceNotifyList.c)
 *     CmpGetVolumeClusterSize @ 0x1404E4280 (CmpGetVolumeClusterSize.c)
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x1405580F0 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     PopFxRegisterDevice @ 0x1405CA0E4 (PopFxRegisterDevice.c)
 *     WmipGetFilePDO @ 0x1405E5190 (WmipGetFilePDO.c)
 *     VfIrpSendSynchronousIrp @ 0x1407B09A0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // si
  char *v3; // rcx
  _QWORD *v4; // rdx
  struct _DEVICE_OBJECT *i; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, *((_QWORD *)v3 + 1));
  }
  else
  {
    v4 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v3 + 1), (__int64)v3);
    if ( v4 )
      KxWaitForLockOwnerShip((__int64)v3, v4);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  ObpIncrPointerCount(&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
  __writecr8(CurrentIrql);
  return DeviceObject;
}
