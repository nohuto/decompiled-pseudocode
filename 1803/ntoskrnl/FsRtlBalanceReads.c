/*
 * XREFs of FsRtlBalanceReads @ 0x1405E9190
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     IoBuildDeviceIoControlRequest @ 0x14012A5C0 (IoBuildDeviceIoControlRequest.c)
 */

NTSTATUS __stdcall FsRtlBalanceReads(PDEVICE_OBJECT TargetDevice)
{
  IRP *v2; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = IoBuildDeviceIoControlRequest(0x66001Bu, TargetDevice, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( !v2 )
    return -1073741670;
  result = IofCallDriver(TargetDevice, v2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
