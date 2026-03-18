/*
 * XREFs of ExpHwidSendSynchronousIrpToDevice @ 0x14055FE74
 * Callers:
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x14055F650 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14055F790 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x14055FC80 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     ExpCheckPortableOperatingSystem @ 0x140590B7C (ExpCheckPortableOperatingSystem.c)
 *     sub_1407625C0 @ 0x1407625C0 (sub_1407625C0.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140060810 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoGetDeviceObjectPointer @ 0x140560DB0 (IoGetDeviceObjectPointer.c)
 *     sub_140560EA4 @ 0x140560EA4 (sub_140560EA4.c)
 */

__int64 __fastcall ExpHwidSendSynchronousIrpToDevice(
        UNICODE_STRING *a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        ULONG_PTR *a7,
        _QWORD *a8)
{
  NTSTATUS DeviceObjectPointer; // eax
  struct _FILE_OBJECT *v12; // rdi
  NTSTATUS Status; // ebx
  void *v14; // r8
  struct _DEVICE_OBJECT *v15; // rbp
  PIRP v16; // rax
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF

  Object = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(a1, 0x80u, (PFILE_OBJECT *)&Object, &DeviceObject);
  v12 = (struct _FILE_OBJECT *)Object;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = a3;
    v15 = DeviceObject;
    v16 = IoBuildDeviceIoControlRequest(
            a2,
            DeviceObject,
            v14,
            a4,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( v16 )
    {
      v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
      v16->IoStatus.Status = -1073741637;
      Status = IofCallDriver(v15, v16);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( a7 )
          *a7 = IoStatusBlock.Information;
        if ( a8 )
          *a8 = sub_140560EA4(v15);
      }
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  return (unsigned int)Status;
}
