/*
 * XREFs of ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405C24F8
 * Callers:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401620E8 (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14004AAA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall PC_ENVIRONMENT::Control(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        void *a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  IRP *v8; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(
         IoControlCode,
         DeviceObject,
         0LL,
         0,
         OutputBuffer,
         OutputBufferLength,
         0,
         &Object,
         &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  result = IofCallDriver(DeviceObject, v8);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
