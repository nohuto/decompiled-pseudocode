/*
 * XREFs of RaSendIrpSynchronous @ 0x1C0002C50
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001724 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000FB38 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaForwardIrpSynchronous @ 0x1C00107A4 (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0013BF0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0015834 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaQueryInterface @ 0x1C0039018 (RaQueryInterface.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003CF08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003D6E4 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003D990 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003DCA8 (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
