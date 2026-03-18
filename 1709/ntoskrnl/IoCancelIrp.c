/*
 * XREFs of IoCancelIrp @ 0x140108640
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x14000E0E8 (FsRtlpWaitOnIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x1401082AC (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140108538 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x1401572A0 (PopThermalZoneDpc.c)
 *     PopThermalPollingPowerSettingCallback @ 0x14015CE00 (PopThermalPollingPowerSettingCallback.c)
 *     PopThermalZoneTimerCallback @ 0x140243F40 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x1404D68F8 (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x140568010 (NtCancelIoFile.c)
 *     FsRtlSetKernelEaFile @ 0x14056B890 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 *     FsRtlQueryInformationFile @ 0x1406B0F60 (FsRtlQueryInformationFile.c)
 *     IopCancelPendingEject @ 0x1406D25A4 (IopCancelPendingEject.c)
 *     PopBatteryRemove @ 0x1406FE840 (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x1406FFF30 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140700938 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopFanRemove @ 0x140707300 (PopFanRemove.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1407A4DA4 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x1407AF8DC (IovpCancelRoutine.c)
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
