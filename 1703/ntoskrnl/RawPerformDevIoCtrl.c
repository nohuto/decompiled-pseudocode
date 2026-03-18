/*
 * XREFs of RawPerformDevIoCtrl @ 0x14059AE74
 * Callers:
 *     RawQueryFileSystemInformation @ 0x14059ACD8 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14004AAA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall RawPerformDevIoCtrl(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        PVOID OutputBuffer)
{
  PIRP v6; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(0x70000u, a2, 0LL, 0, OutputBuffer, 0x18u, 0, &Event, &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  v6->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  result = IofCallDriver(a2, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
