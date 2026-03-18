/*
 * XREFs of IoGetAttachedDeviceReference @ 0x140091AB0
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x14040AEEC (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 *     CmpGetVolumeClusterSize @ 0x1404D8B8C (CmpGetVolumeClusterSize.c)
 *     IopFilterResourceRequirementsCall @ 0x14055BFFC (IopFilterResourceRequirementsCall.c)
 *     WmipGetFilePDO @ 0x140584258 (WmipGetFilePDO.c)
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 *     PopFxRegisterDevice @ 0x1405BE594 (PopFxRegisterDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x14076EB80 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // si
  char *v3; // rcx
  struct _DEVICE_OBJECT *i; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, *((_QWORD *)v3 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v3 + 1), (__int64)v3) )
  {
    KxWaitForLockOwnerShip(v3);
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
