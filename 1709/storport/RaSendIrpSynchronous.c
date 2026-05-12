/*
 * XREFs of RaSendIrpSynchronous @ 0x1C0001FDC
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003E90 (RaUnitAtaPassThroughIoctl.c)
 *     RaQueryInterface @ 0x1C0011690 (RaQueryInterface.c)
 *     RaForwardIrpSynchronous @ 0x1C0012394 (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0015084 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001A9FC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003E928 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003F17C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003F428 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003F738 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSendIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v5 = IofCallDriver(DeviceObject, Irp);
  if ( v5 == 259 )
  {
    v5 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v5;
}
