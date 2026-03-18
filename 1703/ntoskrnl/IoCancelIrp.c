/*
 * XREFs of IoCancelIrp @ 0x140018D10
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x140018980 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140018C00 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x140130F90 (PopThermalZoneDpc.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1401682C0 (PopThermalPollingPowerSettingCallback.c)
 *     PopThermalZoneTimerCallback @ 0x14022F7D0 (PopThermalZoneTimerCallback.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 *     NtCancelIoFile @ 0x140433004 (NtCancelIoFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     IoCancelThreadIo @ 0x14053F190 (IoCancelThreadIo.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 *     IopCancelPendingEject @ 0x1406A78E4 (IopCancelPendingEject.c)
 *     PopBatteryRemove @ 0x1406CAA10 (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x1406CBCC0 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1406CBEE8 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopFanRemove @ 0x1406CF6E0 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1407630DC (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x14076DC1C (IovpCancelRoutine.c)
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
