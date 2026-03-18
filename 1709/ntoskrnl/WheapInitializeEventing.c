/*
 * XREFs of WheapInitializeEventing @ 0x140857E18
 * Callers:
 *     WheaInitialize @ 0x140840C7C (WheaInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 */

NTSTATUS WheapInitializeEventing()
{
  NTSTATUS result; // eax

  LOWORD(WheapDispatchPtr.DeviceExtension) = 1;
  WheapDispatchPtr.Timer = (PIO_TIMER)&WheapDispatchPtr.CurrentIrp;
  WheapDispatchPtr.CurrentIrp = (struct _IRP *)&WheapDispatchPtr.CurrentIrp;
  BYTE2(WheapDispatchPtr.DeviceExtension) = 6;
  WheapDispatchPtr.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)&WheapDispatchPtr.DeviceType;
  *(_QWORD *)&WheapDispatchPtr.DeviceType = &WheapDispatchPtr.DeviceType;
  HIDWORD(WheapDispatchPtr.DeviceExtension) = 1;
  result = EtwRegister(
             &WHEA_ETW_PROVIDER,
             (PETWENABLECALLBACK)WheapEtwEnableCallback,
             0LL,
             (PREGHANDLE)&WheapDispatchPtr.DriverObject);
  if ( result )
    WheapDispatchPtr.DriverObject = 0LL;
  return result;
}
