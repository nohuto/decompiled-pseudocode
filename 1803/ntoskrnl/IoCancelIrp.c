/*
 * XREFs of IoCancelIrp @ 0x1400B6B20
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x1400B677C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1400B6A10 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x1400D1410 (PopThermalZoneDpc.c)
 *     FsRtlpWaitOnIrp @ 0x14015EB9C (FsRtlpWaitOnIrp.c)
 *     PopThermalPollingPowerSettingCallback @ 0x140186D00 (PopThermalPollingPowerSettingCallback.c)
 *     PopThermalZoneTimerCallback @ 0x140278FE0 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x1404B979C (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x140555A10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140555EA0 (FsRtlQueryKernelEaFile.c)
 *     NtCancelIoFile @ 0x14055C330 (NtCancelIoFile.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x140715A40 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x140739FF4 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x140763154 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140763378 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1407640B0 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x14076B300 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x140811D70 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x14081CA64 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  PDEVICE_OBJECT DeviceObject; // rcx

  if ( ViVerifierDriverAddedThunkListHead )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v3 = (void (__fastcall *)(PDEVICE_OBJECT, PIRP))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v4 = v2;
  if ( v3 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->CancelIrql = v2;
    DeviceObject = CurrentStackLocation->DeviceObject;
    if ( ViVerifierDriverAddedThunkListHead )
      IovpCancelRoutine(DeviceObject, Irp, v3);
    else
      v3(DeviceObject, Irp);
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
