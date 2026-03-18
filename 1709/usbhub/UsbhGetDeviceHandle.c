/*
 * XREFs of UsbhGetDeviceHandle @ 0x1C00261D0
 * Callers:
 *     UsbhCreateDevice @ 0x1C0009764 (UsbhCreateDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017A10 (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x1C002604C (UsbhInitializeTtHub.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B924 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E984 (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

PIRP __fastcall UsbhGetDeviceHandle(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  PDEVICE_OBJECT *v5; // rsi
  PIRP result; // rax
  IRP *v7; // rdx
  __int64 v8; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  v12 = 0LL;
  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = IoBuildDeviceIoControlRequest(0x220437u, v5[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  v7 = result;
  if ( result )
  {
    v8 = (__int64)&result->Tail.Overlay.CurrentStackLocation[-1];
    if ( !v8 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    *(_QWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 8) = &v12;
    Status = IofCallDriver(v5[151], v7);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    else
    {
      IoStatusBlock.Status = Status;
    }
    Log(a1, 4, 1734633554, Status, v12);
    if ( IoStatusBlock.Status >= 0 )
      return (PIRP)v12;
    return (PIRP)v2;
  }
  return result;
}
