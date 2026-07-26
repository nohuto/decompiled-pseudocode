/*
 * XREFs of ?ndisSetupDxComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0079E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisSetupDxComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _IO_REMOVE_LOCK *DeviceExtension; // rbx

  DeviceExtension = (struct _IO_REMOVE_LOCK *)DeviceObject->DeviceExtension;
  BYTE3(DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink) = 1;
  if ( IoStatus->Status >= 0 )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, PowerState);
    BYTE4(DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink) = 1;
  }
  IoReleaseRemoveLockEx(DeviceExtension + 6, 0LL, 0x20u);
}
