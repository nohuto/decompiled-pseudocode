/*
 * XREFs of IopSetRemoteLink @ 0x14071B3F8
 * Callers:
 *     IopTrackLink @ 0x14057DFD0 (IopTrackLink.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     IoBuildDeviceIoControlRequest @ 0x14012A5C0 (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

NTSTATUS __fastcall IopSetRemoteLink(struct _FILE_OBJECT *Object, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PIRP v7; // rdi
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-168h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-158h] BYREF
  _QWORD v12[34]; // [rsp+80h] [rbp-138h] BYREF

  v5 = 0;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v7 = IoBuildDeviceIoControlRequest(0x1400ECu, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  if ( a3 )
  {
    v5 = a3[2] + 12;
    if ( v5 > 0x110 )
      return -1073741789;
    memmove(v12, a3, v5);
    v12[0] = 0LL;
  }
  v7->Flags |= 4u;
  v7->AssociatedIrp.MasterIrp = (struct _IRP *)v12;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  v7->Tail.Overlay.OriginalFileObject = Object;
  CurrentStackLocation[-1].FileObject = Object;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].Parameters.Create.Options = v5;
  ObfReferenceObject(Object);
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
